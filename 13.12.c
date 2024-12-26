#include <stdio.h>
#include <math.h>
int isAutomorphic(int num) {
    int square = num * num; 
    int digits = (int)log10(num) + 1; 
    int mod = (int)pow(10, digits);
    int lowDigits = square % mod; 
    return lowDigits == num; 
}
int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    int number = 0;
    while (count < n) {
        number++;
        if (isAutomorphic(number)) {
            count++;
        }
    }
    printf("%d,%d\n", n, number);
    return 0;
}