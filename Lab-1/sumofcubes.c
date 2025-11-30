#include <stdio.h> 
int sumofcubes(int n); 
int main() { 
int n, result; 
int i; 
printf("Enter a positive integer: "); 
scanf("%d", &n); 
result = sumofcubes(n); 
printf("Sum of cubes of the first %d natural numbers is: %d\n", n, result); 
return 0; 
} 
int sumofcubes(int n) { 
int sum = 0; 
int i; 
for(i = 1; i<=n; i++) { 
sum+=i*i*i 
} 
return sum; 
} 
