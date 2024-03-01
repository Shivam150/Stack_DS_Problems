#include<bits/stdc++.h>
using namespace std;



void nextSmallestElement(int arr[] , int n){
	stack<int> S;
	S.push(-1);
	
	int newArr[100];
	
	for(int i= n-1;i>=0;i--){
		int curr = arr[i];
		while(S.top() >= curr){
			S.pop();
		}
		
		newArr[i] = S.top();
		S.push(curr);
	}
	
	for(int i =0; i<n;i++){
		cout<<newArr[i]<<" ";
	}
	cout<<endl;
}



int main(){
	 
	int n;
	int arr[100];
	cout<<"Enter the value size"<<endl;
	cin>>n;
	cout<<"Enter Array elements: "<<endl;
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"Given Array is: "<<endl;
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	cout<<"After Operation: "<<endl;
	
	nextSmallestElement(arr,n);
	
	
	return 0;
}