

#include <iostream>
using namespace std;
int main() {
   int n;//the number of rooms
   int p;//he number of people who already live in the i-th room
   int q;//the room's capacity.
   int c;
   cin>>n;
   for(int i =0; i<n; i++){
    cin>>p;
    cin>>q;
    if(p+2<=q) c++;
   }
   cout<<c<<endl;


    return 0;

}
