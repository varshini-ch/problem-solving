//program to find whether a number is harshad number or not
#include <stdio.h>    
     
int main()    
{    
    int num = 156;    
    int rem = 0, sum = 0, n;       
    n = num;      
    while(num > 0){    
        rem = num%10;    
        sum = sum + rem;    
        num = num/10;    
    }       
    if(n%sum == 0)    
        printf("%d is a harshad number", n);    
    else    
        printf("%d is not a harshad number", n);    
     
    return 0;    
}    
