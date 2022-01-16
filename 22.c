#include <stdio.h>
#include <stdlib.h>

int main(){
    int T[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &T[i][j]);
        }
    }
    if(T[0][0]==T[1][1]&&T[0][0]==T[2][2]) printf("True\n");
    else if(T[0][0]==T[1][0]&&T[0][0]==T[2][0]) printf("True\n");
    else if(T[0][0]==T[0][1]&&T[0][0]==T[0][2]) printf("True\n");
    else if(T[1][0]==T[1][1]&&T[1][0]==T[1][2]) printf("True\n");
    else if(T[2][0]==T[2][1]&&T[2][0]==T[2][2]) printf("True\n");
    else if(T[0][1]==T[1][1]&&T[0][1]==T[2][1]) printf("True\n");
    else if(T[0][2]==T[1][0]&&T[1][2]==T[2][2]) printf("True\n");
    else if(T[0][2]==T[1][1]&&T[0][2]==T[2][0]) printf("True\n");
    else printf("False\n");
    return 0;
}