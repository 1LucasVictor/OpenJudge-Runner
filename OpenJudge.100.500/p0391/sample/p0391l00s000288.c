#include<stdio.h>
#include<string.h>
int main(){
    char str[1001],p[1001],command[8],t;
    int a,b,c,i,q;
    scanf("%s",str);
    scanf("%d",&q);
    for(i=0;i<q;i++){
        scanf("%s",command);
        if(command[0]=='p'){
            scanf("%d",&a);
            scanf("%d",&b);
            for(;a<=b;a++){
                printf("%c",str[a]);
            }
            printf("\n");
        }else if(command[2]=='v'){
            scanf("%d",&a);
            scanf("%d",&b);
            for(;a<=b;a++){
                t=str[a];
                str[a]=str[b];
                str[b]=t;
                b--;
            }
        }else{
            scanf("%d",&a);
            scanf("%d",&b);
            scanf("%s",p);
            c=0;
            for(;a<=b;a++){
                str[a]=p[c];
                c++;
            }
        }
    }
    return 0;
}
