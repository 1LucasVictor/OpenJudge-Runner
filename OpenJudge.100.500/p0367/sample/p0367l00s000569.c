//1_3_D                                                                         
#include<stdio.h>

int main(void)
{
        int a, b, c, i, div = 0;
        scanf("%d %d %d", &a, &b, &c);

        for(i = a; i <= b; i++){
                if(c%i == 0){
                        div += 1;
                }
        }

        printf("%d\n",div);
        return 0;
}