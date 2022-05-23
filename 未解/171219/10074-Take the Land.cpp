#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, c;
    
    while(cin >> a >> b && a && b){
        int max = 0;
        int mat[a][b];
        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                cin >> c;
                mat[i][j] = c;
            }
        }

        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                if(mat[i][j]) continue;
                int row = 0, col = 0;
                bool flag = true;
                while(flag){
                    row++;
                    col++;
                    for(int z=1; z<=row; z++){
                        for(int k=1; k<=col; k++){
                            if(mat[i+z][j+k]){
                                if(z == row && k == col) row--;
                                else if(z == row) row--;
                                else col--;
                                flag = false;
                                break;
                            }
                        }
                        if(!flag) break;
                    }
                }

                if((row+1)*(col+1) > max) max = (row+1)*(col+1);
            }
        }
    }
}