#include <stdio.h>
#include <string.h>
int main(){
    int a[100],b[100],i,ix;
    char op[100];
    i=0;
    while(1){
        scanf("%d",&a[i]);
        scanf("%s",&op[i]);
        scanf("%d",&b[i]);
        if(a[i]==0&&b[i]==0&&op[i]=='?'){
            ix=i;
            break;
        }
        i++;
    }
    for(i=0;i<ix;i++){
        if(op[i]=='+'){
            printf("%d\n",a[i]+b[i]);
        }else if(op[i]=='-'){
            printf("%d\n",a[i]-b[i]);
        }else if(op[i]=='*'){
            printf("%d\n",a[i]*b[i]);
        }else if(op[i]=='/'){
            printf("%d\n",a[i]/b[i]);
        }
    }
    return 0;
}