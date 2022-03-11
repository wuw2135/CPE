#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,j;
    double x,y,xtotal,ytotal,first,second;
    vector<double> arr;
    while(cin >> x >> y){
    	arr.clear();
    	xtotal = x;
    	ytotal = y;
    	arr.push_back(x);
    	arr.push_back(y);
    	for(i=0;i<3;i++){
    		cin >> x >> y;
    		xtotal += x;
    		ytotal += y;
    		arr.push_back(x);
    		arr.push_back(y);
		}

    	for(i=0;i<3;i++){
    		for(j=i+1;j<4;j++){
    			if(arr[2*i] == arr[2*j] && arr[2*i+1] == arr[2*j+1]) {
                    cout << fixed << setprecision(3) <<  xtotal - 3*arr[2*i] << " " << ytotal - 3*arr[2*i+1] << endl;
                    break;
				}
			}
		}  	
    }
}