
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[3];
    for(int i =0; i<3; i++){
        cin>>arr[i];
    }
     int n = sizeof(arr) / sizeof(arr[0]);
     sort(arr, arr + n);
    int sum = (arr[1] - arr[0]) + (arr[2]-arr[1]);
    cout<<sum<<endl;
    return 0;

}

