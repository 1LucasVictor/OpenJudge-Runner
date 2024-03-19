#include <stdio.h>
#include<string.h> //strcmp???strncmp??¢??°????????????????????????

int main(void){
    char str[100],str1[100];
    char ord[10];
    char print[] = "print";
    char reverse[] = "reverse";
    char replace[] = "replace";
    int n,i;
    //??????????????????scan
    scanf("%s\n",str);
    //???????????°???scan
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int a,b,t,k;
        //???????????????
        scanf("%s ",ord);
        scanf("%d %d",&a,&b);
        //a~b???print
        if(strcmp(ord,print)==0){
           for(t=a;t<=b;t++){
               printf("%c",str[t]);
           }
           printf("\n");
        }
        //a~b???reverse
        else if(strcmp(ord,reverse)==0){
            k = b;
            for(t=a;t<=b;t++){
                str1[t]=str[k];
                k--;
            }
            for(t=a;t<=b;t++){
                str[t]=str1[t];
            }
        }
        //a~b???p???replace
        else if(strcmp(ord,replace)==0){
            char p[b-a+1];
            scanf("%s\n",p);
            k=0;
            for(t=a;t<=b;t++){
                str[t]=p[k];
                k++;
            }
        }
    }
    return 0; /*0?????????*/
}