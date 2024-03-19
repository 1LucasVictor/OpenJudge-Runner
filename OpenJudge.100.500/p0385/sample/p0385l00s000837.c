#include<stdio.h>
#include<string.h>

int main()
{
    int flg=0,sum=0;
    char d[1000];
    while(1){
        scanf("%s",d);
        sum =0;
        if(d[0] == '0')
            break;
        if(('0' <= d[0]) && (d[0] <= '9')){
            //数値の場合の処理
            for(int i=0;i<strlen(d);i++){
                //printf("%s\n",d);
                //printf("5確認用 %c\n\n",d[0]);
                if(('0' <= d[i]) && (d[i] <= '9')){
                    sum += d[i]-'0';
                }else {
                    //printf("%d\n",sum);
                    flg = 1;
                }
            }
        printf("%d\n",sum);
        }
    if(flg == 1){
        break;
    }
    }
    return 0;
}
