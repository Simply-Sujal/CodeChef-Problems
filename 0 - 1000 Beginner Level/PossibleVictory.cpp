#include <iostream>
using namespace std;

int main(){
    int r,o,c;
    cin >> r >> o >> c;
    int remainingOver = 20 - o;
    int totalBalls = remainingOver * 6;
    int maximumScore = totalBalls * 6;
    int total = c + maximumScore;

    if (total > r)
    {
        cout << "YES" << endl;
    }
    else if(total == r)
    {
        cout << "NO" << endl;
    }   
}