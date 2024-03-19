#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str[1001],cmd[10],c,s[1001];
    int i,j,q,a,b;
    
    scanf("%s",str);
    scanf("%d",&q);
    
    for(i=0;i<q;i++){
        scanf("%s",cmd);
        //print??¨??\????????????
        if(strcmp(cmd,"print") == 0){
            scanf("%d %d",&a,&b);
            for(j=a;j<=b;j++){
                printf("%c",str[j]);
            }
            printf("\n");
        }
        //reverse??¨??\????????????
        else if(strcmp(cmd,"reverse") == 0){
            scanf("%d %d",&a,&b);
            while(a<b){
                c = str[a];
                str[a] = str[b];
                str[b] = c;
                a++;
                b--;
            }
        }
        //replace??¨??\????????????
        else if(strcmp(cmd,"replace") == 0){
            scanf("%d %d %s",&a,&b,s);
            for(j=0;j<b-a+1;j++){
                str[j+a] = s[j];
            }
        }
    }
    return 0;
}