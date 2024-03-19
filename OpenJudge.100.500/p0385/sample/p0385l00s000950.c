#include<stdio.h>
int main(void){

char ch[1001];
int sum='0';
while (1)
{
    
    scanf("%s", ch);
    if ( ch[0] == '0' ){ break; }

    for (int i = 0; i < 1001; i++)
    {
        sum+=ch[i]-'0';
        if ( ch[i] == '\0' )
            {   
                printf("%d\n",sum);
                sum='0';
                break;
            }
    }
}

return 0;
}
