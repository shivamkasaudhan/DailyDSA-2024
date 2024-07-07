#include <iostream>
#include <climits>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long x,y,z;
        cin>>x>>y>>z;
        long long count =0;
        for(int i=0;i<3;i++){
            long long xTemp = x-i;
            long long yTemp = y-i;
            long long zTemp = z-i;
            if(xTemp<0 || yTemp<0 || zTemp<0) continue;
            count = max(count,i+xTemp/3+yTemp/3+zTemp/3);
        }
        cout<<count<<endl;
    }
    return 0;
}