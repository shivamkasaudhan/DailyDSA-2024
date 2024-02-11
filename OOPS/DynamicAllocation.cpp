#include <iostream>
#include <cstring>
using namespace std;
class hero{
    //properties
    private:
    int regNo;
    public:
    string name;
    char lvl;
    int value;
    
    int getRegNo(){
        return regNo;
    }
    void setRegNo(int h){
        regNo = h;
    }
};
int main(){
    //creation of object
    //static allocation 
    hero a;
    cout<<"a lvl "<< a.lvl<<endl;
    //dynamic allocation
    hero *h = new hero;
    cout<<"h lvl "<< (*h).lvl << endl;
    cout<<"h lvl "<< h->lvl << endl;

    return 0;
}