#include<iostream>
using namespace std;
#include<vector>
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v1;
//     for(int i=0; i<n; i++){
//         int x;
//         cin>>x;
//         v1.push_back(x);
//     }
//     int m;
//     cin>>m;
//     vector<int> v2;
//     for(int i=0; i<m; i++){
//         int x;
//         cin>>x;
//         v2.push_back(x);
//     }
//     vector<int> v3(n+m);
//     int i=0, j=0, k=0;
//     while(k<(n+m)){
//         if(v1[i]<v2[j]){
//             v3[k]= v1[i];
//             i++;
//             k++;
//         }
//         else{
//             v3[k]= v2[j];
//             j++;
//             k++;
//         }
//     }
//     for(int i=0; i<(n+m); i++){
//         cout<<v3[i]<<" ";
//     }

// }

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            }
            else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};
