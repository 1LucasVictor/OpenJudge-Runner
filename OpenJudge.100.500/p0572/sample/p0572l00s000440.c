#include <stdio.h>
#include <stdlib.h>

int main(void){
    int l,r;
    scanf("%d%d",&l,&r);
    
    if (r - l >= 2019 || l == 0){
        printf("0");
        return 0;
    } else {
        int temp = 2019;
        for(int i = l;i < (l + 2019) && i <= r;i++){
            for(int j = i+1;j < (l + 2019) && j <= r;j++){
                if (temp > ((i * j) % 2019)){
                    temp = ((i * j) % 2019);
                }

                if (temp == 0){
                    break;
                }
            }
            if (temp == 0){
                break;
            }
        }
        printf("%d",temp);
    }


    return 0;
}