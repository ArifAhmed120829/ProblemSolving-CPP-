

#include <iostream>
using namespace std;
int main() {
    int t,a,b,c;
    cin>>t;
    for(int i =0; i<t; i++){
        cin>>a>>b>>c;
        int cnt = 0;
        for(;;){
        if(a<b && c<b){
            b = b-c;
            a = a+c;
        if(b-a==c){
            a=b;
            c++;
        cnt++;
        }
        else{
             c--;
             cnt++;
        }

        }
        else if(b<a){
                   a = a-c;
            b = b+c;
        if(a-b==c){
            a=b;
            c++;
            cnt++;
        }
        else{
             c--;
             cnt++;
        }

        }
        else{
            cout<<cnt<<endl;
            break;
        }
        }


        }

 return 0;

    }







