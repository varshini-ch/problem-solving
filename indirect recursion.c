//evaluatingindirect recursion
#include <stdio.h>
void funA(int n);
void funB(int n);
void funA(int n){
    if(n<=0)
    return;
    printf("%d\n",n);
    funB(n-1);
}
void funB(int n){
    if(n<=0)
    return;
    printf("%d\n",n);
    funA(n-1);
}
int main(){
    funA(6);
    return 0;
}
