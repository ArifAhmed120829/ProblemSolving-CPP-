
#include <iostream>
using namespace std;
int main() {

    int n;// number of trumps stops
    int ex;
    int en;
    int total = 0;
    int m = total;
    cin>>n;
    for(int i = 0; i<n; i++){
            cin>>ex;
            cin>>en;
            total = total - ex;
            total = total + en;
            if(m<=total) m = total;
    }



  cout<<m<<endl;

    return 0;

}


