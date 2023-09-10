
#include <iostream>

using namespace std;
int main() {
    int t;
    long long int a,b;
    cin>>t;
    for(int i =0; i<t; i++){
        cin>>a>>b;
        long long int count = 0;
        if(a%b==0) cout<<0<<endl;
        else cout<< b-(a%b)<<endl;
    }

    return 0;

}


