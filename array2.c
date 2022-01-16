//[C_AR02-易] 一維陣列反轉 II
#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[100], a, idx=0;
    for(int i=0; i<6; i++){
        scanf("%d", &a);
        arr[i]=a;
    }
    for(int i=5; i>0; i--){
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[0]);
    return 0;
}