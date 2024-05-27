
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i,a,b) for (int i = a; i < b; i++)


int main() {
 vs s;
 vi v;
    s = {"5","-2","4","C","D","9","+","+"};

    int i =0;
    while(i<s.size()){
     if(s[i] == "C") {
         auto itr = find(s.begin(),s.end(),s[i-1]);
    if(itr != s.end()) s.erase(itr);
    auto itr2 = find(s.begin(),s.end(),s[i-1]);
    if(itr2 != s.end()) s.erase(itr2);
    i--;
    continue;
     }
     else if(s[i] == "D"){
     int n = stoi(s[i-1]) * 2;
     s[i] = to_string(n);
     }
     else if(s[i] == "+"){
     int n = stoi(s[i-1]);
     int n2 = stoi(s[i-2]);
     int add = n+n2;
     s[i] = to_string(add);
     }
     i++;
    }
    int sum = 0;

    for(string val: s) v.PB(stoi(val));
    for(int val: v) sum += val;
    cout<<sum<<"\n";


}
