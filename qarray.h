#include <iostream>
using namespace std;
const int maximum= 100;

class Array {
private:
    int arr[maximum];
    int size;
public:
    Array() : size(0) {}

    void insert(int data) {
        if (size < maximum) {
            arr[size++] = data;
        }
    }

    void deletes() {
        if(size==0)
        cout<<"Empty";
        else{
                    cout<<arr[0]<<" deleted"<<endl;
            for(int i=0;i<size-1;i++){
            arr[i] = arr[i+1];
        }

        size--;}
    }

    void print(){
        if(size==0)
        cout<<"Empty";
        else{
        for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }}
    }
};
