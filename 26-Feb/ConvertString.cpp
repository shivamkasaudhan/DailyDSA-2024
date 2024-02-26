#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

string convertString(string str) 
{
	// WRITE YOUR CODE HERE
	str[0] = toupper(str[0]);
	for(int i = 0; i< str.size();i++){
		if(str[i]==' '){
			str[i+1]=toupper(str[i+1]);
		}
	}
	return str;
}