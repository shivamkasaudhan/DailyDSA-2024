#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int numberOfBeams(vector<string> &bank)
{
    int prev = 0;
    int ans = 0;
    for (string s : bank)
    {
        int count = 0;
        for (char c : s)
        {
            if (c == '1')
            {
                count++;
            }
        }
        if (count != 0)
        {
            ans += (prev * count);
            prev = count;
        }
    }
    return ans;
}
#include <iostream>
using namespace std;
int main(){
    vector<string> bank = {"011001","000000","010100","001000"};
    cout<<"Result: "<<numberOfBeams(bank)<<endl;
    return 0;
}

// 2125. Number of Laser Beams in a Bank
//tc O(m*n)  n is size bank vector, and m is size of elements in vector bank. (using nested for loop)
//sc O(1)  

