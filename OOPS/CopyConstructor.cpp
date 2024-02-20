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
    char a;
    int value;
    hero(){
        cout<<"Constructor called"<<endl;
    }
    hero(int value,char a){
        this -> value = value;
        cout<<"this -> keyword."<<value<<endl;
        this -> a = a;
        cout<<"this -> keyword."<<a<<endl;
    }
    int getRegNo(){
        return regNo;
    }
    void setRegNo(int h){
        regNo = h;
    }
};
int main(){
    hero r(2,'a');
    hero s(r);


    return 0;
}