#include <iostream>
#include<vector>
#include <stack>
using namespace std;
vector<int> solve(vector<int> &a,int n){
	vector<int>ans;
	stack<int> st;
	for(int i =0;i<n;i++){
		while(!st.empty() && st.top()<=a[i]){
			st.pop();
		}
		st.push(a[i]);
		ans.push_back(st.size());
	}
	return ans;
}
void print(vector<int> &a){
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		vector<int> result = solve(a,n);
		print(result);
	}
	return 0;
}