#include <iostream>

using namespace std;

template <class T>
class Node
{
public:
    T data;
    Node *next;
};

class SinglyLL
{
public:
    Node<int> *head;

    SinglyLL()
    {
        head = NULL;
    }

    void insert()
    {
        Node<int> *newNode = new Node<int>();
        cout << "Enter a value to be inserted: ";
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

    void deletes()
    {
        Node<int> *temp = head;
        Node<int> *previousNode;

        while (temp->next != NULL)
        {
            previousNode = temp;
            temp = temp->next;
        }
        previousNode->next = NULL;
        delete temp;
    }

    void show()
    {
        if (head == NULL)
        {
            cout << "empty stack" << endl;
        }
        else
        {
            Node<int> *temp = head;

            while (temp!= NULL)
            {
		cout<<temp->data<<" ";
                temp = temp->next;
            }

           cout<<endl;
        }
    }
};
