#include <stdio.h> 
int sumofsquares(int n); 
int main() { 
int n, result; 
int i; 
printf("Enter a positive integer: "); 
scanf("%d", &n); 
result = sumofsquares(n); 
printf("Sum of square of the first %d natural numbers is: %d\n", n, result); 
return 0; 
} 
int sumofsquares(int n) { 
int sum = 0; 
int i; 
for(i = 1; i<=n; i++) { 
sum+=i*i; 
} 
return sum; 
}
