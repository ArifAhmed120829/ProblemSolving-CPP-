
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

class lc13_sol{
public:
    int largestPerimeter(vector<int>& nums) {
    int sum =0;
    int len = nums.size();
    sort(nums.begin(),nums.end());
    for(int i =0; len - i> 2; i++){
    int j = i+1;
    int k = j+1;
    while(k!=len){
    if(nums[i]+nums[j]> nums[k]) {
    sum = (sum>nums[i]+nums[j]+nums[k]) ? sum:nums[i]+nums[j]+nums[k];//8
    }
    j++;
    k++;
    }
    }
    return sum;
    }
    };
int main() {
vi v = {3,2,3,4};
lc13_sol s;
cout<<s.largestPerimeter(v)<<"\n";



}
