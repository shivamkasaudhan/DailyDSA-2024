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
    hero h1;
    h1.lvl = 'A';
    h1.value = 1000;
    h1.name = "Shivam";
    //using setter 
    h1.setRegNo(40);
    cout<<h1.getRegNo()<<endl;
    cout<<h1.lvl<<" "<<h1.value<<" "<<h1.name<<endl;
    return 0;
}