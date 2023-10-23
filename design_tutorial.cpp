
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> composite_numbers(int x,int y, vector<int> da)
{
    if(y==x) return da;
    if(y%2 ==0 || y%3 == 0 || y%5 == 0) da.push_back(y);
    y++;
    return(composite_numbers( x,y, da));

}
int main()
{
    vector<int> dynamicArray;

    for(int val:composite_numbers(30,4,dynamicArray)) cout<<val<<endl;
    return 0;
}




