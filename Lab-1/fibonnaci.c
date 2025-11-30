#include <stdio.h> 
int main() { 
int n, a = 0, b = 1, c, i; 
printf("Enter how many Fibonacci numbers you want: "); 
scanf("%d", &n); 
printf("Fibonacci Series: "); 
for(i = 1; i <= n; i++) { 
printf("%d ", a); 
c = a + b; 
a = b; 
b = c; 
} 
return 0; 
}
