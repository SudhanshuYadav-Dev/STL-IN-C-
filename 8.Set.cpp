#include<iostream>
#include<set>
using namespace std;

int main(){
	set<int>s;
	s.insert(20);
	s.insert(12);
	s.insert(2);
	s.insert(22);
	s.insert(55);
	s.insert(55);
	s.insert(55);
	
	//printing
	for(int i:s){
		cout<<i<<" ";
	}cout<<endl;
	
	
	//erase
//	s.erase(s.begin(),s.end());
	set<int>::iterator it=s.begin();
	it++;
	s.erase(it);
	cout<<"Set after clear! ";
	for(int i:s){
		cout<<i<<" ";
	}cout<<endl;
	
	//count
	cout<<"55 is presents "<<s.count(55)<<endl;//1
	
	//find
	 
	
	
		
}