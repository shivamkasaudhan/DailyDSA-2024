#include <iostream>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size;
    Heap(){
        arr[0] = -1;
        size = 0;
    }
    void insert(int val){
        size = size+1;
        int index = size;
        arr[index] = val;
        while(index>1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
            }else{
                return;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
    Heap h;
    h.insert(20);
    h.insert(10);
    h.insert(50);
    h.insert(40);
    h.print();
    
    return 0;
}