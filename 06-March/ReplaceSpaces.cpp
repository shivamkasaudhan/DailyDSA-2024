#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.
	int i =0;
	int n =str.size()-1;
	string ans="";
	while(i<=n){
		if(str[i]==' '){
			ans+="@40";
			i++;
		}else{
			ans+=str[i];
			i++;
		}
	}
	return ans;
}