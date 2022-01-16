#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num, a[8], i=0, sum=0;
    for(int j=0; j<8; j++){
        a[j]=2;
    }
    scanf("%d", &num);
    if(num>=0){
        while(num>0){
            a[i]=num%2;
            i++;
            num/=2;
        }
        for(int j=0; j<8; j++){
            if(a[j]==2) a[j]=0;
        }
    }
    else{
        num=256+num;
        while(num>0){
            a[i]=num%2;
            i++;
            num/=2;
        }
        for(int j=0; j<8; j++){
            if(a[j]==2) a[j]=0;
        }
    }
    for(int s=7; s>=0; s--){
        printf("%d", a[s]);
    }
    printf("\n");
    return 0;
}