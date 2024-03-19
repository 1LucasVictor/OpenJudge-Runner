#include<stdio.h>
#include<string.h>
int main(void){
    int a=0,b=0,c=0,d=0,f=0,l=0,k=0,t=0,i=0;
    char x[100],y[8]={0},z[100]={0},p[100]={0},q[]="replace",w[]="reverse",e[]="print";
    scanf("%s",x);
    scanf("%d",&a);
    strcpy(z,x);
    for(l=0;l<a;l++){
            scanf("%s %d %d",y,&d,&f);
            if(strcmp(y,e)==0){
                for(t=d;t<f+1;t++){
                    printf("%c",x[t]);
                }
                printf("\n");
            }else if(strcmp(y,w)==0){
                for(i=0,c=d;c<f+1;c++,i++){
                    z[c]=x[f-i];

                }

            }else if(strcmp(y,q)==0){
                for(c=d;c<=f;c++){
                    scanf(" %c",&p[c]);
                    z[c]=p[c];
                }
            }

        for(i=d;i<=f;i++){
        x[i]=z[i];
        }
    }
    return 0;
}