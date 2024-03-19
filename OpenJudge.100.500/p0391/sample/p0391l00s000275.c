#include<stdio.h>
#include<string.h>
int main(void){
    int q,i,a,b,slen,j;
    char str[1001];
    char ope[10];
    char rep[1001];
    char tmp;
    scanf("%s",&str);
    scanf("%d",&q);
    for(i = 0;i<q;i++){
        scanf("%s",&ope);
        if(ope[0] == 'p'){
                scanf("%d%d",&a,&b);
                for(j = a;j<=b;j++){
                    printf("%c",str[j]);
                }
                printf("\n");
        }
        else if(ope[2] == 'p'){
            scanf("%d%d%s",&a,&b,rep);
            for(j=a;j<=b;j++){
                str[j] = rep[j-a];
            }
        }
        else{
            scanf("%d%d",&a,&b);
            slen = b - a + 0.5;
            for(j=0;j<slen;j++){
                tmp = str[a+j];
                str[a+j] = str[b-j];
                str[b-j] = tmp;
            }
        }
    }
    return 0;
}