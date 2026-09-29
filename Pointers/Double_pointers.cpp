// Double Pointers are used to store Address of a Single Pointer
// Similarly, Triple are used to store Address of a double pointer
#include<iostream>
using namespace std;
int main(){
    int x= 5;
    int *ptr= &x;
    int **p= &ptr;
    cout<<x<<endl;
    cout<<ptr<<endl; // Address of x
    cout<<p<<endl; // Address of ptr
    cout<<*ptr<<endl; // 5
    cout<<**p<<endl; // 5

}