#include<bits/stdc++.h>
using namespace std;



vector<int> nextSmallestElement(vector<int> &arr , int n){
	stack<int> S;
	S.push(-1);
	
	vector<int> newArr(n);
	
	for(int i= n-1;i>=0;i--){
		int curr = arr[i];
		while(S.top() != -1 && arr[S.top()] >= curr){
			S.pop();
		}
		
		newArr[i] = S.top();
		S.push(i);
	}
	
	
	return newArr;
}

vector<int> prevSmallestElement(vector<int> &arr , int n){
	stack<int> S;
	S.push(-1);
	
	vector<int> newArr(n);
	
	for(int i=0;i<n;i++){
		int curr = arr[i];
		while(S.top() != -1 && arr[S.top()] >= curr){
			S.pop();
		}
		
		newArr[i] = S.top();
		S.push(i);
	}
	
	
	return newArr;
}


int largestRectangularArea(vector<int> &arr, int n){
	vector<int> Next(n);
	Next = nextSmallestElement(arr,n); // Index of Next smallest element;
	
	vector<int> Prev(n);
	Prev = prevSmallestElement(arr,n);  // Index of prev smallest element;
	
	int area = INT_MIN;
	
	for(int i =0;i<n;i++){
		int l = arr[i];
		
		if(Next[i] == -1){
			Next[i] = n;	
		}
		
		int b = Next[i] - Prev[i] -1;
		
		int newArea = l*b;
		
		area = max(area , newArea);
	}
	
	
	return area;
	
}



int main(){
	 
	int n;
    vector<int> arr;
 	cout<<"Enter the value size"<<endl;
	cin>>n;
	cout<<"Enter Array elements: "<<endl;
	for(int i =0;i<n;i++){
		int x;
		cin>>x;
		arr.push_back(x);
	}
	
	cout<<"Given Array is: "<<endl;
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	cout<<"After Operation: "<<endl;
	
	cout<<"Largest RectangleArea is: "<<largestRectangularArea(arr,n)<<endl;
	
	return 0;
}