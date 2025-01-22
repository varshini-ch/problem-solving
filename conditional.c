//conditional statements---->(if,else if,else)
#include <stdio.h>
int main()
{
    int w;
    printf("enter the value");
    scanf("%d",&w);
    if(w==0)
    printf("INVALID");
    else if(w>=2000)
    printf("25 minutes");
    else if(w>=2001&&w<=4000)
    printf("35 minutes");
    else if(w>=4000&&w<=7000)
    printf("45 minutes");
    else
    printf("OVERLOAD");
    
}
