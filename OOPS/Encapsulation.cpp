#include <iostream>
using namespace std;
class Capsule{
    public:
    int i;
    int j;
    void print(){
        cout<<i<<endl;
        cout<<j<<endl;
    }

};
int main(){
    Capsule a;
    a.i = 10;
    a.j = 15;
    a.print();

    return 0;
}