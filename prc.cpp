

#include <iostream>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    long long int sum = 0;
    long long int j = 2;
    if(n%2 == 0) {
                for(long long int i = 1; i<=n; i = i+2){
       sum = sum - i + j;
       j = j+2;
    }

    cout<<sum<<endl;
    }
    else{
                for(long long int i = 1; i<n; i = i+2){
       sum = sum - i + j;
       j = j+2;
    }
    sum = sum -n;
     cout<<sum<<endl;

    }


    return 0;

}



