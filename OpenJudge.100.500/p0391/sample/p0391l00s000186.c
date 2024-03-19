#include <stdio.h>
#include <string.h>

int main(void)
{
    int q,a,b,i,x;
    char str[1010],str2[1010],p[20];
    
    scanf("%s",str);
    scanf("%d",&q);
    
    for(i=0;i<q;i++){
        scanf("%s%d%d",p,&a,&b);
        strcpy(str2,str);
        
        if(strcmp(p,"reverse")==0){
            x=b;
            for(;a<=b;a++){
                str[a]=str2[x];
                x--;
            }
        }else if(strcmp(p,"replace")==0){
            x=0;
            scanf("%s",str2);
            for(;a<=b;a++){
                str[a]=str2[x];
                x++;
            }
        }else{
            for(;a<=b;a++){
            printf("%c",str[a]);
            }
        printf("\n");
        }
    }
    return 0;
}
