#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int x;
        int N;
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> x;
            if (x >= 10 && x <= 60)
            {
                count++;
            }
            
        }
        cout << count << endl;
    }
    
}