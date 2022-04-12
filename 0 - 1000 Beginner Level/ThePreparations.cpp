#include <iostream> 
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int m,n,k;
        cin >> m >> n >> k;
        int ans = n * k;
        if (m == ans)
        {
            cout << "NO" << endl;
        }else if(m > ans){
            cout << "YES" << endl;
        }else if(ans > m){
            cout << "NO" << endl;
        }
        
    }
    
}