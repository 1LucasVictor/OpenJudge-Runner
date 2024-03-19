#include<stdio.h>
#include<string.h>
char origin[1010] = {0};
int main(){
    scanf("%s",origin);
    int q,i;
    scanf("%d",&q);
    int qsave = q;
    for(i = 0;i < q;i++){
        char cmd[10] = {0};
        scanf("%s",cmd);
        if(strstr(cmd,"print") != NULL){
            int a,b;
            int j;
            scanf("%d",&a);
            scanf("%d",&b);
            for(j = a;j <= b;j++){
                printf("%c",origin[j]);
            }
            printf("\n");
        }
        else if(strstr(cmd,"replace") != NULL){
            int a,b;
            scanf("%d %d",&a,&b);
            int p = b-a+1;
            char res[p + 10];
            scanf("%s",res);
            int j;
            for(j = a;j <= b;j++){
                origin[j] = res[j-a];
            }
            q = qsave;
        }
        else if(strstr(cmd,"reverse") != NULL){
            int a,b;
            scanf("%d %d",&a,&b);
            int j;
            char res[b-a+11];
            int k= 0;
            for(j = a;j <= b;j++){
                res[b-k] = origin[j];
                k++;
            }
            for(j = a;j <= b;j++){
                origin[j] = res[j];
            }
            q = qsave;
        }
    }
    return 0;
}