#include <iostream>
using namespace std;
class Animal{
    public:
    int hight;
    bool speak;
    string voice;
};
class Cat: public Animal{
    public:
    string color;
    bool pet;
};
class Dog: public Animal{
    public:
    bool pet;
    bool big;
    

};
int main(){
    Cat c;
    c.hight = 10;
    c.voice = "meow";
    c.speak = true;
    c.color = "black";
    cout<<c.color<<c.hight<<c.speak<<c.voice<<endl;

    return 0;
}