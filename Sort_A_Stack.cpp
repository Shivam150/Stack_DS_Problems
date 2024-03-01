#include<bits/stdc++.h>
using namespace std;


void sortedInsert(stack<int> &S, int num){
	if(S.empty() || S.top() < num){
		S.push(num);
		return ;
	}
	
	int n = S.top();
	S.pop();
	
	sortedInsert(S,num);
	
	S.push(n);
}


void sortStack(stack<int> &S){
	if(S.empty()){
		return ;
	}
	
	int num = S.top();
	S.pop();
	
	sortStack(S);
	
	sortedInsert(S,num);
	
}

int main(){
	stack<int> S;
	S.push(5);
	S.push(-2);
	S.push(3);
	S.push(-7);
	S.push(9);
	
	int N = S.size();
	cout<<"Size of Stack is==:"<<N<<endl;
	
//	cout<<"Stack Elements Before Sorting: "<<endl;
	
//	while(!S.empty()){
//		cout<<S.top()<<" ";
//		S.pop();
//	}
//	cout<<endl;

    sortStack(S);
    
    while(!S.empty()){
		cout<<S.top()<<" ";
		S.pop();
	}
	cout<<endl;
	
}