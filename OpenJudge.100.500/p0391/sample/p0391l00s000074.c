#include <stdio.h>
#include <string.h>

int main(void){
    char str[1001],c[8],p[1002];
    int i,j,q,a,b;

    scanf("%s",str);
    scanf("%d",&q);
    
    for(i=0;i<q;i++){
        scanf("%s",c);
        if(!strcmp(c,"print")){
            scanf("%d %d",&a,&b);
            for(j=a;j<=b;j++) putchar(str[j]);
            putchar('\n');
        }
        else if(!strcmp(c,"reverse")){
            scanf("%d %d",&a,&b);
            for(j=0;j<=(b-a)/2;j++){
                char tmp=str[a+j];
                str[a+j]=str[b-j];
                str[b-j]=tmp;
            }
        }
        else{
            scanf("%d %d %s",&a,&b,p);
            for(j=a;j<=b;j++) str[j]=p[j-a];
        }
        getchar();
    }

    return 0;
}