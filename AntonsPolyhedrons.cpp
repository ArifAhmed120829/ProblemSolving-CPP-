
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum = 0;
    string s;
    for(int i =0; i<n; i++){
        cin>>s;
        if(s=="Icosahedron") sum = sum + 20;
        else if(s=="Dodecahedron") sum = sum + 12;
        else if(s=="Octahedron") sum = sum + 8;
        else if(s=="Cube") sum = sum + 6;
        else if(s=="Tetrahedron") sum = sum + 4;

    }
    cout<<sum<<endl;

    return 0;

}

