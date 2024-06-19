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


int main() {
int t;
cin>> t;
REP(i,0,t){
string a,b;
cin>>a>>b;
char temp  = a[0];
a[0] = b[0];
b[0] = temp;

cout<<a<<" "<<b;
cout<<"\n";
}



}
