#include <stdio.h>
#include <stdlib.h>


int main(){

    int a,b;

    scanf("%d",&a);
    scanf("%d",&b);
    int plus = a+b;
    int times = a*b;
    int minus = a-b;

    if (plus > times && plus >minus){
        printf("%d\n",plus);
       
    }

    else if (times > plus && times >minus){
        printf("%d\n",times);
       
    }
    else{
            printf("%d\n",minus);
           

    }











//3+1=4, 3−1=2 and 3×1=3. The largest among them is 4.
    return 0;
}
