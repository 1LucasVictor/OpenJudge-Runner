#include<stdio.h>

int main()
{
    int n, a[200000], i;
    int j=0, k;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        k=i;
        for(j=0; j<i; j++){
            if(k!=j && a[k]==a[j]){
                printf("NO\n");
                goto end;
            }
        }
    }
    
    printf("YES\n");
    end :
    return 0;
}

