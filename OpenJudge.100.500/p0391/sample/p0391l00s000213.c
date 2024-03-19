#include<stdio.h>
#include<string.h>
int main(){
    char str[1001],order[1001];
    int a,b,q;
    int i,j,n;
    scanf("%s %d",str,&q);
    for(i=0;i<q;i++){
        scanf("%s",order);
        if(strcmp(order,"print")==0){
            scanf("%d %d",&a,&b);
            for(j=a;j<=b;j++){
                printf("%c",str[j]);
            }
            printf("\n");
        }else if(strcmp(order,"reverse")==0){
            scanf("%d %d",&a,&b);
            strcpy(order,str);
            for(j=a,n=b;n-a>=0;j++,n--){
                str[j]=order[n];
            }
        }else{
            scanf("%d %d %s",&a,&b,order);
            for(j=a;j<=b;j++){
                str[j]=order[j-a];
            }

        }
    }
    return 0;
}
