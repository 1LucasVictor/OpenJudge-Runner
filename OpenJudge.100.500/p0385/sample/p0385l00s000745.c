#include<stdio.h>

int main(void){
        char x[1001];

        while(1){
                scanf("%s", x);

                int s = 0, i = 0;
                if(x[0] == '0')
                        break;
                while(x[i])
                        s += (x[i++] - '0');
                printf("%d\n", s);

        }

        return 0;
}