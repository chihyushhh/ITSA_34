#include    <stdio.h>

int main(){
    int X,Y,A;

    scanf("%d %d", &X, &Y);
        if(X>0 && Y>0){
            if(Y>X){
            int tmp=X;
            X=Y;
            Y=tmp;
            }
        }
    while(X > 0 && Y > 0){
        A=X%Y;
        X=Y;
        Y=A;
        if(A==0){
            printf("%d\n", X);
        }
    }
    
    return 0;
}