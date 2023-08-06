#include <iostream>
using namespace std;
template <class T>
class Node{
    public:
    T data;
    Node<T>* next;
    
    Node(T data){
        this->data=data;
        this->next=NULL;
    }
};
template <typename T>
void insertatHead(Node<T>* &head,T data)
{
    Node<T>* temp=new Node<T>(data);
    temp->next=head;
    head=temp;
}
template <typename T>
void insertatTail(Node<T>* &tail,int data)
{
    Node<T>* temp=new Node<T>(data);
    tail->next=temp;
    tail=temp;
}
template <typename T>
void insertAtPosition(Node<T>* &tail,Node<T>* &head,int position,int data)
{
    if(position==1)
    {
        insertatHead(head,data);
        return;
    }
    Node<T>* temp=head;
    int count=1;
    while(count<position-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL)
    {
       insertatTail(tail,data);
       return;
    }
    Node<T>* nodet=new Node<T>(data);
    nodet->next=temp->next;
    temp->next=nodet;
}
template <typename T>
void print (Node<T>* &head)
{
    Node<T>* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
template <typename T>
void deletionNode(int position,Node<T>* &head)
{
    if(position==1)
    {
        Node<T>* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node<T>* current=head;
        Node<T>* prev=NULL;
        int count=1;
        while(count<position){
            prev=current;
            current=current->next;
            count++;
        }
        prev->next=current->next;
        current->next=NULL;
        delete current;
    }
}
template <typename T>
void search(Node<T>* &head,int value)
{
    
    Node<T>* temp=head;
    while(temp!=NULL) {
        if(temp->data==value) {
            cout<<"element found";
            return;
        }
        temp=temp->next;
    }
    cout<<"element not found";
    return;
}
int main() {
    Node<int>* node1=new Node<int>(10);
    Node<int>* head=node1;
    Node<int>* tail=node1;
   int result,ans=0;
   while(true)
   {
   cout<<"enter the function u want to use";
   cin>>result;
   switch(result)
   {
       case 1:
       int val;
       int pos;
       cout<<"enter the value to be inserted";
       cin>>val;
       cout<<"enter position";
       cin>>pos;
       insertAtPosition(tail,head,pos,val);
       print<int>(head);
       break;
       case 2:
       cout<<"enter at which position u have to delete";
       int pos1;
       cin>>pos1;
       deletionNode(pos1,head);
       print<int>(head);
       break;
       case 3:
       cout<<"enter the value to be search";
       int vall;
       cin>>vall;
       search<int>(head,vall);
       default:
       ans=1;
   }
   if(ans==1)
   break;
   }
   
    return 0;
}