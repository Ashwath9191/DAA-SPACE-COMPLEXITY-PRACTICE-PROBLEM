#include <stdio.h> 
int main() { 
int a[3][3], trans[3][3]; 
int i, j; 
printf("Enter elements of the 3x3 matrix:\n"); 
for(i = 0; i < 3; i++) { 
for(j = 0; j < 3; j++) { 
scanf("%d", &a[i][j]); 
        } 
    } 
    for(i = 0; i < 3; i++) { 
        for(j = 0; j < 3; j++) { 
            trans[j][i] = a[i][j]; 
        } 
    } 
    printf("\nTranspose of the matrix:\n"); 
    for(i = 0; i < 3; i++) { 
        for(j = 0; j < 3; j++) { 
            printf("%d ", trans[i][j]); 
        } 
        printf("\n"); 
    } 
    return 0; 
}
