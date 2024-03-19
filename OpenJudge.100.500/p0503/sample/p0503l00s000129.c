#include<stdio.h>

int main()
{
    int n, a[200000], i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int j=0, k;
    for(i=0; i<n; i++){
        k=i;
        for(j=0; j<n; j++){
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

