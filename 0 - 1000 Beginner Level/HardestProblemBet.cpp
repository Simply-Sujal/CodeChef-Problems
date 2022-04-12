#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a , b , c;
        cin >> a >> b >> c;
        if(a < b && a < c){
            cout << "DRAW" << endl;
        }else if (b < a && b < c)
        {
            cout << "BOB" << endl;
        }else if (c < a && c < b)
        {
            cout << "ALICE" << endl;
        }
    }
    
}