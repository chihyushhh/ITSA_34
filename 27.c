#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, a[4], b[4];
    scanf("%d", &n);
    for(int i=3; i>=0; i--){
        a[i]=0;
        b[i]=0;
        a[i]=(n%10);
        n/=10;
    }
    while(1){
        int znum=0, A=0, B=0, input;
        scanf("%d", &input);
        for(int i=3; i>=0; i--){
            b[i]=input%10;
            input/=10;
            if(b[i]==a[i]){
                A++;
                continue;
            }
            if(b[i]==0) znum++;
            else{
                for(int j=0; j<=3; j++){
                    if(b[i]==a[j]&&i!=j){
                        B++;
                        break;
                    }
                }
            }
        }
        if(znum==4) break;
        else{
            printf("%dA%dB\n", A, B);
        }
    }
    return 0;
}