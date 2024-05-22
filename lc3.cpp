
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i,a,b) for (int i = a; i < b; i++)
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        for(int i = len-1; i>= 0; i--){
            if( i == len-1) digits[i]++;
            if(digits[i] == 10){
                digits[i] = 0;
                if(i!=0) digits[i-1]++;
                else{
                    digits.push_back(0);
                    digits[i] = 1;
                }
            }
        }
        return digits;
    }
};


int main() {
Solution s;
vi v;
v.PB(1);
v.PB(2);
v.PB(3);

vi r;
r.PB(9);

v = s.plusOne(v);
r = s.plusOne(r);

cout<<"first vector: "<<"\n";
REP(i,0,v.size()) cout<<v[i]<<" ";
cout<<"\n";
cout<<"second vector: "<<"\n";
REP(i,0,r.size()) cout<<r[i]<<" ";



}
