#include <stdio.h>
#include <stdlib.h>

int main(){
    int num[4];
    char set[5][23];
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            set[j][5+6*i]=' ';
        }
    }
    for(int i=0; i<4; i++){
        char c=getchar();
        num[i]=c-'0';
    }
    for(int i=0; i<4; i++){
        if(num[i]==0){
            for(int j=0; j<5; j++)
                set[0][i*6+j]='*';
            for(int k=1; k<=3; k++){
                set[k][i*6]='*';
                set[k][i*6+1]=' ';
                set[k][i*6+2]=' ';
                set[k][i*6+3]=' ';
                set[k][i*6+4]='*';
            }
            for(int j=0; j<5; j++)
                set[4][i*6+j]='*';
        }else if(num[i]==1){
            for(int j=0; j<5; j++){
                for(int k=0; k<4; k++){
                    set[j][i*6+k]=' ';
                }
                set[j][i*6+4]='*';
            }
        }else if(num[i]==2){
            for(int j=0; j<5; j++)
                set[0][i*6+j]='*';
            for(int j=0; j<4; j++){
                set[1][i*6+j]=' ';
            }
            set[1][i*6+4]='*';
            for(int j=0; j<5; j++)
                set[2][i*6+j]='*';
            set[3][i*6]='*';
            for(int j=1; j<5; j++){
                set[3][i*6+j]=' ';
            }
            for(int j=0; j<5; j++)
                set[4][i*6+j]='*';
        }else if(num[i]==3){
            for(int j=0; j<5; j++)
                set[0][i*6+j]='*';
            for(int j=0; j<4; j++){
                set[1][i*6+j]=' ';
            }
            set[1][i*6+4]='*';
            for(int j=0; j<5; j++)
                set[2][i*6+j]='*';
            for(int j=0; j<4; j++){
                set[3][i*6+j]=' ';
            }
            set[3][i*6+4]='*';
            for(int j=0; j<5; j++)
                set[4][i*6+j]='*';
        }else if(num[i]==4){
            for(int k=0; k<2; k++){
                set[k][i*6]='*';
                set[k][i*6+1]=' ';
                set[k][i*6+2]=' ';
                set[k][i*6+3]=' ';
                set[k][i*6+4]='*';
            }
            for(int j=0; j<5; j++)
                set[2][i*6+j]='*';
            for(int j=0; j<4; j++){
                set[3][i*6+j]=' ';
            }
            set[3][i*6+4]='*';
            for(int j=0; j<4; j++){
                set[4][i*6+j]=' ';
            }
            set[4][i*6+4]='*';
        }else if(num[i]==5){
            for(int j=0; j<5; j++)
                set[0][i*6+j]='*';
            set[1][i*6]='*';
            for(int j=1; j<5; j++){
                set[1][i*6+j]=' ';
            }
            for(int j=0; j<5; j++)
                set[2][i*6+j]='*';
            for(int j=0; j<4; j++){
                set[3][i*6+j]=' ';
            }
            set[3][i*6+4]='*';
            for(int j=0; j<5; j++)
                set[4][i*6+j]='*';
        }else if(num[i]==6){
            set[0][i*6]='*';
            for(int j=1; j<5; j++){
                set[0][i*6+j]=' ';
            }
            set[1][i*6]='*';
            for(int j=1; j<5; j++){
                set[1][i*6+j]=' ';
            }
            for(int j=0; j<5; j++)
                set[2][i*6+j]='*';
            set[3][i*6]='*';
            set[3][i*6+1]=' ';
            set[3][i*6+2]=' ';
            set[3][i*6+3]=' ';
            set[3][i*6+4]='*';
            for(int j=0; j<5; j++)
                set[4][i*6+j]='*';
        }else if(num[i]==7){
            for(int j=0; j<5; j++)
                set[0][i*6+j]='*';
            for(int j=1; j<5; j++){
                for(int k=0; k<4; k++){
                    set[j][i*6+k]=' ';
                }
                set[j][i*6+4]='*';
            }
        }else if(num[i]==8){
            for(int j=0; j<5; j++)
                set[0][i*6+j]='*';
            set[1][i*6]='*';
            set[1][i*6+1]=' ';
            set[1][i*6+2]=' ';
            set[1][i*6+3]=' ';
            set[1][i*6+4]='*';
            for(int j=0; j<5; j++)
                set[2][i*6+j]='*';
            set[3][i*6]='*';
            set[3][i*6+1]=' ';
            set[3][i*6+2]=' ';
            set[3][i*6+3]=' ';
            set[3][i*6+4]='*';
            for(int j=0; j<5; j++)
                set[4][i*6+j]='*';
        }else if(num[i]==9){
            for(int j=0; j<5; j++)
                set[0][i*6+j]='*';
            set[1][i*6]='*';
            set[1][i*6+1]=' ';
            set[1][i*6+2]=' ';
            set[1][i*6+3]=' ';
            set[1][i*6+4]='*';
            for(int j=0; j<5; j++)
                set[2][i*6+j]='*';
            for(int j=3; j<5; j++){
                for(int k=0; k<4; k++){
                    set[j][i*6+k]=' ';
                }
                set[j][i*6+4]='*';
            }
        }
    }
    for(int a=0; a<5; a++){
        for(int b=0; b<23; b++){
            printf("%c", set[a][b]);
        }
        printf("\n");
    }
    return 0;
}