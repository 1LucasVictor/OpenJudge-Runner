#include<stdio.h>
#include<string.h>
int main(void){
    char str[1000]={},order[10]={},p[1001]={},cpy[1000]={};
    int q,i=0,a,b,number=0,number1=0;
    scanf("%s",str);
    scanf("%d",&q);
    while(scanf("%s",order)==1){
         scanf("%d %d",&a,&b);
        if(i==q) break;
    if(strcmp(order,"print")==0){
        for(number=a;number<=b;number++){
            printf("%c",str[number]);
        }
        printf("\n");
        if(i==q-1) break;
    }
    else if(strcmp(order,"reverse")==0){//間違えてる
         strcpy(cpy,str); 
        for(number=a,number1=b;number<=b;number++,number1--){
            str[number]=cpy[number1];
        }
    }
    else{
        scanf("%s",p);
        strncpy(str+a,p,b-a+1);
        //printf("str1=%s\n",str);
    }
    i++;
    }
    //printf("\n");
    return 0;
}
