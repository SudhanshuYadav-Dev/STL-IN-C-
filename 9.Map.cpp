#include<iostream>
#include<map>
using namespace std;

int main(){
	//creating
	map<int,string>m;
	
	//insert
	m.insert({5,"SUDHANSHU"});
	m.insert({12,"KO"});
	m.insert({18,"CHAIYE"});
	m[15]="CAR";
	
	//printing
	for(auto i:m){
		cout<<i.first<<" "<<i.second<<" ";
	}cout<<endl;
	
	//count
	cout<<"finding 12: "<<m.count(12)<<endl;
	
	m.erase(12);
	cout<<"After Erase: ";
	for(auto i:m){
		cout<<i.first<<" "<<i.second<<" ";
	}cout<<endl;
	
	//find
	auto it=m.find(15);
	for(auto i=it; i!=m.end(); i++){
		cout<<(*i).first<<endl;
	}
}