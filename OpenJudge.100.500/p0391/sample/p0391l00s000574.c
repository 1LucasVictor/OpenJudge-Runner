#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int a,b,q;
    char str[1001];
    char order[10];
    char p[101];
    
    int i,j,k;//アクセス変数
    char tmp[1001];
    
    char ans[1001][1001]={'\n'};
    int x=0;
    
    scanf("%s",str);
    scanf("%d",&q);
    
    for(i=0;i<q;i++){
        //初期化
//        order[0]='\n';
//        tmp[0]='\n';
        
        scanf("%s %d %d",order,&a,&b);
        
        if(strcmp(order,"print")==0){
            strncpy(&ans[0][x],&str[a],b-a+1);
            printf("%s\n",&ans[0][x]);
            x++;
        }else if(strcmp(order,"reverse")==0){
            for(j=b,k=0;k<=b-a+1;j--,k++){
                tmp[k]=str[j];
            }
            strncpy(&str[a],tmp,b-a+1);
        }else if(strcmp(order,"replace")==0){
            scanf("%s",p);
            strncpy(&str[a],p,b-a+1);
        }
    }
    return 0;
}
