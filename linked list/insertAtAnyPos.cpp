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
Node* insertAtAnyPos(Node* head,int data,int pos)
{
    

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
 
    print( insertAtAnyPos(head,5));
return 0;
}