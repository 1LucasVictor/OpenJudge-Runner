#include <stdio.h>
#include <string.h>
char x1[1510];
char x2[1510];
char x3[1510];
int main(){
    int m;
    int a,b;
    int i,j;
    char p;
    scanf("%s",&x1);
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%s",&x3);
        if(strcmp(x3,"replace")==0){
            scanf("%d %d %s",&a,&b,&x2);
            for(j=0;j<b-a+1;j++){
                x1[a+j]=x2[j];
            }
        }
        else if(strcmp(x3,"reverse")==0){
            scanf("%d %d",&a,&b);
            while(a<b){
                p=x1[a];
                x1[a]=x1[b];
                x1[b]=p;
                a++;
                b--;
            }
        }
        else if(strcmp(x3,"print")==0){
            scanf("%d %d",&a,&b);
            for(j=a;j<=b;j++){
                printf("%c",x1[j]);
            }
            puts("");
        }
    }
    return 0;
}

