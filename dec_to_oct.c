//program to convert decimal number to octal number
#include<stdio.h>
void dectooct(int n){
    if(n>7){
        dectooct(n/8);
    }
    printf("%d",n%8);
}
int main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
    printf("octal equivalent of %d is:",num);
    dectooct(num);
    printf("\n");
    return 0;
    
}
