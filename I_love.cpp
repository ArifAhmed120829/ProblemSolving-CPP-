
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,min,max,c;
    cin>>n;
    int arr[n];
    c = 0;
    for(int i =0; i< n; i++){
        cin>>arr[i];
    }
     min = arr[0];
    max = arr[0];
    for(int i =1; i<n; i++){
        if(arr[i]<min) {
            min = arr[i];
            c++;
        }
        else if(arr[i]>max){
            max = arr[i];
            c++;
        }
    }
    cout<<c<<endl;
    return 0;

}

