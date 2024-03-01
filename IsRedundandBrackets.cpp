#include<bits/stdc++.h>
using namespace std;


 

bool isRedundandBrackets(string &s){
	stack<char> Stack;
	
	for(int i =0;i<s.length();i++){
		char ch  = s[i];
		
		if(ch == '(' || ch == '+'||ch=='-'||ch=='*'||ch=='/'|| ch=='%'){
			Stack.push(ch);
		}else{
			
			if(ch == ')'){
				bool isRedundant = true;
				while(Stack.top() != '(' ){
					char top = Stack.top();
					if(top == '+' || top == '-' || top == '*' || top == '/'||top=='%'){
						isRedundant = false;
					}
					Stack.pop();
				}
				
				if(isRedundant){
					return true;
				}
				
				Stack.pop();
			}
		}
	}
	
	return false;
}

int main(){
	string str = "((a+b)";
	
	
	cout<<isRedundandBrackets(str)<<endl;
	if(isRedundandBrackets(str)){
		cout<<"Yes the given string is Redundand"<<endl;
	}else{
		cout<<"No! the given string is Not A Redundand"<<endl;
	}
	
	return 0;
}