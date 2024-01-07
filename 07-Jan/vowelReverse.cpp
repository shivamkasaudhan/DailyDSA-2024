class Solution {
public:
    bool isvowel(char ch){
        char a= tolower(ch);
        if(a=='a' || a=='e' ||a=='i' || a=='o' || a=='u'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int i=0;
        int e= s.size();
        while(i<=e){
            if(isvowel(s[i]) && isvowel(s[e])){
                swap(s[i],s[e]);
                i++;
                e--;
            }else if(isvowel(s[i]) && !isvowel(s[e])){
                e--;
            }else{
                i++;
            }
        }
        return s;
        
    }
};