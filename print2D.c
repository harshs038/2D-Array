#include<stdio.h>
int  main(){
    int n ,m ;
    printf("enter size of row  :");
    scanf("%d", &n);
    printf("enter size of  column :");
    scanf("%d", &m);
    int arr[n][m] ; 
    for(int i = 0 ; i< n ; i++){
        for (int j = 0 ; j<m ; j++){
            printf("enter element of row %d and column %d : ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0 ; i< n ; i++){
        for (int j = 0 ; j<m ; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}