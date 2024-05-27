
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define rep(i,a,b) for (int i = a; i < b; i++)
/*
int myMethod(string s) {
    int low,high;
    low = 0;
    high = s.length() - 1;
    while(low<= high){

        if(s.at(low) == 'B' && s.at(high) == 'B') return (high-low)+1;
        else {
            if(s.at(low) != 'B') low++;
            if(s.at(high) != 'B') high--;
        }
    }
    }
    */
int main()
{
    int test_case;

    cin>>test_case;
    rep(i,0,test_case){
        int n;
        cin>>n;
        int arr[n][n];
         rep(j,0,n){
             rep(k,0,n){
             cin>>arr[j][k];
         }
         }
          rep(j,0,n){
             rep(k,0,n){
             if(arr[j][k] == 1){
                    int temp = k;
                while(k!=n){
                    if(arr[j][k] == 0){
                        if(arr[j+1][temp] == 1 && arr[j+1][k] == 1) cout<<"SQUARE"<<endl;
                        else cout<<"TRIANGLE"<<endl;
                        break;
                    }
                    k++;
                }
                 if(arr[j+1][temp] == 1 && arr[j+1][--k] == 1) cout<<"SQUARE"<<endl;
                        else cout<<"TRIANGLE"<<endl;
                        break;
             }
         }
         }
    }
    return 0;

}




