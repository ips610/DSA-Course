#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data, Node next, Node prev)
    {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
};

Node *removeDuplicates(Node *head)
{
    // Write your code here
    if (head == NULL)
    {
        return head;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        if ((temp->next != NULL) && temp->data == temp->next->data)
        {
            Node *nextnext = temp->next->next;
            Node *deleteit = temp->next;
            delete (deleteit);
            temp->next = nextnext;
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;
}
