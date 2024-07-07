#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int setbits(int n ){
	int count =0;
	while(n>0){
		int t = n%2;
		count+=t;;
		n/=2;
	}
	return count;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n ;
		cin>>n;
		int *a = new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		vector<int> odd;
		for(int i =0;i<n;i++){
			if(setbits(a[i])%2==0){
				cout<<a[i]<<" ";
			}else{
				odd.push_back(a[i]);

			}
		}
		for(int i =0;i<odd.size();i++){
			cout<<odd[i]<<" ";
		}
		cout<<endl;
		delete[] a;
	}
	return 0;
}