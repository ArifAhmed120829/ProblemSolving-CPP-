

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x;
    int arr[n+1];
    for(int i = 1; i<n+1;i++){
        cin>>x;
        arr[x] = i;
    }
    for(int j = 1; j<n+1; j++){
        cout<<arr[j]<<" ";
    }

    return 0;

}

