#include <stdio.h>
#include <stdlib.h>

int main(){
    int h, g;
    float standard;
    while(scanf("%d%d", &h, &g)!=EOF){
        if(g==1){
            standard=(float)(h-80)*0.7;
        }
        if(g==2){
            standard=(float)(h-70)*0.6;
        }
        printf("%.1f\n", standard);
    }
    return 0;
}