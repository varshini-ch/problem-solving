//program to print prime numbers in a given range

#include <stdio.h>
int prime(int num)
{
    if (num<=1){
        return 0;
    }
    int i=2;
    while(i*i<=num){
        if((num%i)==0){
            return 0;
        }
        i++;
    }
    return 1;
}

int main() {
    int n,x;
    printf("enter range");
    scanf("%d %d",&n,&x);
    for(int i=n;i<=x;i++){
        if(prime(i))
        printf("%d ",i);
    }

    return 0;
}
