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
void insat_tail(Node *&hade, int valu)
{
    Node *newnode = new Node(valu);
    if(hade==NULL)
    //  hade jodi null hoi 
    {
        hade=newnode;
        return;
    }
     Node *temp = hade;
    while (temp->next != NULL)
    {
        /* code */

        temp = temp->next;
    }
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
    Node *a = new Node(10);
    Node *b = new Node(10);
    hade->next = a;
    a->next = b;
    insat_tail(hade, 70);
    print_hade(hade);

    return 0;
}