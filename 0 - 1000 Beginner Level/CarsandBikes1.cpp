#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        if (N % 4 == 0)
        {
            cout << "NO" << endl;
        }else if(N % 4 != 0){
            cout << "YES" << endl;
        }
    }   
}