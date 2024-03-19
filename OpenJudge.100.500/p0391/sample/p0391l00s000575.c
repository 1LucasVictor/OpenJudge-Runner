#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str[1000],a[1000],wiki[10],r;
    int count=0,i=0,x=0,y=0,j=0,z=0;
    scanf("%s",str);
    scanf("%d",&count);
    while(count--){
        scanf("%s %d %d",wiki,&x,&y);
        if(strcmp(wiki,"print")==0){
            for(j=x;j<=y;j++){
                printf("%c",str[j]);
            }
            printf("\n");
        }else if(strcmp(wiki,"reverse")==0){
            for(j=x;j<y;j++){
                r=str[j];
                str[j]=str[y-i];
                str[y-i]=r;
                i++;
            }
        }else if(strcmp(wiki,"replace")==0){
            scanf("%s",a);
            z=0;
            for(j=x;j<=y;j++){
                str[x+z]=a[z];
                z++;
            }
        }
    }
    return 0;
}