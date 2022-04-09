#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int x , m , d;
        cin >> x >> m >> d;
        int ans = min(x * m , x + d);
        cout << ans << endl;
    }
    
}