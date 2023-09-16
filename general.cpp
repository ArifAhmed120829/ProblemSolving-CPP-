
#include <iostream>
using namespace std;
int main() {
    int n,count,max,min,max_pos,min_pos;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
     max = arr[0];
     min = arr[0];
     max_pos = 0;
     min_pos = 0;
     for(int i =1; i<n; i++){
         if(max<arr[i]){
            max = arr[i];
            max_pos = i;
         }

     }

     while(max_pos != 0){
         swap(arr[max_pos],arr[max_pos-1]);
          count++;
        max_pos--;
     }
      for(int i =1; i<n; i++){
          if(min>=arr[i]) {
            min = arr[i];
            min_pos = i;
         }
     }
     while(min_pos != (n-1)){
         swap(arr[min_pos],arr[min_pos+1]);
         count++;
        min_pos++;
     }
     cout<<count<<endl;




    return 0;

}


