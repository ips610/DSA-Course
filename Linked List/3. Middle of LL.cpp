#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

Node *getMiddle(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast->next == NULL)
        {
            return slow;
        }
    }
    return slow->next;
}

int getLength(Node *head)
{
    int len = 0;

    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}
Node *findMiddle(Node *head)
{
    // Method - 1

    /*

    int len = getLength(head);

    int middlePos = len / 2;
    int currentPos = 0;

        // Node *temp = head;
    while (currentPos < middlePos) {
        // temp = temp->next;
        head = head -> next;
        currentPos++;
    }
        return head;
    return temp;

    */

    // Method -2

    return getMiddle(head);
}
