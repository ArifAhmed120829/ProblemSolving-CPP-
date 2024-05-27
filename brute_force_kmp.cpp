
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair

#define rep(i,a,b) for (int i = a; i<b; i++)

//brute force kmp
int main() {

//Macros -> ex: #define F first
string t = "qabcgabcabcd";
string p = "abcd";
bool s = false;

rep(i,0,t.size()){
string res = "";
rep(j,0,p.size()){
if(t[i] != p[j]) break;
else res = res + p[j];
}
if(res.compare(p) == 1) {
s = true;
cout<<"Index number is: "<<i<<"\n";
break;
}

}
cout<<s<<"\n";


}

