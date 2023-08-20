#include <iostream>

using namespace std;

template <class T>
class Node
{
public:
    T data;
    Node *next;
};

class SinglyList
{
public:
    Node<int> *head;
    SinglyList()
    {
        head = NULL;
    }

    void insert()
    {
        Node<int> *newNode = new Node<int>();
	cout << "Enter a number ";
        cin >> newNode->data;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node<int> *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void show()
    {
	    Node<int> *temp=head;
	    while(temp!=NULL)
	    {
		    cout<<temp->data<<" ";
		    temp=temp->next;
	    }
	    cout<<endl;
    }

    void deletes()
    {
        Node<int> *temp = head;
        head=head->next;
        delete temp;
    }
};
