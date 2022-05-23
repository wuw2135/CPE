#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a,b,as,bs;
    int same;

    while(getline(cin,a),getline(cin,b)){
        same = 1;
        istringstream is(a), is2(b);
        vector<string> arra, arrb;
        while(is >> as){
            arra.push_back(as);
        }

        while(is2 >> bs){
            arrb.push_back(bs);
        }


        if(arra.size() > arrb.size()){
            for(int i=0; i<arrb.size(); i++){
                bool find = false;
                for(int j=0; j<arra.size(); j++){
                    if(arrb[i] == arra[j]){
                        find = true;
                        break;
                    }
                }

                if((find && same == 2) || (i != 0 && !find && same == 1)) same = 3;
                if(!find && same != 3) same = 2;
            }
        }else{
            for(int i=0; i<arra.size(); i++){
                bool find = false;
                for(int j=0; j<arrb.size(); j++){
                    if(arra[i] == arrb[j]){
                        find = true;
                        break;
                    }
                }

                if((find && same == 2) || (i != 0 && !find && same == 1)) same = 3;
                if(!find && same != 3) same = 2;
                
            }
        }

        if(arra.size() == arrb.size() && same == 1) cout << "A equals B\n";
        else if(arra.size() > arrb.size() && same == 1) cout << "B is a proper subset of A\n";
        else if(arra.size() < arrb.size() && same == 1) cout << "A is a proper subset of B\n";
        else if(same == 2) cout << "A and B are disjoint\n";
        else cout << "I'm confused!\n";
    }
}