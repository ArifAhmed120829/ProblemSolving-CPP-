
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i =0; i<t; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j =0; j<n; j++)
        {
            cin>> arr[j];
        }
        int min = arr[0];
        int pos = 0;
        for(int p = 1; p<n; p++){
            if(min>arr[p]){
                min = arr[p];
                pos = p;
            }
        }
        arr[pos] = arr[pos] + 1;
        int product = 1;
        for(int val:arr){
            product = product * val;
        }
        cout<<product<<endl;

    }

    return 0;

}

