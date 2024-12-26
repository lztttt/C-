void sort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }                               
}
#include<stdio.h> 
int main()
{
	int i,list[50],n;
	scanf("%d",&n);//输入实际个数
	for(i=0;i<n;i++)//输入数组元素
	   scanf("%d",&list[i]);
	sort(list,n);//函数调用实现对数组元素升序排序 
    for(i=0;i<n; i++)//输出排好序的数组元素
		if(i==n-1)//最后一个元素
		 printf("%d\n",list[i]);
        else
		 printf("%d ",list[i]);  
	return 0;
}

