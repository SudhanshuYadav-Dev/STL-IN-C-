#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<char>v;
	
	
	//capacity
	cout<<v.capacity()<<endl;//0
	
	v.push_back('a');
	cout<<v.capacity()<<endl;//1
	
	v.push_back('b');
	cout<<v.capacity()<<endl;//2
	
	v.push_back('c');
	cout<<v.capacity()<<endl;//4
	
	//pop back
	v.pop_back();// Remove c
	
	//printing
	for(char i:v){
		cout<<i<<" ";
	}cout<<endl;
	
	//size
	cout<<v.size()<<endl;
	
	//Acessing
	cout<<"First Elememt: "<<v.front()<<endl;
	cout<<"Last Element: "<<v.back()	<<endl;
	cout<<"Element at index 1: "<<v.at(1)<<endl;
	
	//clear
	cout<<"Before clear the size is: "<<v.size()<<endl;
	v.clear();
	cout<<"After clear the size is: "<<v.size()<<endl;
	
	cout<<"Capacity After clear the array: "<<v.capacity()<<endl;
	//Note: Capacity will not be affected by using clear fun
	//it always indicates the memory allocation which is the actuall capacity of an array
	
	//new vector
	vector<char> ch(5,'c');
	for(char i:ch){
		cout<<i<<" ";
}cout<<endl;

// new vector with copy 
   vector<char>copy(ch);
   for(char i:ch){
   	cout<<i<<" ";
 }cout<<endl;
}