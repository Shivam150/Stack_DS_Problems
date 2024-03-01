#include<bits/stdc++.h>
using namespace std;


bool Match(char ch1, char ch2){
	if((ch1 == ')' && ch2 == '(' ) || (ch1 == '}' && ch2 == '{') || (ch1== ']' && ch2 == '[') ){
		return true;
	}else{
		return false;
	}
}

bool isValidParenthesis(string str){
	stack<char> S;
	
	for(int i=0;i<str.length();i++){
		char ch = str[i];
		
		//check opening brackets if yes then push
		if(ch == '(' || ch == '{' || ch == '['){
			S.push(ch);
		}else { // for clossing brackets
			
			// first check stack should not be empty otherwise you will face underflow
			if(!S.empty()){
				// store top element
				char topChar = S.top();
				// match this char with current char ch
				if(Match(ch,topChar)){
					S.pop();
				}else{
					return false;
				}
			}else{
				return false;
			}
		}	
    }
 
    if(S.empty()){
        return true;
    }else{
   	    return false;
    }


}



int main(){
	string str = "({]})";
	
	if(isValidParenthesis(str)){
		cout<<"Balanced"<<endl;
	}else{
		cout<<"Not balanced"<<endl;
	}
	return 0;
}