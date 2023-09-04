

#include <iostream>
using namespace std;
int main() {

    long long n;
    cin>>n;
    int count = 0;
    int last_digit;
    while(n!=0){
            last_digit = n%10;
            if(last_digit==4 || last_digit==7) {
                count++;
            }
        n = n/10;
    }
    if(count == 4 || count == 7) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

    return 0;

}


