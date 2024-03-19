#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char str[1001],p[1001],t[8],tmp;
    int q,a,b,i,j,k;
    scanf("%s%d",str,&q);
    for(i=0;i<q;i++){
        scanf("%s%d%d",t,&a,&b);
        if(strcmp(t,"print")==0){
            for(j=a;j<=b;j++)printf("%c",str[j]);
            puts("");
        }
        else if(strcmp(t,"reverse")==0){
            for(j=a;j<b;j++){
                for(k=b;k>j;k--){
                    tmp=str[k-1];
                    str[k-1]=str[k];
                    str[k]=tmp;
                }
            }
        }
        else{
            scanf("%s",p);
            j=a;
            k=0;
            while(j<=b){
                str[j]=p[k];
                j++;
                k++;
            }
        }
    }
    return 0;
}
