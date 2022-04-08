#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a , b;
        cin >> a >> b;
        int ans = a + b;
        int diff = 21 - ans;
        if(1 <= diff && diff <= 10){
            cout << diff << endl;
        }else{
            cout << -1 << endl;
        }
    }
    
}