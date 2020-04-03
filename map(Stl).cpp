//THIS PROGRAM SHOWS HOW MAP WORKS
#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
	map<int,string>m;
	m.insert(pair<int,string>(1,"FIRSTNAME"));
	m.insert(pair<int,string>(2,"SECONDNAME"));
	m[4]=(20,"NICKNAME");
	m[3]=(120,"PETNAME");
	map<int,string>::iterator itr;
	for(itr=m.begin();itr!=m.end();itr++){
		cout<<itr->first<<" "<<itr->second<<endl;
	}
	return 0;
}
