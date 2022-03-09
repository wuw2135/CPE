#include<bits/stdc++.h>
using namespace std;

int main()
{	
    long long int a,dist,flag,flag2,cur;
    vector<string> count;
    vector<int> mat;
    string dis,s;
    cin >> a;
    cin.ignore(1024,'\n');
    for(int z=1;z<=a;z++){
        getline(cin,dis);
        istringstream sstream(dis);
        while(sstream >> s){
            count.push_back(s);
        }
        dist = stoi(count[count.size()-1],nullptr,0);

        count.clear();

        flag = 0;
        for(int i=0;i<dist*dist;i++){
            cin >> cur;
            if(cur < 0) flag = 1;
            mat.push_back(cur);   
        }
        cin.ignore(1024,'\n');
        
        if(!flag){
            flag2 = 0;
            for(int i=0;i<mat.size()/2;i++){
                if(mat[i] != mat[mat.size()-(i+1)]){
                    cout << "Test #" << z << ": Non-symmetric." << endl;
                    flag2 = 1;
                    break;
                }
            }
            if(!flag2) cout << "Test #" << z << ": Symmetric." << endl;
        }else cout << "Test #" << z << ": Non-symmetric." << endl;
        mat.clear();
    }
}