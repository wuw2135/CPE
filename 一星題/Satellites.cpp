#include<bits/stdc++.h>
using namespace std;
#define PI acos(0.0)*2.0

int main()
{	
	string c;
    double dis,chord,a, b;
    while(cin >> a >> b >> c){
        a += 6440.0;
        if(c == "min") b /= 60.0;
        if(b > 180.0) b = 360.0 - b;
        dis = sqrt(a*a+a*a-2*a*a*cos(b*PI/180.0));
        chord = PI*a*(b/180.0);
        cout << fixed << setprecision(6) << chord << " " << dis << endl;
    }
}	