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
	
	//finding
	cout<<"Finding 6-> "<<binary_search(v.begin(), v.end(),6)<<endl;
	cout<<"Finding 5-> "<<binary_search(v.begin(), v.end(),5)<<endl;
	
	//Lower bound
	cout<<"lower bound-> "<<lower_bound(v.begin(), v.end(), 2)-v.begin()<<endl;//0
	//upper bound
	cout<<"upper bound-> "<<upper_bound(v.begin(), v.end(), 2)-v.begin()<<endl;//1
	
	
}