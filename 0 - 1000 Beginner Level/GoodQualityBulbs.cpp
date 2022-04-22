#include <bits/stdc++.h>
using namespace std;

void solutions(){
    int N,X;
    cin >> N >> X;
    int sum = 0;
    for (int i = 1; i < N; i++)
    {
        int num;
        cin >> num;
        sum += num;
    }
    cout << max(0,N*X - sum) << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solutions();
    }
    
}