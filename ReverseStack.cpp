#include<bits/stdc++.h>
using namespace std;


void insertAtBottom(stack<int> &S, int x){
	if(S.empty()){
		S.push(x);
		return ;
	}
	
	int num = S.top();
	S.pop();
	insertAtBottom(S,x);
	
	S.push(num);
}

void resverseStack(stack<int> &S){
	if(S.empty()){
		return ;
	}
	
	int num = S.top();
	S.pop();
	
	resverseStack(S);
	
	insertAtBottom(S,num);
	
}

int main(){
	stack<int> S;
	S.push(8);
	S.push(7);
	S.push(6);
	S.push(5);
	
	int N = S.size();
	cout<<"Size of Stack is==:"<<N<<endl;
	
//	cout<<"Stack Elements Before Insertion At Bootom: "<<endl;
//	
//	while(!S.empty()){
//		cout<<S.top()<<" ";
//		S.pop();
//	}
//	cout<<endl;

    resverseStack(S);
    
    cout<<"Stack Elements After Reverse: "<<endl;
	
	while(!S.empty()){
		cout<<S.top()<<" ";
		S.pop();
	}
	cout<<endl;
	
	
}