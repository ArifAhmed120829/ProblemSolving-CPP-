

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_drink = k*l;
    int drink_toast = (total_drink/nl);
    int slice_lime = (c*d);
    int salt_toast = (p/np);

    int min = drink_toast;
    if(min>slice_lime) min = slice_lime;
    if(min>salt_toast) min = salt_toast;

    cout<<min/n<<endl;

    return 0;

}

