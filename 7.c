#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    char c;
    int a1, b1, a2, b2, ansa, ansb;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        while(c=getchar()){
            if(c=='+' || c=='-' || c=='*') break;
        }
        scanf("%d%d%d%d", &a1, &b1, &a2, &b2);
        if(c=='+'){
            ansa=a1+a2;
            ansb=b1+b2;
        }else if(c=='-'){
             ansa=a1-a2;
             ansb=b1-b2;
        }else if(c=='*'){
            ansa=a1*a2-b1*b2;
            ansb=a1*b2+a2*b1;
        }
        printf("%d %d\n", ansa, ansb);
    }
    return 0;
}