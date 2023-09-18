
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string k,l,m,n;

    cin>>k>>l>>m;

    sort(m.begin(),m.end());
    n = k+l;
    sort(n.begin(),n.end());
    if(m==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;

}

