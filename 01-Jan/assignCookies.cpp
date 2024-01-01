/*455. Assign Cookies
time-complexity - O(nlogn) for using sort function
space complexity - O(1)

code */
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int findContentChildren(vector<int> &g, vector<int> &s)
{
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int i = 0, j = 0;
    while (i < g.size() && j < s.size())
    {
        if (g[i] <= s[j])
        {
            i++;
        }
        j++;
    }
    return i;
}
int main(){
    vector<int>g = {1,2,3};
    vector<int>s = {1,1};
    cout<<findContentChildren(g, s);
    return 0;
}