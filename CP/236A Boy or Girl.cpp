#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;
//helloworld
int main()
{
    string msg;
    cin >> msg;
    int same_count;
    int result = 0;
    result = msg.length();
    for (int i=0; i<msg.length(); i++){
        same_count = 0;
        for (int j=i+1; j<msg.length();j++){
            if (msg[i] == msg[j]){
                same_count = same_count+1;
                //continue;
            }
        }
        if (same_count >= 1){
            same_count = 1;
            result = result - same_count;
        }
    }

    //cout << result << endl;
    if (result%2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
return 0;
}
