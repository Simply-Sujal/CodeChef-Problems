#include <iostream> 
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a , b;
        cin >> a >> b;
        int monthly = b * 30;
        if (a >= monthly)
        {
            cout << "YES" << endl;
        }else if(a < monthly){
            cout << "NO" << endl;
        }
        
    }
    
}