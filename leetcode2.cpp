#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i,a,b) for (int i = a; i <b; i++)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //relative order means original order
        //two pointer

        int left = 0; // zero number
        int right; // non zero number

        for(right = 0; right < nums.size(); right++){

            if(nums[right] != 0 && nums[left] == 0) {
                swap(nums[left],nums[right]);
                left++;
            }
            else if(nums[left] == 0 && nums[right] == 0) continue;
            else left++;
        }


    }
};




int main() {

Solution s;
vi v;
v.PB(0);
v.PB(1);
v.PB(0);
v.PB(3);
v.PB(12);

s.moveZeroes(v);

REP(i,0,v.size()) cout<<v[i]<<"\n";


}
