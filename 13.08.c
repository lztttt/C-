void sort_list(int *list,int n)
{
	int i,j,temp;       
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(list[i]>list[j])
            {
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }
}
#include<stdio.h> 
int main()
{
	int i,list[50],n,*p=list;
	scanf("%d",&n);/*输入实际个数*/
	for(i=0;i<n;i++)/*输入数组元素*/
	   scanf("%d",p+i);

        sort_list(p,n);//排序

        for(i=0;i<n; i++)//输出排好序的数组元素
           if(i<n-1)
              printf("%d ",p[i]); //p[i]等价于*(p+i)
           else//n-1，即最后一个元素
              printf("%d\n",p[i]);
        return 0;
}

