int *max(int *p, int n) {
    int *maxPtr = p; 
    for (int i = 1; i < n; i++) {
        if (*(p + i) > *maxPtr) {
            maxPtr = p + i;
        }
    }
    return maxPtr;
}
#include <stdio.h>
int main()
{
   int a[100],*p,n;
   scanf("%d",&n);
   for(p=a;p<a+n;p++)
      scanf("%d",p);
   int *k=max(a,n);
   printf("max=%d,位于第%d个\n",*k,k-a+1);  
   return 0; 
}

