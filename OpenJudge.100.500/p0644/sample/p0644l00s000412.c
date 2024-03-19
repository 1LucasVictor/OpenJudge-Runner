#include <stdio.h>

int main(void)
{
        int c=0;
        char s;
        for(int i=0;i<3;i++){
                scanf("%c",&s);
                if(s=='1')c++;
        }
        printf("%d\n",c);
        return 0;
}
