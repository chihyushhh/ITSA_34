//[C_AR01-易] 一維陣列反轉 I
#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[100], a, idx=0;
    while(scanf("%d", &a)!=EOF){
        arr[idx]=a;
        idx++;
    }
    for(int i=idx-1; i>0; i--){
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[0]);
    return 0;
}