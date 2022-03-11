#include<bits/stdc++.h>
using namespace std;

int main()
{	
	long long int a,b,c,d,e,total,sorce,des;
    cin >> a;
    for(int i=1;i<=a;i++){
        cin >> b >> c >> d >> e;
        total = (((b+c+2)+d+e)*((d+e)-(b+c)-1))/2+c+(d+1); 
        cout << "Case " << i << ": " << total << endl;
    }
}	