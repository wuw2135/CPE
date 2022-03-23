#include<bits/stdc++.h>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int a,b,c,d,e;
    string str,set;
    vector<string> arr;
    cin >> a;
    for(int i=1; i<=a; i++){
        arr.clear();
        cin >> b;
        for(int j=0; j<b; j++){
            cin >> str;
            arr.push_back(str);
        }
    
        cin >> c;
        while(c--){
            cin >> set;
            if(set == "row"){
                cin >> d >> e;
                swap(arr[d-1],arr[e-1]);
            }else if(set == "col"){
                cin >> d >> e;
                for(int z=0; z<b; z++) swap(arr[z][d-1],arr[z][e-1]);
            }else if(set == "inc"){
                for(int z=0; z<b; z++){
                    for(int q=0; q<b; q++){
                        arr[z][q]++;
                        if(arr[z][q] < '0') arr[z][q] += 10;
                        else if(arr[z][q] > '9') arr[z][q] -= 10;
                    }
                }    
            }else if(set == "dec"){
                for(int z=0; z<b; z++){
                    for(int q=0; q<b; q++){
                        arr[z][q]--;
                        if(arr[z][q] < '0') arr[z][q] += 10;
                        else if(arr[z][q] > '9') arr[z][q] -= 10;
                    }
                }
            }else if(set == "transpose"){
                string str2 = "";
                for(int z=0; z<b; z++){
                    for(int q=0; q<b; q++){
                        str2.push_back(arr[q][z]);
                    }
                }

                int size = 0;
                for(int z=0; z<b; z++){
                    for(int q=0; q<b; q++){
                        arr[z][q] = str2[size];
                        size++;
                    }
                }
            }
        }

        cout << "Case #" << i << endl;
        for(int j=0; j<b; j++){
            cout << arr[j] << endl;
        }
        cout << endl;
    }
}