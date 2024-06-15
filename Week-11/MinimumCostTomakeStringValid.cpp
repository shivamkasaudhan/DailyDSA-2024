#include <bits/stdc++.h> 
#include <string>

int findMinimumCost(string str) {
  // Write your code here
  if(str.length()%2==1){
    return -1;
  }
  stack<char> st;
  for(auto c : str){
    if(c=='{'){
      st.push(c);
    } else {
      if (!st.empty() && st.top() == '{'){
        st.pop();
      }else{
        st.push(c);
      }
    }
  }
  int a =0, b=0;
  while(!st.empty()){
    if(st.top()=='{'){
      b++;
    }else{
      a++;
    }
    st.pop();
  }
  int ans = (a+1)/2+(b+1)/2;
  return ans;
}