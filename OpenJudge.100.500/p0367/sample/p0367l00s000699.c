#include <stdio.h>

int main(void){
        int a, b, c, i, result=0;
        do{
                scanf("%d %d %d", &a, &b, &c);
        }while(a>b);
        for(i=a;i<=b;i++){
                if(c%i==0)
                        result++;
        }
        printf("%d\n", result);
        return 0;
}
