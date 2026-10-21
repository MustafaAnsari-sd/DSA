#include<iostream>
using namespace std;
#include<vector>
// Two pointer Method
void display(vector<int> &a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
}

void sort01(vector<int> &a) {
    int n = a.size();
    int i = 0, j = n - 1;

    while (i < j) {
        if (a[i] == 0) {
            i++;
        }
        else if (a[j] == 1) {
            j--;
        }
        else {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort01(v);
    display(v);

}