

#include <iostream>

using namespace std;
int main() {
    int r,c,count;
    cin>>r>>c;
    count = 1;
    for(int i = 1; i<=r; i++){
       if(i%2==0){
         if(count%2==0){
                  cout<<"#";
            for(int j = 1; j<c; j++){
            cout<<".";
        }
        count++;

         }
         else{
            for(int j = 1; j<c; j++){
            cout<<".";
        }
        cout<<"#";
        count++;
         }

       }
       else{
         for(int j = 1; j<=c; j++){
            cout<<"#";
        }
       }
    cout<<endl;

    }

    return 0;

}

