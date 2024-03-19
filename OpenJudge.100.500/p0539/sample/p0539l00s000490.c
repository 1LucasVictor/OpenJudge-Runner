/* ABC144_B
    Stuartyg */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


int main(void){
    int n;
    int i,j; 
    scanf("%d",&n); /*入力を受け取る*/
    for (i=1;i<=9;i++){ /* for文二個で1*1～9*9まで調べる*/
        for (j=1;j<=9;j++){
            if (n==i*j){
                printf("Yes\n");
                return 0;
            }
        }
    }

    printf("No\n");
    return 0;
}