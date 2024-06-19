
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
class lc10_sol{
public:
int ds(vector<vector<int>>& mat){
int sum1 = 0; //primary_diagonal
int sum2 = 0; // secondary diagonal
int col1 = mat.size()-1;
int col2 = 0;
for(int i =0; i<mat.size(); i++){
if(col1 == col2) {
sum1 = sum1 + mat[i][col1];
col1--;
col2++;
}
else{
sum1 = sum1 + mat[i][col1];
col1--;

sum2 = sum2 + mat[i][col2];
col2++;
}
}

return sum1+sum2;
}
};

int main() {
lc10_sol s;
vector<vector<int>> m;
m.push_back({5});


cout<<s.ds(m);

}
