#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = ceil((double)n/4); //ceil function is used to increment the value by if the number comes in decimal form
        cout << ans << endl;
    }
    
}