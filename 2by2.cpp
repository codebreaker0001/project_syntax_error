#include <iostream>
using namespace std;

int main(){
    int a[][2]{{1,2},{3,4}};
    int b[][2]{{5,6},{7,8}};
    int c[][2]{{0,0},{0,0}};
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            for(int k=0;k<=1;k++){


        
        c[i][j] += a[i][k]*b[k][j] ;
        }}

    }
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            cout<<c[i][j]<<endl;
        }
    }
    return 0 ;
    
}