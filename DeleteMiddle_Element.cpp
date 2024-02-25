#include<bits/stdc++.h>
using namespace std;



//Recursive Solution
void solve(stack<int>&S, int count,int N){
	//base case
	if(count == N/2){
		//Delete
		S.pop();
		return ;
	}
	
	//Store top element
	int num = S.top();
	//delete it 
	S.pop();
	solve(S,count+1,N);
	
	// push Stored Element
	
	S.push(num);
}


int main(){
	
	stack<int> S;
	int count =0;
	S.push(5);
	S.push(6);
	S.push(7);
	S.push(8);
	
	int N = S.size();
	cout<<"Size of Stack is==:"<<N<<endl;
	
//	cout<<"Stack Elements Before Deletion of Middile Element: "<<endl;
//	
//	while(!S.empty()){
//		cout<<S.top()<<" ";
//		S.pop();
//	}
//	
//	cout<<endl;
	
	
	solve(S,count,N);
	
	cout<<"After Deleted Middle Element of Stack: "<<endl;
	
	while(!S.empty()){
		cout<<S.top()<<" ";
		S.pop();
	}
	
	cout<<endl;
	
	
 
 return 0;
}