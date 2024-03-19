#include <stdio.h>

int main(){
    int L, R, i, j, mod;
    int imod = 2020;

    0 <= L < 2000000000;
    0 < R <= 2000000000;

    scanf("%d%d", &L, &R);

    if ((R - L) >= 2019){
            printf("0\n");
            return 0;
    }else{
    for(i=L;i<R;i++){
        for(j=i+1;j<=R;++j){
          mod = (i%2019)*(j%2019)%2019;
          if(mod < imod){
           imod = mod;
          }
            }
        }
    } 



    printf("%d\n", imod);
    return 0;
}