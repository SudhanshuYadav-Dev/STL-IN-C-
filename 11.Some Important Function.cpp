#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	//Creating
	vector<int> v;
	
	//pushing
	v.push_back(2);
	v.push_back(4);
	v.push_back(6);
	v.push_back(8);
	v.push_back(10);
	v.push_back(12);
	
	
	//MAX AND MIN FUN
	int a=3;
	int b=4;
	
	cout<<"Max:-> "<<max(a,b)<<endl;
	cout<<"Min:-> "<<min(a,b)<<endl;
	
	//SWAP
	swap(a,b);
	cout<<"A-> "<<a<<endl;
	
	//Reverse
	string s="SUDHANSHU";
	reverse(s.begin(), s.end());
	cout<<s<<endl;
	
	//Rotate
	vector<int> arr={1,2,3,4,5,6,6};
	cout<<"Rotate the Array: ";
	rotate(arr.begin(), arr.begin()+1,arr.end());
	for(int i:arr){
		cout<<i<<" ";
	}cout<<endl;
	
	//Sort
	vector <int> v1={54,3,24,7,6,5,4};
	sort(v1.begin(), v1.end());
	cout<<"Sort Array: ";
	for(int i:v1){
		cout<<i<<" ";
	}cout<<endl;
		
}