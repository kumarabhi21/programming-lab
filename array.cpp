#include<iostream>
using namespace std;
template<class T>
class array
{
	public:
	T arr[100];
	int index=-1;
	void insertNumber()
	{
		T val;
		cout<<"Enter value to be inserted:";
		cin>>val;
		index++;
		arr[index]=val;
	}
	void deleteNumber()
	{
		if(index==-1)
		{
			cout<<"empty"<<endl;
		}
		T val;
		cout<<"Enter value to deleted"<<endl;
		cin>>val;
		for(int i=0;i<=index;i++)
		{
			if(arr[i]==val)
			{
				for(int j=i;j<=index;j++)
				{
					arr[j]=arr[j+1];
				}
				cout<<"deleted"<<endl;
				index--;
				return;
			}
		}
		cout<<"Not found"<<endl;
		return;
	}
	void printArray()
	{
		for(int i=0;i<=index;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		return;
	}
	void searchNumber()
	{
		T val;
		cout<<"Enter value to search:";
		cin>>val;
		for(int i=0;i<=index;i++)
		{
			if(arr[i]==val)
			{
				cout<<"found"<<i<<endl;
				return;
			}
		}
		cout<<" not found"<<endl;
	}
};
int main()
{
	array<int> ch;
	int input,ans;
	while(1)
	{
		cout<<endl<<"1.Insert"<<endl<<"2.Delete\n"<<"3.Display\n"<<"4.Search\n"<<"5.exit\n"<<"Select:";
		cin>>input;

		switch(input)
		{
			case 1:
				ch.insertNumber();
				break;
			case 2:
				ch.deleteNumber();
				break;
			case 3:
				ch.printArray();
				break;
			case 4:
				ch.searchNumber();
				break;
				case 5:
				return 0;
				break;
			default:
				cout<<"Wrong input!!"<<endl;
		
			
		}
		
	}
	return 0;
}

