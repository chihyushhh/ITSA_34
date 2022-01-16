#include <stdio.h>
#include <stdlib.h>

int is_prime(long long int x){   
    long long int i;

    if(x==1)
        return 0;
    else{
        for(i=2; i*i<=x; i++) {
            if(x%i==0)
                return 0;
        }
        return 1;
    }
    return 0;
}

int main(){
    long long int x;
    scanf("%lld", &x);
    if(x>=1000000000000000)
        exit(1);
    else if(is_prime(x)){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}