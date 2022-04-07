#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a , b;
        cin >> a >> b;
        int calculateBucketCapacity = b * 2;
        int ans = a / calculateBucketCapacity;
        cout << ans << endl;
    }
    
}