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


int main() {

//Macros -> ex: #define F first

//question -> sum of an arithmetic progression which is 513
// output minimum number of terms used to make e total value 513
//input 54 + 51 + 48 + 45 --- +3 = 513
//count total numbers

int n,a,b,s;
s = 513; // total sum
a = 54; // first number
b = 3; // last number

n = (s*2)/(a+b); // s = n*(a+b)/2;
cout<<n<<"\n";

}

