#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){

int c;
int n;
int k;
int t;
char buf[100];
char *p=buf;
fgets(buf, 100, stdin);
int len=strlen(buf);
if(buf[len-1]=='\n') buf[len-1]='\0';
scanf("%d", &t);
while(*p){
    if(isalpha(*p)){
        if(isupper(*p)){
            n=*p+t;
            if(n>'Z'){
                k=n-'Z';
                n='A'+k-1;
            }
            if(n<'A'){
                k='A'-n;
                n='Z'-k+1;
            }
            else
                n=n;
        }
        else if(islower(*p)){
            n=*p+t;
            if(n>'z'){
                k=n-'z';
                n='a'+k-1;
            }
            if(n<'a'){
                k='a'-n;
                n='z'-k+1;
            }
            else
                n=n;
        }
        printf("%c", n);
    }
    else if(isdigit(*p)){
        n=*p+t;
        if(n>'9'){
            k=n-'9';
            n='0'+k-1;
        }
        if(n<'0'){
            k='0'-n;
            n='9'-k+1;
        }
        printf("%c", n);
    }
    else{
        n=*p;
    printf("%c", n);
    }
    p++;
}
printf("\n");
    return 0;
}