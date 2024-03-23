#include <bits/stdc++.h> 
bool isletter(char ch){
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'  ){
		return true;
	}
	return false;
}
string reverseOnlyLetters(string & s) {
	// Write your code here.
	int i=0;
	int j=s.size()-1;
	while(i<=j){
		if(isletter(s[i]) && isletter(s[j])){
			swap(s[i++],s[j--]);
		}else if(isletter(s[i]) && !isletter(s[j])){
			j--;
		}else{
			i++;
		}
	}
	return s;
}
