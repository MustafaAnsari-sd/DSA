#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mx = INT_MIN;
    int smx = INT_MIN;

    for(int i = 0; i < n; i++) {

        if(arr[i] > mx) {
            smx = mx;
            mx = arr[i];
        }
        else if(arr[i] > smx && arr[i] != mx) {
            smx = arr[i];
        }
    }

    cout << smx;
}