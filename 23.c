#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    scanf("%d", &N);
    getchar();
    int a1, a2, a3, b1, b5, b50;
    scanf("%d", &a1);
    getchar();
    scanf("%d", &a2);
    getchar();
    scanf("%d", &a3);
    int sum=a1*15+a2*20+a3*30;
    int left=N-sum;
    if(left<0) printf("0\n");
    else{
        b50=left/50;
        left%=50;
        b5=left/5;
        left%=5;
        b1=left;
        printf("%d,%d,%d\n", b1, b5, b50);
    }
    return 0;
}