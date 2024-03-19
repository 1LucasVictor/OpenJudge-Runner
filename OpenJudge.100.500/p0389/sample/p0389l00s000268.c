#include<stdio.h>
#include<string.h>
int main(void)
{
    int a,b,i,j,k;
    char x[200],y[400];
    while(1){
        scanf("%s",x);
        if(x[0]=='-')break;
        a=strlen(x);
        scanf("%d",&b);
        int c[b];
        for(i=0;i<b;i++){
            scanf("%d",&c[i]);
        }
        for(j=0;j<b;j++){
            strcpy(y,x);
            strcat(y,x);
            for(k=0;k<a;k++){
                x[k]=y[k+c[j]];
            }
            x[a]=0;
        }
        printf("%s\n",x);
    }
    return 0;
}