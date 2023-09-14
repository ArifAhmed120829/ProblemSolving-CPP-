
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    int arr[t];
    int arr2[t];
    for(int i = 0;i <t; i++){
        cin>>arr[i];
    }
    for(int i =0; i<t; i++){
        long long int count = 0;
        int j = 1;
        while(arr[i]-j>j){
            j++;
            count++;
        }
        arr2[i] = count;
    }
    for(int val:arr2){
        cout<<val<<endl;
    }


    return 0;

}


