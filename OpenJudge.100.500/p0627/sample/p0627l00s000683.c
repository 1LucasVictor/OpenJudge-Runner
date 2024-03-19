#include <stdio.h>
#include <string.h>

int max(int*);

int main(void){
    int a;
    int b;
    scanf("%d %d", &a, &b);
    
    int num[3]={a+b,a-b, a*b};
    int max;
    int i;

    for(i=0;i<3;i++){
        if(num[i]>=max){
            max=num[i];
        }
    }

    printf("%d\n",max);
    return 0;
}