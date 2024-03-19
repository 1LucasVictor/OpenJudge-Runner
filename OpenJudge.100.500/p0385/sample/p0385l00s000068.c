#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    char i[1000];
    int count;
    int sum;
    while(1){
        count = 0;
        sum = 0;
        scanf("%s", i);
        if(i[0] == '0') break;
        do{
            sum += (int)i[count] - 48;
            //printf("%ld\n",i%10);
           count++;
            
        }while(i[count] != '\0');
        printf("%ld", sum);
        putchar('\n');
    }

    return 0;
}
