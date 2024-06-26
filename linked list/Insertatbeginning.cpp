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
Node* insertAtBeginning(Node* head,int data)
{
    Node*temp=new Node(data);
    temp->next=head;
    head=temp;
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
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    insertAtBeginning(head,5);
    print( insertAtBeginning(head,5));
return 0;
}