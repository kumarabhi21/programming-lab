#include<iostream>
using namespace std;

template<typename T>
class array{
	public:
		T mInd=-1;
		T *array = new T[100];
		
		void search(T d){
			T i;
			for(i=0;i<=mInd;i++){
				if(array[i]==d){ 
					cout<<"Data Presnt at index  "<<i<<endl;
					return;
				}
			}
			cout<<"not present"<<endl;
		}	
		void insert(T d){
			mInd++;
			array[mInd]=d;
		}
		void delet(T num){
			T index;
			for(index=0;index<=mInd;index++){
				if(array[index]==num){ 
					break;
				}
			}
			for(T i=index;i<mInd;i++){
				array[i]=array[i+1];       
			}
			mInd--;
		}
		void print(){
			for(T i=0;i<=mInd;i++){\
				cout<<array[i]<<",";
			}
		}

};

int main(){
	array<int> arr;
	int i;
	for(i=0;i<25;i++ ){
		arr.insert(i);       
	}
	arr.search(24);
	arr.delet(24);
	arr.print();
}
