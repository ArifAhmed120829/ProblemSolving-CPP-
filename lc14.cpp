
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

int t,a1,a2,b1,b2;
cin>>t;
REP(i,0,t){
cin>>a1>>a2;
cin>>b1>>b2;
int count = 0;
if(a1>b1 && a2>b2) count++;
if(a1>b2 && a2>b1 ) count++;
if(a2>b2 && a1>b1) count++;
if(a2>b1 && a1>b2 ) count++;
cout<<count<<"\n";
}


}
