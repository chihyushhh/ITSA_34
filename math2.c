//[C_MM06-易] 英哩轉公里
#include <stdio.h>
#include <stdlib.h>

int main(){
    int m;
    scanf("%d", &m);
    double a;
    a=(double)m*1.6;
    int t;
    a=a*100.0;
    t=(int)a%10;
    if(t>=5) a+=10.0;
    a/=100.0;
    printf("%.1lf\n", a);
    return 0;
}