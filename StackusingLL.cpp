
#include <iostream>
#include "stackss.h"

using namespace std;

class Stack
{
public:
    SinglyLL obj;

    void push()
    {
        obj.insert();
    }

    void pop()
    {
        obj.deletes();
    }

    void PrintTop()
    {
        obj.show();
    }
};

int main()
{
    int choice;
    Stack obj1;

    while (true)
    {
        cout << "Enter whcih operation you want to perform" << endl;
        cout << "1. Push" << endl<< "2. Pop" << endl<<"3. Prints" << endl<< "4. End" << endl;
	cin>>choice;

        switch (choice)
        {
        case 1:
            obj1.push();
            break;
        case 2:
            obj1.pop();
            break;
        case 3:
            obj1.PrintTop();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Wrong Case" << endl;
        }
    }
    return 0;
}
