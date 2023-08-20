#include <iostream>
#include"sarray.h"
int main() {
    Array obj;
   int choice;
	int value;
	while(1){
	cout << "enter operation u want to do" << endl<< "1.push" << endl<< "2.top" << endl<< "3.pop" << endl<< "4. End" << endl;
	cin >> choice;
	switch(choice){
		case 1 : 
		cout << "enter value"<< endl;
		cin >> value;
		obj.insert(value);
		obj.print();
		cout << endl;
		break;
		case 2: 
		obj.search();
		
		cout << endl;
		break;
		case 3:
		obj.deletes();
		obj.print();
		cout << endl;
		break;
		case 4:
		return 0;
	}
	}
}
