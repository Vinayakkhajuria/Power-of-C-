#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);	
	vector<int>::iterator itr;
	itr=v.begin();
	for(;itr !=v.end();itr++){
		cout<<"VALUE =="<<*itr<<endl;
	}
	return 0;
}
