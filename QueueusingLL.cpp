#include <iostream>
#include "qu.h"

using namespace std;

class Queue
{
public:
    SinglyList obj;

    void enqueue()
    {
        obj.insert();
    }

    void dequeue()
    {
        obj.deletes();
    }
    void display()
    {
	    obj.show();
    }

};

int main()
{
    int choice;
    Queue obj1;

    while (true)
    {
        cout << "enter what u want to do" << endl;
        cout << "1. ENQUEUE" << endl<<"2.DEQUEUE"<<endl<<"3.end"<<endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            obj1.enqueue();
	    obj1.display();
            break;
        case 2:
            obj1.dequeue();
	    obj1.display();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "Wrong Case" << endl;
        }
    }
    return 0;
}
