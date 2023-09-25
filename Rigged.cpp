
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i =0; i<t; i++)
    {
        int n;
        cin>>n;
        int st[n];
        int en[n];
        for(int j =0; j<n; j++)
        {
            cin>>st[j];
            cin>>en[j];
        }
        int en_max = en[0];
        int en_pos = 0;
        for(int j =1; j<n; j++)
        {
            if(en_max<=en[j])
            {
                en_max = en[j];
                en_pos = j;
            }
        }
        if(en_pos == 0) cout<<st[0]<<endl;
        else
        {
            int w = st[en_pos] + 1;
            int v = 0;
             for(int j =1; j<n; j++){
                if(st[j]>w && en[j]>= en[0]){
                    v++;
                }
             }
             if(w<= st[0] && v==0) cout<<w<<endl;
             else cout<<-1<<endl;

        }

    }

    return 0;

}

