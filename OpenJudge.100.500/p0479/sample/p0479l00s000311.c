#include<stdio.h>
#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int p[n],count[n+1];
    for(i=1; i<n+1; i++){
        count[i]=0;
    }
    for(i=1; i<n; i++){
        scanf("%d", &p[i]);
    }
    for(i=1; i<n; i++){
        count[p[i]]++;
    }
    for(i=1; i<n+1; i++){
        printf("%d\n", count[i]);
    }
    return 0;

}
