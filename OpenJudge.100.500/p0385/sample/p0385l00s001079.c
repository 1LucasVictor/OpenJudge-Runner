#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    char x[1000];

    while (1)
    {
        /* code */
        scanf("%s", &x);
        int sum=0;
        //printf("%s, %d\n", x, atoi(x));

        if(atoi(x)==0){
            break;
        }
        else{
            //printf("len:%d\n", strlen(x));
            for(int i=0; i< strlen(x); i++){
                sum += x[i]-48;
            }
            printf("%d\n", sum);

        }
    }

    return 0;
}
