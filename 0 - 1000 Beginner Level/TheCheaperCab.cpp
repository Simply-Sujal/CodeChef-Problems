#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a , b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "ANY" << endl;
        }
        else if (a < b)
        {
            cout << "FIRST" << endl;
        }
        else if (b < a)
        {
            cout << "SECOND" << endl;
        }
        
    }
    
}