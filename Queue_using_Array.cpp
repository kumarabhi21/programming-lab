#include"qarray.h"
int main() {
    Array obj;
   int choice;
	int value;
	while(1){
	cout << "Enter what u want to do" << endl<< "1.push" << endl<< "2.delete" << endl<< "3.print" << endl<< "4. end" << endl;
	cin >> choice;
	switch(choice){
		case 1 : 
		cout << "enter number"<< endl;
		cin >> value;
		obj.insert(value);
		cout << endl;
		break;
		case 2: 
		obj.deletes();
		cout << endl;
		break;
		case 3:
		obj.print();
		cout << endl;
		break;
		case 4:
		return 0;
	}
	}
}
