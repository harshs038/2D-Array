// P C M marks of students
#include<stdio.h>
int main(){ 
    int n ; 
    printf("enter number of students : ");
    scanf("%d", &n);
    int arr[n][3]; // 3 subjects
    for(int i = 0 ; i< n ; i++){
        printf("enter marks of student %d  (P,C,M): ", i+1);
        for (int j = 0 ; j<3 ; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("marks of students are : \n");
    for(int i = 0 ; i< n ; i++){
        printf("marks of PCM of student %d : ", i+1);
        for (int j = 0 ; j<3 ; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    return 0 ;
}