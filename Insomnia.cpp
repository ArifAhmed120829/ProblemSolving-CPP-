

#include <iostream>
using namespace std;
int main() {
    int k,l,m,n,d;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    int c = 0;
    int temp = d;
    while(d!=0){
        if(d%k!=0 && d%l!=0 && d%m!=0 &&d%n!=0) c++;
        d--;
    }
    cout<<temp-c<<endl;





    return 0;

}


