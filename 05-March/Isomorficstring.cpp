

#include <iostream>
#include <unordered_map>
using namespace std;


    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        if(str1.size()!=str2.size()){
            return false;
        }
        int n = str1.size();
        unordered_map<char,char> m1;
        unordered_map<char,char> m2;
        for(int i =0;i<str1.size();i++){
            m1[str1[i]]++;
        }
}

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    // cout<<areIsomorphic(s1,s2)<<endl;
    cout<<s1[0]&&s1[0] != s2[0];
    
    return 0;
}
