#include <stdio.h>
#include <string.h>


int main(void){
    int a;
    int b;
    scanf("%d %d", &a, &b);

    if(-1000 <= a && a <= 1000 && -1000 <= b && b <= 1000){
    
    int num[3];
    int n;
    num[0] = a+b;
    num[1] = a-b;
    num[2] = a*b;

    int max;
    for(int i= 0; i<3; ++i){
            if(num[0]<= num[i]){
                max = num[i];
            }
    }

    printf("%d\n",max);
}

    return 0;

}