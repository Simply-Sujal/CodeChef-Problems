#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int ans , x, y,z;
        cin >> x >> y >> z;
        ans = (x - y) * z;
        cout << ans << endl;
    }
    
}