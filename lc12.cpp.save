#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define f first
#define s second
#define pb push_back
#define mp make_pair

#define REP(i,a,b) for (int i = a; i < b; i++)
class lc12_sol {
public:
    bool lemonadeChange(vector<int>& b) {
    int five = 0, ten = 0, twenty = 0;
    int len = b.size();//5
    for(int i = 0; i<len; i++){
    if(b[i] == 5) five++;//2
    else if(b[i] == 10) {//2
    ten++;
    five--;
    if(five<0) return false;
    }
    else if(b[i] == 20){//
    if(ten!=0) {
    ten--;
    five--;
    }
    else{
    five -= 3;
    }
    if(five<0) return false;
    }
    }
    cout<<five<<endl;
    cout<<ten<<endl;
    cout<<twenty<<endl;
    return true;
    }
};

int main() {
lc12_sol s;
vi v = {5,5,10,10,20};
cout<<s.lemonadeChange(v)<<endl;




}

