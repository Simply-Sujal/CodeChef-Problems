#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int x , y , d;
        cin >> x >> y >> d;
        int diff = abs(x - y);
        if (diff <= 10)
        {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
    
}