
#include<stdio.h>

int main (void){

    int n,a;
    int h,i,j,k;

    while(scanf("%d",&n) != EOF){

        int b = 0;

        for(h=0;h<10;h++){
            for(i=0;i<10;i++){
                for(j=0;j<10;j++){
                    for(k=0;k<10;k++){
                        a = h + i + j + k;
                        if(a == n)
                            b++;

                    }
                }
            }
        }

        printf("%d\n",b);

    }
    return 0;
}