#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        int ans1 = a * b;
        int ans2 = x * y;
        if (ans2 > ans1)
        {
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
        
    }
    
}