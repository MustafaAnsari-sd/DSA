// #include<iostream>
// using namespace std;
// void swap(int a, int b){
//      a= a+b;
//      b= a-b;
//      a= a-b;
// }
// int main(){
//     int a, b;
//     cin>>a>>b;
//     swap(a,b);
//     cout<<a<<" "<<b;
// }
// The above code won't work as the variable inside the void function is different and in main function different..
// therefore we have to used & operator which says pass by reference


// Correct swapping code-
#include<iostream>
using namespace std;
void swap(int &a, int &b){
     a= a+b;
     b= a-b;
     a= a-b;
}
int main(){
    int a, b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}