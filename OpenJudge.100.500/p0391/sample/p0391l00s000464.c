#include <stdio.h>
#include<string.h>
int main(int argc, const char * argv[]) {
    char str[1001];
    char assign[21];
    char change[1001];
    char tmp[1001];
    int q=0,i,n1,n2,j;
    scanf("%s",str);
    scanf("%d",&q);
    for(i=0;i<q;i++){
        scanf("%s",assign);
        if(strcmp(assign,"replace")==0){
            scanf("%d %d",&n1,&n2);
            for(j=n1;j<=n2;j++){
                scanf("%c",&change[j]);
                str[j]=change[j];
                if(change[j]==' '){
                    j--;
                }

            }
            
        }if(strcmp(assign,"print")==0){
            scanf("%d %d",&n1,&n2);
            for(j=n1;j<=n2;j++){
                printf("%c",str[j]);
                if(j==n2){
                    printf("\n");
                }
            }

            
        }if(strcmp(assign,"reverse")==0){
            scanf("%d %d",&n1,&n2);
            for(j=0;j<=(n2-n1)/2;j++){
                tmp[j]=str[n1+j];
                str[n1+j]=str[n2+j];
                str[n2-j]=tmp[j];
            }
        }
                
    }
    
    return 0;
}