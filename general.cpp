
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int min = arr[0];
 int max2 = arr[0];
    int pos1 = 0;
    int pos2 = 0;
    int count  =0;


    for(int i = 0; i+1<n; i++){

        if(min>=arr[i+1]){
            min = arr[i+1];
            pos2 = i+1;
        }
            if(max2<=arr[i+1]){
                max2 = arr[i+1];
        }

    }
    if(arr[0] == max2 && arr[n-1] == min) cout<<count<<endl;
    else{
         while(pos2+1<n){
        swap(arr[pos2],arr[pos2+1]);
        pos2++;
        count++;
    }

    int max = arr[0];

      for(int i = 0; i+1<n; i++){
            if(max<=arr[i+1]){
                max = arr[i+1];
                pos1 = i+1;
        }
      }
       while(pos1-1 >= 0){
        swap(arr[pos1-1],arr[pos1]);
     pos1--;
     count++;
    }
    cout<<count<<endl;
    }



    return 0;

}


