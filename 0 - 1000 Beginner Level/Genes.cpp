#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    if (s == "R R" || s == "R B" || s == "R G" || s == "B R" || s == "G R")
    {
        cout << "R";
    }

    else if(s == "B B" || s == "B G" || s == "G B"){
        cout << "B";
    }
    
    else if(s == "G G"){
        cout << "G";
    }
}