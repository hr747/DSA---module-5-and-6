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
void insat_any_postion(Node *&hade, int index, int valu)
{
    Node *newnode = new Node(valu);
    Node*temp=hade;
    for(int i=1;i<index;i++)
    { temp=temp->next;
        
    }
    newnode->next=temp->next;
    temp->next=newnode;
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
    Node *a = new Node(20);
    Node *b = new Node(30);
    hade->next = a;
    a->next = b;
     insat_any_postion(hade, 2,50);
    print_hade(hade);

    return 0;
}