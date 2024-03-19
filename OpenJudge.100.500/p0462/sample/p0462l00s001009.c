/* ABC006_B
    Stuartyg */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


int main(void){
        int a;
        double b;
        scanf("%d %lf",&a,&b); //*標準入力から受け取る
        int ans = floor(a * b);
        printf("%d\n",ans);
        return 0;
}
