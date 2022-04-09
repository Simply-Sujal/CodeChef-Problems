#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        int wins = z * 2;
        int add = x + wins;
        if (add >= y)
        {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
    
}