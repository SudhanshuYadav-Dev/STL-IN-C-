#include<iostream>
#include<list>
using namespace std;

int main(){
	
	list<int>dl;
	dl.push_back(1);
	dl.push_front(2);
	dl.push_back(30);
	dl.push_front(20);
	dl.push_back(50);
	 cout<<"Original List: ";
   	for(int i:dl){
   	cout<<i<<" ";
   }cout<<endl;	
   
   //erase
   dl.erase(dl.begin());
   cout<<"After clear: ";
    for(int i:dl){
   	cout<<i<<" ";
   }cout<<endl;
   
   //size
   cout<<"Size of list is: "<<dl.size()<<endl;
   
   
   //copy list
   list<int>copy(dl);
   cout<<"Element of copy list: ";
   	  for(int i:copy){
   	cout<<i<<" ";
   }cout<<endl;
   
   list<int>haa(5,1000);
   cout<<"Element of haa list: ";
   	  for(int i:haa){
   	cout<<i<<" ";
   }cout<<endl;
   
}