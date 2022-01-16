#include <stdio.h>
#include <stdlib.h>

int f(int n){
    if(n==0) return 1;
    else if(n==1) return 2;
    else return f(n-1)+f(n/2);
}

int main(){
    int N;
    scanf("%d", &N);
    printf("%d\n", f(N));
    return 0;
}