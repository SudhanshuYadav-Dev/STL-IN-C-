#include<iostream>
#include<deque>
using namespace std;

int main(){
   //creating
   deque<int>d;
   
   //Pushing element
   d.push_back(1);
   d.push_front(2);
   d.push_back(10);
   
   //printing
   for(int i:d){
   	cout<<i<<" ";
   }cout<<endl;
   
   //delting element
//   d.pop_back();  
//   d.pop_front();
//   for(int i:d){
//   	cout<<i<<" ";
//   }cout<<endl;

    //Acessing element
    cout<<"First Element: "<<d.front()<<endl;
    cout<<"Last Element: "<<d.back()<<endl;
    cout<<"Element at index 1: "<<d.at(1)<<endl;
    
    //size
    cout<<d.size()<<endl;
	
	//clear
	cout<<"Size before Clear: "<<d.max_size()<<endl;
	d.clear();
	cout<<"Size after Clear: "<<d.max_size()<<endl;
	for(int i:d){
   	cout<<i<<" ";
   }cout<<endl;		
   
   //erase
   d.erase(d.begin(), d.end()-1);
   cout<<"After Erase: ";
   	for(int i:d){
   	cout<<i<<" ";
   }cout<<endl;	
   
   
   
   
   
}