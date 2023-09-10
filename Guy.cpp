

#include <iostream>
#include <set>
using namespace std;
int main() {
    int n,p,q,w,x;
    cin>>n;
    cin>>p;

    set<int> myset;


    for(int i =0; i<p; i++){
      cin>>w;
      myset.insert(w);
    }
    cin>>q;

    for(int i =0; i<q; i++){
       cin>>x;
       myset.insert(x);
    }
    if(myset.size() == n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;


    return 0;

}


