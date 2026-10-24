#include<iostream>
using namespace std;
#include<vector>
void reverse_part(int i, int j, vector<int> &v){
    while(i<j){
        swap(v[i], v[j]);
        i++;
        j--;
    }
}
void next_permutation(vector<int> &a){
    int n= a.size();
    int idx= -1;
    for(int i=n-2; i>=0; i--){
        if(a[i]< a[i+1]){
            idx= i;
            break;
        }
    }
    if(idx==-1){
        reverse_part(0,n-1, a);
    }
    else{
        reverse_part(idx+1, n-1, a);
        swap(a[idx], a[idx+1]);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v1;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    

}