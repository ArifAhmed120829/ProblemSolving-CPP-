
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,o,crime,hired,count;
    crime =0;
    hired = 0;
    count = 0;
    cin>>n;
    for(int i =0; i<n; i++){
        cin>> o;
        if(o<0){

            if(hired<=0) {
                count++;
            }
            else{
                hired--;
            }
        }
        else{
           hired = (hired+o);
        }
    }
    cout<<count<<endl;
    return 0;

}

