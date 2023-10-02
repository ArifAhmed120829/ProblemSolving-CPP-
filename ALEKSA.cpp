
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
        int arr[n];
        int count = 0;
          arr[0] = (n-1);
        arr[1] = arr[0] + (n-1);
        int j =arr[0]+arr[1];
        while(count==0){
        int sum = arr[0] + arr[1];
         if(j*3 % sum != 0){
                arr[2] = j;
                count++;
            }
        j++;
        arr[0] = arr[0] + (n-1);
        arr[1] = arr[1] + (n-1);
        }

        for(int val: arr){
            cout<<val<<endl;
        }



    }

    return 0;

}


