#include <stdio.h>
#include <string.h>

int main(){

    int n;
    int a,b;
    int i,j;
    char t;
char t1[1000];
char t2[1000];
char t3[8];
    scanf("%s",&t1);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&t3);
        if(strcmp(t3,"replace")==0){
            scanf("%d %d %s",&a,&b,&t2);
            for(j=0;j<b-a+1;j++){
                t1[a+j]=t2[j];
            }
        }
        else if(strcmp(t3,"reverse")==0){
            scanf("%d %d",&a,&b);
            for(;a<b;){
                t=t1[a];
                t1[a]=t1[b];
                t1[b]=t;
                a++;
                b--;
            }
        }
        else if(strcmp(t3,"print")==0){
            scanf("%d %d",&a,&b);
            for(j=a;j<b+1;j++){
                printf("%c",t1[j]);
            }
             printf("\n");
        }
    }
    return 0;
}
