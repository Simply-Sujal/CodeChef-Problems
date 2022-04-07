
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;

        if(m < n){
            cout << n + abs(n-m) << endl;
        }
        else{
            cout << n << endl;
        }
    }
    return 0;
}