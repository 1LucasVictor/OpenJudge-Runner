#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char str[1000];
    scanf("%s",&str);
    int loop,i;
    //???????????°??\???
    scanf("%d",&loop);
    
    for(i=0;i<loop;i++){
        //??????
        char command[10],change[1000],reverse[1000];
        //?????????????????????????????????
        int start,end;
        scanf("%s %d %d",&command,&start,&end);
        //replace??§????????°
        int j;
        if(strcmp(command,"replace")==0){
            scanf("%s",&change);
            for(j=start;j<=end;j++) str[j]=change[j-start];
        }else if(strcmp(command,"reverse")==0){
            for (j=start;j<=end;j++)reverse[j]=str[j];
            for(j=start;j<=end;j++)str[j]=reverse[end-j];
        }else{
            for(j=start;j<=end;j++)printf("%c",str[j]);
            printf("\n");
        }
    }

	return 0;
}