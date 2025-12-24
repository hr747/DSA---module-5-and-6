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
   if(temp==NULL)
   {
    return;
   }
   print_hade(temp->next);
   cout<<temp->val<<endl;
}

int main()

{
    Node *hade = NULL;
    Node *tail=NULL;
    int valu;

    while (1)
    {
        /* code */
        cin>>valu;
        if(valu==-1)
        {
            break;
        }
         insat_tail(hade,tail, valu);
    }
    
    insat_tail(hade,tail, 70);
    print_hade(hade);

    return 0;
}