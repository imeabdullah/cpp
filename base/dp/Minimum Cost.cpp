#include<bits/stdc++.h>

using namespace std;

int min_cost(int arr[][3], int sx,int sy,int ex, int ey){
    if(sx == ex and sy == ey){
        return arr[ex][ey];
    }
    if(sx > ex or sy > ey) {
        return INT_MAX;
    }

    int option1= min_cost(arr,sx+1,sy,ex,ey);
    int option2= min_cost(arr,sx+1,sy+1,ex,ey);
    int option3= min_cost(arr,sx,sy+1,ex,ey);

    return arr[sx][ex] + min(option1,min(option2,option3));
}

int minCostItr(int** arr,int sx,int sy,int ex,int ey) {
    
}
int main(){
}