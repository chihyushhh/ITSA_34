//[C_AR03-易] 計算陣列中所有元素的立方和
#include <stdio.h>
#include <stdlib.h>

int main(){
    int sum=0, k;
    for(int i=0; i<6; i++){
        scanf("%d", &k);
        sum+=(k*k*k);
    }
    printf("%d\n", sum);
    return 0;
}