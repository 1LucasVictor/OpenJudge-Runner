#include <stdio.h>
#include <string.h>

int main(){
    char str[1001];
    char order[10];
    char p[1001];
    char temp[1001];
    int a,b,q,i,j;
    scanf("%s%d",str,&q);
    
    for(i=0;i<q;i++){
        scanf("%s%d%d",order,&a,&b); 
        
        if(strcmp(order,"replace")==0){
            scanf("%s",p);
            for(j=0;j<=b-a;j++){
                str[a+j]=p[j];
            }
        }
        
        else if(strcmp(order,"reverse")==0){
            strcpy(temp,str);
            for(j=a;j<=b;j++){
                str[b-j]=temp[a+j];
            }
        }
        
        else if(strcmp(order,"print")==0){
            for(j=a;j<=b;j++){
                printf("%c",str[j]);
            }
            printf("\n");
        }
        
    }
    return 0;
}
