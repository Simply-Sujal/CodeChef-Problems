#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin >> x >> y;
        while (y != 0)
        {
            x = x + 1;
            y--;
        }
        if(x % 2 == 0){
            cout << "Janmansh" << endl;
        }else{
            cout << "Jay" << endl;
        }
    }
    
}