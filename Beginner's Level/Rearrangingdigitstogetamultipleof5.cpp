
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int len;
        cin >> len;
        string str;
        cin >> str;
        int count = 0;
        for (int i = 0; i < len; i++)
        {
            if (str[i] == '0' || str[i] == '5')
            {
                count++;
            }
            
        }
        if(count > 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    
}