

#include <iostream>
#include <algorithm> // Include the algorithm header for std::transform
using namespace std;
int main() {
    string s;
    cin>>s;
    int cap,small;
    cap = 0;
    small = 0;
    for(int i = 0; i<s.size(); i++){
        if(islower(s[i])) small++;
        else cap++;
    }
    if(cap==small || small>cap) transform(s.begin(), s.end(), s.begin(), ::tolower);
    else transform(s.begin(), s.end(), s.begin(), ::toupper);
     cout<<s<<endl;
    return 0;

}
