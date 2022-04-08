#include <iostream>
using namespace std; 

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a , b , c , d;
        cin >> a >> b >> c >> d;
        int sum1 = a + c;
        int sum2 = b + d;

        if(sum1 == 180 && sum2 == 180){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
}