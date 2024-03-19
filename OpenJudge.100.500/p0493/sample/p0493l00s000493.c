#include <stdio.h>

int main(){
     int x;

    scanf("%d",&x);

    int c500 = x/500;
    int r500 = x%500;

    int c5 = r500/5;





    printf("%d\n",c500*1000 + c5*5);


return 0;
}
