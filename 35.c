#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, T, m, k, ak[100], sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        sum=0;
        scanf("%d%d%d", &T, &m, &k);
        for(int p=0; p<k; p++) scanf("%d", &ak[p]);
        for(int x=0; x<k; x++){
			for(int y=0; y<k; y++){
				if(ak[x]<ak[y]){
                    int t=ak[x];
                    ak[x]=ak[y];
                    ak[y]=t;
                }
			}
		}
        for(int q=0; q<m; q++){
            sum+=ak[q];
        }
        if(sum>T) printf("Impossible\n");
        else printf("%d\n", sum);
    }
    return 0;
}