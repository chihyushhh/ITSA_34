//[C_MM08-易] 計算兩數和的平方值
#include <stdio.h>
#include <stdlib.h>

long int recur(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    else{
        return n*recur(n-1);
    }
}

int main(){
    int k;
    scanf("%d", &k);
    printf("%ld\n", recur(k));
    return 0;
}