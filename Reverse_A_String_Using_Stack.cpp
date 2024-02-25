#include<bits/stdc++.h>
using namespace std;


// Reverse a string usign Stack

int main(){
	string str;
	cin>>str;
	
	stack<char> S;
	
	for(int i =0;i<str.length();i++){ // Traverse a string
		char ch = str[i];
		S.push(ch);
	}
	
	string ans = "";
	
	while(!S.empty()){
		char ch = S.top();
		ans.push_back(ch);
		S.pop();
	}
	
	cout<<"Reverse String is===:"<<ans<<endl;
}