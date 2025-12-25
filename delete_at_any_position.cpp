#include <bits/stdc++.h>

using namespace std;
class Node

{

 public:

 int val;

 Node* next;

 Node(int val)
 {
 this->val=val;
 this->next=NULL; 

 }

};
void insat_tail(Node*&hade,Node*&tail,int valu)
{ 
    Node* newnode=new Node(valu);
    if(hade==NULL)
    {
        hade=newnode;
        tail=newnode;
    }
    tail->next=newnode;
    tail=newnode;
}
void delete_at_any_postiton(Node*&hade,Node*&tail,int valu)
{Node * temp=hade;
   
    for(int i=1;i<valu;i++)
    { 
        temp=temp->next;

    }
     Node*  delete_position=temp->next;
     temp->next=temp->next->next;
     delete delete_position;
}
void print(Node*hade)
{
    Node*temp=hade;
    while (temp!=NULL)
    {
        /* code */
        cout<<temp->val<<endl;
        temp=temp->next;
    }
    
}


 int main()

{
    Node*hade=NULL;
    Node*tail=NULL;
int valu;
while (1)
{
    /* code */
    cin>>valu;
    if(valu==-1)
    { break;
    
    }
    insat_tail(hade,tail,valu);
}
delete_at_any_postiton(hade,tail,2);
print(hade);

    return 0;
}