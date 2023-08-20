

#include<bits/stdc++.h>
using namespace std;
int totalnodes=0;
template <class T>
class node{
  public:
  T data;
  node<T> *next;
};

//creating a class linkedlist
template <class T>
class Circular_Linked_list{
public:
node<T> *head=NULL;
node<T> *p=NULL;
node<T> *pointer1=NULL;

void delete_(){
    int par_position=0;
    pointer1=head;
    cout<<"which par_position to delete";
    cin>>par_position;
    if(par_position>totalnodes)cout<<"invalid";
    else{
        if(par_position==1){
            if(head->next==head)head=NULL;
            else{
                p=head;
                while(p->next!=head)p=p->next;
                pointer1=head;
                head=head->next;
                free(pointer1);
                p->next=head;
            }
        }
        else
	{
            while(par_position!=1 && pointer1->next!=head)
            {
                p=pointer1;
                pointer1=pointer1->next;
		par_position--;
            }
            if(pointer1->next==head){
                p->next=head;
                free(pointer1);
            }
            else{
                p->next=pointer1->next;
                free(pointer1);
            }
        }
    }
}
void search(T searchdata){
int reveal=0;
    if(head==NULL)cout<<"not in the L.L";
    else{
        pointer1=head;
        while(pointer1->next!=head){
            if(pointer1->data==searchdata)
            {
                reveal=1;
                cout<<"yes it is there";
                break;
            }
            else{
            pointer1=pointer1->next;
            }
        }
        if(pointer1->data==searchdata && reveal!=1)
           {
                reveal=1;
                cout<<"yes it is present";
            }
        if(reveal==0)cout<<"not present in L.L";
    }
}
void show(){
    node<T> *pointer_to_node=head;
    if(pointer_to_node==NULL)cout<<"underflow";
    else{
    while(pointer_to_node->next!=head)
    {
        cout<<pointer_to_node->data<<" ";
        pointer_to_node=pointer_to_node->next;
    }
    cout<<pointer_to_node->data;
    }
}
void insert(T insertdata)
{
    node<T> *pointer=head;
    node<T> *newnode=new node<T>;
    newnode->data=insertdata;
    newnode->next=NULL;
    int par_position=0;
    cout<<"at which par_position to insert starting from 1\n";
    cin>>par_position;
    if(par_position==1){
        if(head==NULL){
            head=newnode;
            newnode->next=head;
        }
        else{
            newnode->next=head;
            p=head;
            while(p->next!=head)p=p->next;
            p->next=newnode;
            head=newnode;
            }
        totalnodes++;
    }
    else{
        if (par_position==totalnodes+1){
        while(pointer->next!=head)pointer=pointer->next;
        pointer->next=newnode;
        newnode->next=head;
        totalnodes++;
        }
        else if(par_position>totalnodes+1)cout<<"invalid demand of par_position";
        else{
            while(pointer->next!=head && par_position!=1){
                p=pointer;
                pointer=pointer->next;
                par_position--;
            }
            p->next=newnode;
            newnode->next=pointer;
            totalnodes++;
        }
    }
}
};
int main(){
    int  result=0,checker=0;
    int value=0;
    Circular_Linked_list<int> object;
    while(true)
    {
    cout<<"operation u want to perform :\n"<<"1.insert\n"<<"2.delete\n"<<"3.search\n"<<"4.show LinkedList\n";
    cin>>result;
    switch(result){
        case 1:
          cout<<"the data u want to insert in single L.L";
          cin>>value;
          object.insert(value);
          break;
        case 2:
           object.delete_();
           cout<<"\n";
	   break;
        case 3:
          cout<<"enter the value u wnat to search";
          cin>>value;
          object.search(value);
          break;
        case 4:
           object.show();
           break;
        default:
           checker=1;
    }
    cout<<"\n";
    if(checker==1)break;
    }
    return 1;
}
