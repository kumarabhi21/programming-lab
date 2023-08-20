#include <iostream>
using namespace std;
const int maximum = 100;
class Array
{
	private:
	int arr[maximum];
    	int size;
	public:
     	Array() : size(0) {}
     	void insert(int data)
       	{
	 	if (size < maximum) {
	    		arr[size++] = data;
		}
    	}
    	void deletes()
       	{
		if(size==0)
			cout<<"empty";
		else{
			cout<<arr[size-1]<<"deleted"<<endl;
			size--;
		}
    	}
    	void search()
       	{
		cout<<arr[size-1];
	}
    	void print()
	{
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<" ";
	      	}
    	}
};
