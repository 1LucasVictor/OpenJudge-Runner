#include<stdio.h>

int main(void){
    char str[10];
    int count=0;
    char a1[2];
    scanf("%s",str);
    for(int i=0;i<4;i++){
        if(i==3){
            printf("No\n");
            return 0;
        }
        for(int j=i+1;j<4;j++){
            if(str[i]==str[j]){
                a1[0]=str[i];
                count++;
                break;
            }
        }
        if(count==1) break;
    }

     for(int i=0;i<4;i++){
        if(i==3){
            printf("No\n");
            return 0;
        }
        for(int j=i+1;j<4;j++){
            if(str[i]==str[j]){
                if(a1[0]==str[i]){
                }
                else {
                    printf("Yes\n");
                    return 0;
                }
            }
        }
    }
   

    return 0;
}