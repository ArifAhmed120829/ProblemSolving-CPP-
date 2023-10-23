
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    for(int i =0; i<t; i++)
    {
        cin>>n>>m;
        string x;
        string s;
        cin>>x>>s;
        int count =0;
        while(n<=m)
        {
            n = n + n;
            x = x + x;
            count++;
        }
        int x_len  = x.size();
        bool op = false;

        for(int j = 0; j<x_len; j++)
        {
            string p = "";
            int k = 0;
            if(x[j] == s[k]){
               for( k = 0; k<m; k++)
            {
                 p = p+x[j];

            }
            }

            if(p==s)
            {
                op = true;
                cout<<p;
                break;
            }
        }
        if(op == true)
        {
            cout<<count<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
    }
    return 0;

}



