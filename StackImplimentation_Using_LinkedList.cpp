#include<bits/stdc++.h>	
using namespace std;



class Node {
	public:
		int data;
		Node* next;
		
		
		Node(int d){
			this->data = d;
			this->next = NULL;
		}
		
		~Node(){
			int value = this->data;
			if(this->next != NULL){
				delete next;
				next = NULL;
			}
			
//			cout<<"Memory free from Node with value: "<<value<<endl;
		}
		
};


class Stack {
	
};