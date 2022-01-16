#include <stdio.h>
#include <string.h>

int is_palindrome(char *s){
    int i, len;
    len=strlen(s);
    for(i=0; i<len/2; i++) {
        if(s[i]!=s[len-1-i])
            return 0;
    }
    if(i>=len/2)
        return 1;
    return 0;
}

int main(){
    char s[100];
    scanf("%s", s);
    if(is_palindrome(s))
        printf("YES\n");
    else{
        printf("NO\n");
    }
    return 0;
}