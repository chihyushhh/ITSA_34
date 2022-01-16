#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, array[32][32];
    scanf("%d %d", &a, &b);
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            int num;
            scanf("%d", &num);
            array[i][j]=num;
        }
    }
    int k;
    for(int i=0; i<b; i++){
        for(k=0; k<a-1; k++){
            printf("%d ", array[k][i]);
        }
        printf("%d\n", array[k][i]);
    }
    return 0;
}