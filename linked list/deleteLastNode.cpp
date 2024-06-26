#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node(int data)
    {
        this->data = data;
        next=NULL;
    }
};
Node* deleteLastNode(Node* head)
{
    if(!head) return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    Node*curr=head;
    Node*prev=NULL;
    while(curr->next)
    {
        prev=curr;
        curr = curr->next;

    }
    delete curr;
    prev->next=NULL;
 
    return head;

}
void print(Node* head){
 while(head)
 {
    cout<<head->data<<" ";
    head=head->next;
 }
 cout<<"NULL";
}
int main()
{
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
     head->next->next->next=new Node(40);
   print(deleteLastNode(head));
return 0;
}