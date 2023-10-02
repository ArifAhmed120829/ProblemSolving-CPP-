

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,b,t;

    cin>>t;
    for(int i =0; i<t; i++)
    {
        cin>>a>>b;

        if(a==b) cout<<0<<endl;
        else if(a<b){
                int res = (b - a)/10;
                if((b - a)%10 != 0) res++;
             cout<<res<<endl;
        }
        else{
                int res = (a - b)/10;
                if((a - b)%10 != 0) res++;
             cout<<res<<endl;
        }




    }

    return 0;

}


