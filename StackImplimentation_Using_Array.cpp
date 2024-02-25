#include<iostream>	
using namespace std;

class Stack {
	public:
		int *arr;
		int size;
		int top;
		
		Stack(int Size){
			this->size = Size; // Assigning the size of a stack
			arr = new int[size]; // allocate the memory for array;
			top =-1;
			
		}
		
		void push(int element){
			if((size - top) > 1){ // check if space is available
				top++;
				arr[top] = element;
			}
			else{
				cout<<"Stack Overflow"<<endl;
			}
		}
		
		void pop(){
			if(top >= 0){ // check if element is present or not
				top--;
			}
			else{
				cout<<"Stack Underflow"<<endl;
			}
		}
		
		int peek(){
			if(top >= 0){ 
				return arr[top];
			}
			else{
				cout<<"Stack is empty"<<endl;
				return -1;
			}
		}
		
		bool isEmpty(){
			if(top == -1){
				return true;
			}
			else{
				return false;
			}
		}
};


int main(){
	Stack S(5);
	S.push(22);
	S.push(43);
	S.push(44);
	
	cout<<"Top Element is: "<<S.peek()<<endl;
	S.pop();
	cout<<"Top Element is: "<<S.peek()<<endl;
	cout<<"Size Of Stack: "<<S.size<<endl;
	S.pop();
	cout<<"Top Element is: "<<S.peek()<<endl;
	
	S.pop();
	cout<<"Top Element is: "<<S.peek()<<endl;
	
}