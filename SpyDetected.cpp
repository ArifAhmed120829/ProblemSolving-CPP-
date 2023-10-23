
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int  i = 0 ; i< t; i++){
        cin>>n;
        int arr[n];
        for(int j =0 ; j<n; j++){
            cin>>arr[j];
        }
        int f = arr[0];
        //int count = 1;
            for(int k =1; k<n; k++){
                if(f!=arr[k]){
                    if(k+1<n){
                        if(f == arr[k+1]) cout<<k+1<<endl;
                        else cout<<1<<endl;
                        break;
                    }
                    else{
                        if(f == arr[k-1]) cout<<k+1<<endl;
                        else cout<<1<<endl;
                        break;
                    }
                }

            }


    }
    return 0;

}


