#include<stdio.h>
int main(){
    int arr [2][2] = {{1,2},{5,6}};  // print 2 / 2 matrix
    for(int i = 0 ; i< 2 ; i++){
        for (int j = 0 ; j<2 ; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}