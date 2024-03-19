#include<stdio.h>

#define MAX_SIZE (1000)

int main(void)
{
        char x[MAX_SIZE];
        int i, sum;

        while(1){
                scanf("%s", x);

                if(x[0] == '0'){
                        break;
                }

                sum = 0;

                for(i=0; i < MAX_SIZE; i++){
                        if(x[i] == '\0'){
                                break;
                        }

                        sum += x[i] & 0xf;
                }

                printf("%d\n", sum);
        }

        return 0;
}
