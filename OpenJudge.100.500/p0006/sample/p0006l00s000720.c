#include <stdio.h>
int main(){
        int n,i;
        int yen = 100000;
        scanf("%d",&n);
        for(i=0;i<n;i++){
                yen = yen * 1.05;
                if(yen % 1000 != 0){
                        yen = (yen / 1000 + 1) * 1000;
                }
        }
        printf("%d\n", yen);
return 0;
}