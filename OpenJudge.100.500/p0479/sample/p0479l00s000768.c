#include <stdio.h>


int main(void)
{
    int i,j;
    int n;
    int a[200001];
    int buka[200001];

    scanf("%d",&n);
    for(i=0;i<n-1;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]==i+1){
                buka[i]++;
            }
        }
        printf("%d\n",buka[i]);
    }

    return 0;
}