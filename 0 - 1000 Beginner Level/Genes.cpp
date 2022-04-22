#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    getline(cin,S);
    if (S == "R R" || S == "R B" || S == "R G" || S == "B R" || S == "G R")
    {
        cout << "R";
    }

    else if(S == "B B" || S == "B G" || S == "G B"){
        cout << "B";
    }
    
    else if(S == "G G"){
        cout << "G";
    }
}