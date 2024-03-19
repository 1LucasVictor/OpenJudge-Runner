#include <stdio.h>

int main(void)
{
    int x, tri[3], i, j, maxi, n;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        maxi=0; x=0;
        for(j=0; j<3; j++){
            scanf("%d", &tri[j]);
            tri[j] *= tri[j];
            if(tri[maxi] < tri[j]){
                maxi = j;
            }
        }
        for(j=0; j<3; j++){
            if(j != maxi){
                x+=tri[j];
            }
        }
        if(tri[maxi] == x){
            printf("YES\n");
        }else{
            printf("NO\n");            
        }
    }

    return 0;
}