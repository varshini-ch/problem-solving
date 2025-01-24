//missing value in range 1 to n
#include<stdio.h>
int findm(int a[],int size){
    int n=size-1;
    int totalsum=(n*(n+1))/2;
    int asum=0;
    for(int i=0;i<n-1;i++){
        asum+=a[i];
    }
    return totalsum - asum;
}
int main()
{
   int a[]={1,2,3,4,6,7,8};
   int n=8;
   int missingnumber=findm(a,n);
   printf("The missing number is :%d\n",missingnumber);
   return 0;
}
