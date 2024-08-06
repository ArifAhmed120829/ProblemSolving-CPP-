
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

class lc11_sol {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
    vector<int> lst;
    int col_len = m[0].size();
    int row_len = m.size();
    //five loops
    int i =0;
    while(i<col_len){//1st loop
    lst.push_back(m[0][i]);
    i++;
    }
    int j = 1;

    while(j<row_len){//2nd loop
    lst.push_back(m[j][col_len-1]);
    j++;
    }
    int x =col_len-2;
    while(x>=0){//3rd loop
    lst.push_back(m[row_len-1][x]);
    x--;
    }
    int y =row_len-2;
    if(y<=0) return lst;
    while(y>0){//4th loop
    lst.push_back(m[y][0]);
    y--;
    }
    int k =1;
    while(k<col_len-1){//5th loop
    lst.push_back(m[1][k]);
    k++;
    }
    return lst;
    }
};


int main() {

lc11_sol s;
vector<vector<int>> m;
m.push_back({2,5,8});
m.push_back({4,0,-1});
//m.push_back();
vector<int> res = s.spiralOrder(m);
for(int val:res) cout<<val<<"\n";


}
