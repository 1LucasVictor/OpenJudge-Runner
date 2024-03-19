#include<stdio.h>

int main(void){
        int a[3][2],b[3],c[3],i,j=0,count=0;

        for(i = 0;i < 3;i++){
                scanf("%d %d",&a[i][0],&a[i][1]);
                b[i] = (float)(a[i][0]+a[i][1]);
        }

        while(j < 3){
                if((int)b[j] > 0){
                        count++;
                        b[j] /= 10;
                }else{
                        c[j]=count;
                        j++;
                        count=0;
                }
        }

        for(i = 0;i < 3;i++){
                printf("%d\n",c[i]);
        }
        return 0;
}