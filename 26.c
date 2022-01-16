#include <stdio.h>
#include <stdlib.h>

void sort(int arr[],int n){
	int b[n],a=0;
	for(int i=0; i<n; i++){
		b[i]=0;a=arr[i];
		while(a>0){
			b[i]+=a%10;
			a/=10;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(b[i]<b[j]||(b[i]==b[j]&&arr[i]<arr[j])){
				int tmparr=0,tmpb=0;
				tmpb=b[i];
                b[i]=b[j];
                b[j]=tmpb;
				tmparr=arr[i];
                arr[i]=arr[j];
                arr[j]=tmparr;
			}
		} 
	}
}

int main(){
    int n, a[10], k;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &k);
        a[i]=k;
    }
    sort(a, n);
    for(int i=0; i<n-1; i++){
        printf("%d ", a[i]);
    }
    printf("%d\n", a[n-1]);
    return 0;
}