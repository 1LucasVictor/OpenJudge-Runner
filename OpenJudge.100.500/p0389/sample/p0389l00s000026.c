#include<stdio.h>
#include<string.h>
 
int main(void){
    char a[210],b[210],c[210];
    int H,h[110],i,j,n;
    while(1){
        scanf("%s",a);
        if(a[0]=='-')break;
        scanf("%d",&H);
        n=strlen(a);
        for(i=0;i<H;i++){
            scanf("%d",&h[i]);
        }
        for(i=0;i<H;i++){
            for(j=0;j<h[i];j++){
                b[j]=a[j];
                b[j+1]='\0';
            }
            for(j=h[i];j<=n-1;j++){
                c[j-h[i]]=a[j];
                c[j-h[i]+1]='\0';
            }
            strcat(c,b);
            strcpy(a,c);
            strcpy(b,"");
            strcpy(c,"");
        }
        printf("%s\n",a);
    }
    return 0;
}
