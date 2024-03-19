#include <stdio.h>
#include <string.h>
char str1[1510];
char str2[1510];
char str3[1510];
int main(){
    int m;
    int a,b;
    int i,j;
    char p;
    scanf("%s",&str1);
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%s",&str3);
        if(strcmp(str3,"replace")==0){
            scanf("%d %d %s",&a,&b,&str2);
            for(j=0;j<b-a+1;j++){
            str1[a+j]=str2[j];
            }
        }
        else if(strcmp(str3,"reverse")==0){
            scanf("%d %d",&a,&b);
            while(a<b){
                p=str1[a];
                str1[a]=str1[b];
                str1[b]=p;
                a++;
                b--;
            }
        }
        else if(strcmp(str3,"print")==0){
            scanf("%d %d",&a,&b);
            for(j=a;j<=b;j++){
                printf("%c",str1[j]);
            }
            puts("");
        }
    }
    return 0;
}

