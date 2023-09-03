

#include <iostream>
using namespace std;
int main() {

    int k;//the cost of the first banana
    int n;//number of dollars
    int w;//number of banana he wants
    cin>>k;
    cin>>n;
    cin>>w;
    int sum = 0;
    for(int i =1; i<=w; i++){
        sum = sum + (k*i);
    }
    int result = sum - n;
    if(result<0) result = 0;
     cout<<result<<endl;
    return 0;

}
