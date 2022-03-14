#include<bits/stdc++.h>
using namespace std;

int main()
{	
    int cases, size, count, a;
    vector<int> arr;
    cin >> cases;

    while(cases--){
        cin >> size;
        arr.clear();
        count = 0;
        while(size--){
            cin >> a;
            arr.push_back(a);
        }

        //選擇排序法(較慢) 
        //for(int i=0; i<arr.size()-1; i++){
        //     for(int j=i+1; j<arr.size(); j++){
        //         if(arr[i] > arr[j]){
        //             count++;
        //             int tmp = arr[i];
        //             arr[i] = arr[j];
        //             arr[j] = tmp;
        //         }
        //     }
        // }


        //泡沫排序法
        for(int i=0; i<arr.size(); i++){
            for(int j=0; j<arr.size()-i-1; j++){
                if(arr[j] > arr[j+1]){
                    count++;
                    int tmp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = tmp;
                }
            }
        }

        cout << "Optimal train swapping takes " << count << " swaps." << endl;
        
    }
}