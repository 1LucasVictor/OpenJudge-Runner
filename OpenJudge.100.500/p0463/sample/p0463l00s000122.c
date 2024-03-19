/*	ex3_2
	L40S38	*/
#include<stdio.h>
int main(void){
    int n, r;
    scanf("%d",&n);
    //nはいろはちゃんが数えようとしている数（本）
    r=n%10;//rはnの1の位の数
    if(r==3){
        printf("bon");
    }else if(r==0||r==1||r==6||r==8){
        printf("pon");
    }else{
        printf("hon");
    }
    return 0;
}