

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int home;
    int guest;
    int arr[n*2];
    int g = 0;
    for(int i =0; i<n;i++){
        cin>>home>>guest;
        arr[g] = home;
        arr[++g] = guest;
        g++;
    }
    int i = 0;
    int j = 1;
    int e = 1;
    int c = 0;
    for(int x =1; x<n ; x++ ){
            int l = (n-e)*2;
             int u = i+2;
             int v = i+3;
        for(int k = 0;k<l ;k++){
            if(arr[i]==arr[v] && v<n*2){
                c++;
                 v = v+2;
            }
            else if(arr[j] == arr[u] && u<n*2) {
                c++;
                 u = u+2;
            }
            else{
                u = u+2;
                v = v+2;
            }



        }
        e++;
        i = i+2;
        j = j+2;
    }
    cout<<c<<endl;
    return 0;

}


