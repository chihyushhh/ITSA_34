#include <stdio.h>
#include <stdlib.h>

int main(){
    float max=0, min=0, tmp;
    for(int i=0; i<10; i++){
        scanf("%f", &tmp);
        if(tmp>max) max=tmp;
        if(tmp<min) min=tmp;
    }
    printf("maximum:%.2f\nminimum:%.2f\n", max, min);
    return 0;
}