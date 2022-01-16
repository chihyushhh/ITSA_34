//[C_MM26-易] 輸出 1*1、2*2、...、N*N之結果
#include <stdio.h>
#include <stdlib.h>

int main(){
    int m;
    scanf("%d", &m);
    for(int i=1; i<=m; i++){
        printf("%d*%d=%d\n", i, i, i*i);
    }
    return 0;
}