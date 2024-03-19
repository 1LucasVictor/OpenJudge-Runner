
#include<stdio.h>
#include<string.h>
int main(void)
{
    char x[1000][1001];
    long long int i = 0,j = 0,sum = 0,a,b = 0;
    while(1){
        scanf("%s",x[i]);
        if(x[i][0] == '0')break;
        i++;
        b++;
    }
    while(1){
        a = strlen(x[j]);
        for(i = 0;i < a;i++){
            //printf("%d\n",x[i] - '0');
            sum += x[j][i] - '0';
        }
        printf("%lld\n",sum);
        sum = 0;
        j++;
        if(j == b)break;
    }


    return 0;
}