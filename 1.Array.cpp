#include<iostream>
#include<array>
using namespace std;

int main(){

//creating
array<int,4>arr={1,2,3,4};

//size
int size=arr.size();

//printing
for(int i=0; i<size; i++){
	cout<<arr[i]<<" ";
}cout<<endl;

//Acessing element
cout<<"Element at 1st index: "<<arr.at(1)<<endl;
cout<<"First Element of Array: "<<arr.front()<<endl;
cout<<"Last Element of Array: "<<arr.back()<<endl;

//functions
cout<<"Empty or not->: "<<arr.empty();
}