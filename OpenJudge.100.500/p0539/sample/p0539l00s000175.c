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
    for (i=9;i>=1;i--){ /* for文二個で1*1～9*9まで調べる*/
        for(j=9;j>=1;j--){
            if (n % j ==0){
                n/=j; /*nをjで割った商にする*/
                break;
            }
        }
        if (n % i ==0){
            n/=i;
            break;
        }
    }
    if (n==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
