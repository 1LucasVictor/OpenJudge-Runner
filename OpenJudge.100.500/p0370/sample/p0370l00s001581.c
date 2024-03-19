#include<stdio.h>
#include<string.h>
int main(){
    int  x[10000],y[10000],i=0,j=0,a[10000];
    char op[10000];

    while(1){
        scanf("%d%s%d",&x[i],op,&y[i]);
        if(strcmp(op,"?")==0){
            break;
        }
        if(strcmp(op,"+")==0){
            a[i]=x[i]+y[i];
        }else if(strcmp(op,"-")==0){
            a[i]=x[i]-y[i];
        }else if(strcmp(op,"*")==0){
            a[i]=x[i]*y[i];
        }else if(strcmp(op,"/")==0){
            a[i]=x[i]/y[i];
        }
        i++;
    }

    for(j=0;j<i;j++){
        printf("%d\n",a[j]);
    }

    return 0;
}