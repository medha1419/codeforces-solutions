#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int score=0;
        char arr[10][10];
        for(int i=0;i<10;++i){
            for(int j=0;j<10;++j){
                cin>>arr[i][j];
                if(arr[i][j]=='X'){
                    int min=INT_MAX;
                    if(i<min){
                        min=i;
                    }
                    if(j<min){
                        min=j;
                    }
                    if(9-i<min){
                        min=9-i;
                    }
                    if(9-j<min){
                        min=9-j;
                    }
                    min++;
                    score+=min;
                }
            }
        }
        cout<<score<<endl;
    }
}