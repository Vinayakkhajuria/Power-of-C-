#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>v;
	v.push_back(120);
	v.push_back(98);
	v.push_back(40);
	v.push_back(550);	
	vector<int>::iterator itr;
	itr=v.begin();
	sort(v.begin(),v.end());
	cout<<"VALUE AFTER SORTING :"<<endl;
	for(;itr !=v.end();itr++){
		cout<<"VALUE =="<<*itr<<endl;
	}
	return 0;
}
