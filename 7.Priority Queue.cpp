#include<iostream>
#include<queue>
using namespace std;

int main(){
	//creting max heap
	priority_queue<int> maxi;
	
	//creating mini heap
	priority_queue<int,vector<int> , greater<int> >mini;
	
	//Operating of Maxi Heap
	maxi.push(120);
	maxi.push(100);
	maxi.push(60);
	maxi.push(40);
	maxi.push(300);
	
	//size
	int n=maxi.size();
	
	//printing
//	cout<<"Maxi heap is: ";
//	for(int i=0; i<n; i++){
//		cout<<maxi.top()<<" ";
//		maxi.pop();
//	}
//	cout<<endl;
	
    cout<<"Top Element of the Maxi: "<<maxi.top()<<endl;//greatest element
	maxi.pop();
	cout<<"Size->"<<maxi.size()<<endl;
	cout<<"Top Element after pop: "<<maxi.top()<<endl;//second greatest element
	
	
	//Operating of Mini Heap
	mini.push(10);
	mini.push(20);
	mini.push(15);
	mini.push(1234);
	
	//size
	int n1=mini.size();
	
	//print
//	cout<<"Elements of mini heap: ";
//	for(int i=0; i<n1; i++){
//		cout<<mini.top()<<" ";
//		mini.pop();
//	}cout<<endl;
	
	cout<<"Top of the Mini heap: "<<mini.top()<<endl;
	mini.pop();
	cout<<"Top of the Mini heap after pop: "<<mini.top()<<endl;
	
	//empty
	bool empty=mini.empty();
	cout<<"Khali hai kya bhai :";
	if(empty){
		cout<<"Ha bhai "<<endl;
	}
	else{
		cout<<"Nahi bhai "<<endl;
	}
	
}