
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

class lc8_solve{
public:
bool judgeCircle(string m){

int x = 0; // left and right

int y = 0; // up and down

//if x and y both are equal 0 then its true

int len = m.size();

for(int i = 0; i<len; i++){
if(m[i] == 'U') y++;
else if(m[i] == 'D') y--;
if(m[i] == 'L') x++;
else if(m[i] == 'R') x--;
}
if(x == 0 && y == 0) return true;
else return false;

}
};


int main() {

lc8_solve ls;

string m1 = "UD";
string m2 = "LL";

cout<<ls.judgeCircle(m1)<<"\n";
cout<<ls.judgeCircle(m2)<<"\n";





}
