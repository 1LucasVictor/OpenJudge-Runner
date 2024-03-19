#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    scanf("%s",s);
    int N;
    scanf("%d",&N);

    char command[10];
    for(int i=0;i<N;i++){
        scanf("%s",command);
        if(strcmp(command,"replace")==0){
            int a,b;
            char q[1000];
            scanf("%d %d %s",&a,&b,q);
            for(int f=a;f<=b;f++){
                s[f]=q[f-a];
            }
        }else if(strcmp(command,"reverse")==0){
            int a,b;
            char q[1000];
            scanf("%d %d",&a,&b);
            for(int f=b,g=0;a<=f;f--,g++){
                q[g]=s[f];
            }
            for(int f=a;f<=b;f++){
                s[f]=q[f-a];
            }
        }else if(strcmp(command,"print")==0){
            int a,b;
            char q[1000];
            scanf("%d %d",&a,&b);
            for(int f=a;f<=b;f++){
                printf("%c",s[f]);
            }
            printf("\n");
        }
    }
}
