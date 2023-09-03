

#include <iostream>
#include <algorithm> // Include the algorithm header for std::transform
using namespace std;
int main() {
    int n,k,res;
    cin>>n;
    cin>>k;
    int num = n%10;//last digit
    for(int i = 0; i<k; i++){
        if(num!=0) n = n - 1;
        else n = n / 10;
        num = n%10;
    }
     cout<<n<<endl;
    return 0;

}
