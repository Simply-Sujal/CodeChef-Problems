#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int x , y;
        cin >> x >> y;
        if(x > y){
            cout << "Car" << endl;
        }else if (y > x)
        {
            cout << "Bike" << endl;
        }else if(x == y){
            cout << "Same" << endl;
        }
        
    }
    
}