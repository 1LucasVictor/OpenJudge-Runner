#include<stdio.h>
#include<string.h>
int main(void)
{
    int q,a,b,i,j,num;
    char str[1001],S[8],C[1001];
    scanf("%s",str);
    scanf("%d",&q);
    for(j=0;j<1001;j++){if(str[j]=='\0'){break;}}
    num=j;
    for(i=0;i<q;i++)
    {
        for(j=0;j<1001;j++){C[j]='\0';}
        scanf("%s %d %d",S,&a,&b);
        if(!strcmp(S,"print")){
            for(j=a;j<=b;j++){printf("%c",str[j]);}
            printf("\n");
            continue;
        } else if(!strcmp(S,"reverse")){
            for(j=a;j<=b;j++){C[j]=str[b-j+a];}
            for(j=a;j<=b;j++){str[j]=C[j];}
            continue;
        } else if(!strcmp(S,"replace")){
            scanf("%s",C);
            for(j=a;j<=b;j++){str[j]=C[j-a];}
            continue;
        }
    }
    return 0;
}
