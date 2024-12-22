#include<iostream>
#include<queue>
using namespace std;
int main(){
	
	//creting
	queue<int>q;
	
	//pushing
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(60);
	
	//poping
	q.pop();
	//accessing
	cout<<"Top of the queue: "<<q.front()<<endl;
	cout<<"Back of the queue: "<<q.back()<<endl;
	
	//size
	cout<<"Size of the Queue is: "<<q.size()<<endl;
	 
	//printing
	cout<<"Queue Elements are: ";
	for(int i=0; i<q.size(); i++){
		queue<int>tempQueue;
		cout<<q.front()<<" ";
		tempQueue.push(q.front());
		q.pop();
		q.push(tempQueue.back());		
	}
	
}