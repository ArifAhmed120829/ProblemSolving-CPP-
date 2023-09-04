#include <iostream>
using namespace std;
int main() {
    int n; // the number of friends
    int h; // the height of the fence
    cin>>n;
    cin>>h;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];// the height of the i-th person.
    }
    int sum = 0;
    for(int i = 0; i<n; i++){
        if(a[i]>h) sum = sum + 2;
        else sum = sum + 1;
    }
    cout<<sum<<endl;

    return 0;

}
