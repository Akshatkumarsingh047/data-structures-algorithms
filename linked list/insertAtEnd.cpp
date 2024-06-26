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
Node* insertAtEnd(Node* head,int data)
{
    Node*temp=new Node(data);
    if(head==NULL)
    return temp;
    Node*curr=head;
    while(curr->next)
    {
        curr=curr->next;
    }
    curr->next=temp;
    return head;

}
void print(Node* head){
 while(head)
 {
    cout<<head->data<<" ";
    head=head->next;
 }
}
int main()
{
    // Node*head=new Node(10);
    // head->next=new Node(20);
    // head->next->next=new Node(30);
    Node*head=NULL;
 
    print( insertAtEnd(head,5));
return 0;
}