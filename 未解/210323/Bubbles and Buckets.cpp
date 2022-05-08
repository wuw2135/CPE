#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a,b;
    int count;
    vector<long int> arr;
    while(getline(cin,a) && a != "0"){
        count = 0;
        istringstream st(a);
        while(st >> b){
            arr.push_back(stoll(b));
        }

        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = 0; j < arr.size() - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    count++;
                    swap(arr[j],arr[j+1]);
                }
            }
        }

        if(count%2) cout << "Carlos " << count << endl;
        else cout << "Marcelo " << count << endl;
    
    }
}