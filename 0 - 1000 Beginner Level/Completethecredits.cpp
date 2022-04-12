#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        if (N > 65)
        {
           cout << "Overload" << endl;
        }
        else if(N < 35){
            cout << "Underload" << endl;
        }else {
            cout << "Normal" << endl;
        }
    }    
}