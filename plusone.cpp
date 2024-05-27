#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i,a,b) for (int i = a; i <= b; i++)
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size()-1;
        int rem;
        if(digits[i]+1>9) {
            digits[i] = 0;
            rem =1;
        }
        else rem = 0;
        for(int i = digits.size()-2; i>=0; i--){
            if(rem != 1) break;
            else {
            if(digits[i]+1>9) {
            digits[i] = 0;
            rem =1;
        }
        else digits[i] = digits[i] + 1;
            }
        }
        return digits;
    }
};

int main() {

Solution s;
vi v;
v.PB(9);

vi s2 = s.plusOne(v);
for(int num:s2) cout<<num<<endl;


}
