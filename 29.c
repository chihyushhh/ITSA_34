#include <stdio.h>
#include <stdlib.h>

int main(){
    int n[10], x1, x2;
    for(int i=0; i<10 ;i++){
        char c=getchar();
        if(i==0){
            if(c=='A'){
                x1=1;x2=0;
            }if(c=='B'){
                x1=1;x2=1;
            }if(c=='C'){
                x1=1;x2=2;
            }if(c=='D'){
                x1=1;x2=3;
            }if(c=='E'){
                x1=1;x2=4;
            }
            if(c=='F'){
                x1=1;x2=5;
            }if(c=='G'){
                x1=1;x2=6;
            }if(c=='H'){
                x1=1;x2=7;
            }if(c=='J'){
                x1=1;x2=8;
            }if(c=='K'){
                x1=1;x2=9;
            }if(c=='L'){
                x1=2;x2=0;
            }if(c=='M'){
                x1=2;x2=1;
            }if(c=='N'){
                x1=2;x2=2;
            }if(c=='P'){
                x1=2;x2=3;
            }if(c=='Q'){
                x1=2;x2=4;
            }if(c=='R'){
                x1=2;x2=5;
            }if(c=='S'){
                x1=2;x2=6;
            }if(c=='T'){
                x1=2;x2=7;
            }if(c=='U'){
                x1=2;x2=8;
            }if(c=='V'){
                x1=2;x2=9;
            }if(c=='X'){
                x1=3;x2=0;
            }if(c=='Y'){
                x1=3;x2=1;
            }if(c=='W'){
                x1=3;x2=2;
            }if(c=='Z'){
                x1=3;x2=3;
            }if(c=='I'){
                x1=3;x2=4;
            }if(c=='O'){
                x1=3;x2=5;
            }
        }
        else{
            n[i]=c-'0';
        }
    }
    if((x1+9*x2+8*n[1]+7*n[2]+6*n[3]+5*n[4]+4*n[5]+3*n[6]+2*n[7]+n[8]+n[9])%10==0)
        printf("CORRECT!!!\n");
    else printf("WRONG!!!\n");
    return 0;
}