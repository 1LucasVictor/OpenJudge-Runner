#include<stdio.h>
#include<string.h>
typedef struct{
    char S[201];
    char cin;
    int m;
    int h[200];
}SHUFF;
int main(void)
{
    SHUFF str[10];
    int num=0;
    int dnum=0;
    while(num<10){
        scanf("%s",str[num].S);
        if(str[num].S[0]=='-'){
            break;
        }
        scanf("%d",&str[num].m);
        for(int i=0;i<str[num].m;i++){
            scanf("%d\n",&str[num].h[i]);
        }
        num=num+1;
    }
    num=num-1;
    while(num>=0){
        for(int k=0;k<str[dnum].m;k++){
            for(int j=0;j<str[dnum].h[k];j++){
                for(int i=0;str[dnum].S[i+1];i++){
                    str[dnum].cin=str[dnum].S[i];
                    str[dnum].S[i]=str[dnum].S[i+1];
                    str[dnum].S[i+1]=str[dnum].cin;
                }
            }
        }
        if(str[dnum].S[0]!='-'){
            printf("%s\n",str[dnum].S);
        }
        dnum=dnum+1;
        num=num-1;
    }
    return 0;
}
