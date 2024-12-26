#include <stdio.h>

int main() {
    int n, a[100];
    int *max; 
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);  
    }
    max = a; 
    for (int i = 1; i < n; i++) {
        if (a[i] > *max) { 
            max = a + i; 
        }
    }
    printf("max=%d, 位于第%d个\n", *max, max - a + 1); // max与数组名a作指针运算获取位置信息  

    return 0;  
}
