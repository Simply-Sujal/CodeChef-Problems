
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,k,sum;
        cin >> n >> m >> k;
        sum = n + k;
        if(sum > m){
            cout << "No";
        }else if(sum <= m){
            cout << "YES";
        }
    }
    return 0;
    
}