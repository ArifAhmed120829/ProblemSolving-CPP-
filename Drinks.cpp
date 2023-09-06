
#include <iostream>
using namespace std;
int main() {
    int n;//the number of orange-containing drinks in Vasya's fridge
    cin>>n;
    double percent = n*100;
    int x;
    int sum = 0;
    for(int i =0; i<n; i++){
        cin>>x;// the volume fraction of orange juice in the i-th drink, in percent.
        sum = sum + x;
    }
    double res = (sum/percent)*100;
    cout<<res<<endl;




    return 0;

}



