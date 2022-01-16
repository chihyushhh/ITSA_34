#include <stdio.h>
#include <stdlib.h>

int main(){
    int degree;
    double sum=0, nsum=0;
    scanf("%d", &degree);
    if(degree>700){
        sum+=(degree-700)*5.63;
        nsum+=(degree-700)*4.50;
        degree=700;
    }
    if(degree>500){
        sum+=(degree-500)*4.97;
        nsum+=(degree-500)*4.01;
        degree=500;
    }
    if(degree>330){
        sum+=(degree-330)*4.39;
        nsum+=(degree-330)*3.61;
        degree=330;
    }
    if(degree>120){
        sum+=(degree-120)*3.02;
        nsum+=(degree-120)*2.68;
        degree=120;
    }
    if(degree<=120){
        sum+=degree*2.10;
        nsum+=degree*2.10;
        degree=0;
    }
    printf("Summer months:%.2lf\nNon-Summer months:%.2lf\n", sum, nsum);
    return 0;
}