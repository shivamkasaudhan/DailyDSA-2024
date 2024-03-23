#include <bits/stdc++.h> 

#include <string>
using namespace std;
void solve(string str,int index, string subSeq, vector<string>& ans){

	if(index>=str.size()){
		if(subSeq.length()>0){
			ans.push_back(subSeq);
		}
		return ;
	}

	//exlude 
	solve(str,index+1,subSeq,ans);
	//include
	char ele = str[index];
	subSeq.push_back(ele);
	solve(str,index+1,subSeq,ans);
}
vector<string> subsequences(string str){
	
	// Write your code here
	vector<string> ans;
	string subSeq = "";
	int index = 0;
	solve(str,index,subSeq,ans);
	return ans;
	
}
