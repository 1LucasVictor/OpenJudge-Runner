#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];  scanf("%s",str);
    int q,cnt=0;          scanf("%d",&q);
    
    while(cnt<q){
        char order[100];
        scanf("%s",order);
        if(strcmp(order,"replace")==0){
            int a,b,i;    scanf("%d%d",&a,&b);
            char x[100];  scanf("%s",x);
            for(i=a;i<=b;i++)
                str[i]=x[i-a];
        }
        if(strcmp(order,"reverse")==0){
            int a,b,i;    scanf("%d%d",&a,&b);
            char cpy[100];
            strcpy(cpy,str);
            for(i=a;i<=b;i++)
                str[i]=cpy[a+b-i];
        }
        
        if(strcmp(order,"print")==0){
            int a,b,i;    scanf("%d%d",&a,&b);
            for(i=a;i<=b;i++){
                printf("%c",str[i]);
            }
            printf("\n");
        }
        cnt++;
    }
    return 0;
}

