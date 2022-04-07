
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,diff;
        cin >> x >> y;
        if(x > y){
            diff = x - y;
            cout << diff;
        }else{
            cout << y - x;
        }
    }
}