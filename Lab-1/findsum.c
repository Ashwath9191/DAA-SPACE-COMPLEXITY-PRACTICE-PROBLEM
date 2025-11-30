#include <stdio.h>
int findsum(int n);
int main() {
    int n, result;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    result = findsum(n);
    printf("Sum of the first %d natural numbers is: %d\n", n, result);
    return 0;
}
int findsum(int n) {
    int sum = 0;
    int i;
 
    for(i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

