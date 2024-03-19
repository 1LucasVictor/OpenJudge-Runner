#include <stdio.h>
int main(void){

    int l, r, i, j, ans;
    int min = 2019;
    
    scanf("%d %d", &l, &r);
    
    for(i=l; i<r; i++){
        for(j=i+1; j<=r; j++){
            ans = ((i%2019)*(j%2019))%2019;
            if(min > ans){min = ans;}
            //printf("a");
        }
    }

    printf("%d", min);
}