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
    hero(){
        cout<<"Constructor called"<<endl;
    }
    hero(int value){
        cout<<"this -> keyword."<<this<<endl;
        this -> value = value;
    }
    int getRegNo(){
        return regNo;
    }
    void setRegNo(int h){
        regNo = h;
    }
};
int main(){
    
    return 0;
}