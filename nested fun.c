//nested function
#include <stdio.h>
int nest(int n){
    if(n>100)
    return n-10;
    return nest(nest(n+11));
}
int main() {
    printf("result:%d\n",nest(95));

    return 0;
}
