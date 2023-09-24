#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        
        if (this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void InsertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void InsertAtPositon(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 0 || head == NULL)
    {
        InsertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int count = 0;

    while (count < pos - 1 && temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    if (temp == NULL && count == pos)
    {
        InsertAtTail(tail, data);
        return;
    }

    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
    return;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void DeleteAtPosition(Node* &head, int pos){
    Node* prev = NULL;
    Node* curr = head;

    if (pos == 0){
        head = head->next;
        curr->next = NULL;
        delete curr;
    }

}

void DeleteByValue(Node* &head, int val){

}
void DeleteAllNodes(Node* &head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        Node *toBeDeleted = temp;
        temp = temp->next;
        delete toBeDeleted;
    }

    cout << "Deleted All Nodes" << endl;
}

int main()
{
    Node *node1 = new Node(10);
    // Node* node1 = NULL;
    Node *head = node1;
    Node *tail = node1;
    // print(head);

    InsertAtHead(head, 12);
    // print(head);

    InsertAtTail(tail, 20);
    // print(head);

    InsertAtTail(tail, 30);
    // print(head);

    InsertAtPositon(head, tail, 0, 40);
    // print(head);

    InsertAtPositon(head, tail, 1, 50);
    print(head);

    DeleteAtPosition(head, 0);
    print(head);

    DeleteAllNodes(head);
    return 0;
}