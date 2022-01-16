#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, sum=0;;
    scanf("%d", &n);
    while(n>0){
        if(n%3==0) sum+=n;
        n--;
    }
    printf("%d\n", sum);
    return 0;
}