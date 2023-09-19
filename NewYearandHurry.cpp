

#include <iostream>
using namespace std;
int main() {

    int p,min,max,j,c;
    max = 240;
    j = 5;
    c = 0;
    cin>>p>>min;
    for(int i = 1; i<=p; i++){
        if((j*i)+min>max) break;
        else{
            min = (j*i)+min;
          c++;
        }
    }
    cout<<c<<endl;

    return 0;

}

