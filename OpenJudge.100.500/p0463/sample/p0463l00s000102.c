#include <stdio.h>
#include <string.h>

int main(void){
    char hon[10];
    scanf("%s",&hon);
    for(int i=0;i<=3;i++){
        if(hon[i+1]=='\0'){
            if(strncmp("3",&hon[i],1)==0){
                printf("bon");
                return 0;
            }else if(strncmp("0",&hon[i],1)==0||strncmp("1",&hon[i],1)==0||strncmp("6",&hon[i],1)==0||strncmp("8",&hon[i],1)==0){
                printf("pon");
                return 0;
            }else{
                printf("hon");
                return 0;
            }
        }
    }
}