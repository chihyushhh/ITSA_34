#include <stdio.h>
#include <stdlib.h>

int main(){
    int th1, ts1, th2, ts2;
    int cost=0;
    scanf("%d%d%d%d", &th1, &ts1, &th2, &ts2);
    int tomin=th2*60+ts2-th1*60-ts1;
    if(tomin<=120){
        cost=(tomin/30)*30;
    }else if(tomin<240 && tomin>120){
        cost=120+((tomin-120)/30)*40;
    }else{
        cost=120+160+((tomin-240)/30)*60;
    }
    printf("%d\n", cost);
    return 0;
}