#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char,string> mp = {{'c',"0111001111"},{'d',"0111001110"},{'e',"0111001100"},{'f',"0111001000"},{'g',"0111000000"},{'a',"0110000000"},{'b',"0100000000"},{'C',"0010000000"},{'D',"1111001110"},{'E',"1111001100"},{'F',"1111001000"},{'G',"1111000000"},{'A',"1110000000"},{'B',"1100000000"}};
    int a;
    cin >> a;
    cin.ignore();
    string test,count,compare;
    while(a--){
        count = "0000000000";
        compare = "0000000000";
        getline(cin,test);
        for(int i=0; i<test.size(); i++){
            for(int j=0; j<10; j++){
                if(mp[test[i]][j] == '1' && compare[j] == '0'){
                    count[j]++;
                }
            }
            compare = mp[test[i]];
        }

        for(int i=0; i<9; i++){
            cout << count[i]-'0' << " ";
        }
        cout << count[9]-'0' << endl;
    }
}