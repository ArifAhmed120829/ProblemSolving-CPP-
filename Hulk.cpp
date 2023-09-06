

#include <iostream>

using namespace std;
int main() {
    string x = "I hate it";
    string y = "I love it";
    string t = "that ";
    string res = "";

    int n;
    cin>>n;
    for(int i =0; i<n; i++){
        if(i%2 != 0){
                res = res + y;

        }
        else{
           res = res + x;
        }
        if(i+1 != n){
          int foundPos = res.find("it");
          res.erase(foundPos,res.size()-1);
          res = res + t;
        }


    }
    cout<<res<<endl;
    return 0;

}


