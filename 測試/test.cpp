#include <bits/stdc++.h>
#include <typeinfo>
#include <cxxabi.h>
using namespace std;

int main()
{
    int count = 0;
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            count += 101*i + 10*j;
        }
    }

    cout << count;
    
}

