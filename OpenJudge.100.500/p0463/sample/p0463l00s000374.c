#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char n[100],i,p=0;



    scanf("%s",&n);

    p=strlen(n);
    if(p==1){
    if(n[0]=='2'||n[0]=='4'||n[0]=='5'||n[0]=='7'||n[0]=='9'){
        printf("hon\n");
        }

        else if(n[0]=='0'||n[0]=='1'||n[0]=='6'||n[0]=='8'){
            printf("pon\n");
            }

            else printf("bon\n");


    }
    if(p==2){
         if(n[1]=='2'||n[1]=='4'||n[1]=='5'||n[1]=='7'||n[1]=='9'){
            printf("hon\n");
        }
         else if(n[1]=='0'||n[1]=='1'||n[1]=='6'||n[1]=='8'){
            printf("pon\n");
        }
        else printf("bon\n");
    }

        if(p==3){
            if(n[2]=='2'||n[2]=='4'||n[2]=='5'||n[2]=='7'||n[2]=='9'){
            printf("hon\n");
        }
         else if(p==3&&(n[2]=='0'||n[2]=='1'||n[2]=='6'||n[2]=='8')){
            printf("pon\n");
        }

        else printf("bon\n");
        }



    return 0;
}
