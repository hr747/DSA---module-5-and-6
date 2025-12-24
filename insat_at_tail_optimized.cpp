#include <bits/stdc++.h>

using namespace std;
class Node

{

public:
    int val;

    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insat_tail(Node *&hade, Node* &tail,int valu)
{
    Node *newnode = new Node(valu);
    if(hade==NULL)
    //  hade and tail jodi null hoi 
    {
        hade=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=tail->next;
    // tail=newnode;

    
}
void print_hade(Node *hade)
{
    Node *temp = hade;
    while (temp != NULL)
    {
        /* code */
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()

{
    Node *hade = new Node(10);
    Node *a = new Node(30);
    Node *tail = new Node(40);
    hade->next = a;
    a->next = tail;
    insat_tail(hade,tail, 70);
    print_hade(hade);

    return 0;
}