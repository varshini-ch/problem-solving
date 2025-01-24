//head recursion
// Online C compiler to run C program online
#include <stdio.h>
void head(int n){
if(n==0)
return;
head(n-1);
printf("%d\n",n);
}
int main() {
  head(6);
    return 0;
}
