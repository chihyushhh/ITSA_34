#include <stdio.h>
#include <stdlib.h>

int main(){
    int m;
    scanf("%d", &m);
    if(m>=3&&m<=5) printf("Spring\n");
    if(m>=6&&m<=8) printf("Summer\n");
    if(m>=9&&m<=11) printf("Autumn\n");
    if((m>=1&&m<=2)||m==12) printf("Winter\n");
    return 0;
}