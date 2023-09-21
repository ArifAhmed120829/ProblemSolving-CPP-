
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t,n,last_digit,c;
    cin>>t;
    for(int i =0; i<t; i++){
        vector<int> myVector;
        c = 0;
        cin>>n;
        int j = 10;
        int x = 1;
        while(n!=0){
            last_digit = n % j;
            if(last_digit != 0){
                myVector.push_back(x*last_digit);
                c++;
            }
            n = n/10;
            x = x*10;

        }
        cout<<c<<endl;
        for(int val:myVector) {
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;

}

