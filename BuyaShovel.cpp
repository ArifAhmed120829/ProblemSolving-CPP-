
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int sh,r,c,total,i;
    cin>>sh>>r;
    i = 2;
    c = 1;
    total = sh;
    while((total-r)%10 != 0 && (total % 10) != 0){
        total = sh* i;
        i++;
        c++;
    }
    cout<<c<<endl;
    return 0;

}

