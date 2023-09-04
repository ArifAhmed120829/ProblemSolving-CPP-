
#include <iostream>
using namespace std;
int main() {
    int n;//number of children in the queue
    int t;// the time after which the queue will transform
    string s;
    cin>>n;
    cin>>t;
    cin>>s;

    for(int i = 0; i<t; i++){
        for(int j = 0; j+1<n; j++){
            if(s[j] == 'B' && s[j+1] == 'G') {
                 swap(s[j],s[j+1]);
                 j++;
            }
        }
    }
    cout<<s<<endl;
    return 0;

}
