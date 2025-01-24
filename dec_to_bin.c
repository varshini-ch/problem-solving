//program to convert decimal to binary
#include<stdio.h>
void dectobin(int n){
    if(n>1){
        dectobin(n/2);
    }
    printf("%d",n%2);
}
int main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
    printf("binary equivalent of %d is:",num);
    dectobin(num);
    printf("\n");
    return 0;
    
}
