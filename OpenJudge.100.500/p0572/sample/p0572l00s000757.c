#include <stdio.h>

int main(){
    int L, R, i, j, mod;
    int imod = 2020;

    scanf("%d%d", &L, &R);
    
    j = i + 1;

    for(i=L;i<R;i++){
        for(j=i+1;j<=R;++j){
          mod = (i*j) % 2019;
          if(mod < imod){
           imod = mod;
            }
        }
    } 



    printf("%d\n", imod);
    return 0;
}