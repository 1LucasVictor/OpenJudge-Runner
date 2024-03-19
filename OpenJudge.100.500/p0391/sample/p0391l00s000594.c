#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,i,j;
    char x[1001],y[10],z[1001];
    scanf("%s",&x);
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%s",&y);
        if(strcmp(y,"print")==0){
        scanf("%d%d",&b,&c);
            for(j=b;j<c+1;j++){
                putchar(x[j]);
            }
            puts("");
        }
        else if(strcmp(y,"reverse")==0){
        scanf("%d%d",&b,&c);
            for(j=0;j<c-b+1;j++){
                z[j]=x[c-j];
            }
            for(j=0;j<c-b+1;j++){
                x[b+j]=z[j];
            }
        }
        else if(strcmp(y,"replace")==0){
        scanf("%d%d%s",&b,&c,&z);
            for(j=0;j<c-b+1;j++){
                x[b+j]=z[j];
            }
        }
    }
    return 0;
}