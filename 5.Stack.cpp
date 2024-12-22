#include<iostream>
#include<stack>
using namespace std;

int main(){
	
	//creating
	stack<int>s;
	
	//pushing
	s.push(10);
	s.push(20);
	
	//Acessing Element
	cout<<"Top Element: "<<s.top()<<endl;//20

    //poping
	s.pop(); //pop from top;
	cout<<"Top Element: "<<s.top()<<endl;//10
  
    //size
    cout<<"Size of Stack is: "<<s.size()<<endl;
    
    ///Empty
    bool sEmpty=s.empty();
	if(sEmpty){
		cout<<"Stack is empty!"<<endl;
	}
	else{
		cout<<"Stack is not empty!"<<endl;
	}
	
	
}