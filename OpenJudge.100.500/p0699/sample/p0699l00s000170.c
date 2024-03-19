#include<stdio.h>
int main(){

int i,n,count1=0,count3=0,num[100];
for(i=1;i<=3;i++){
    scanf("%d",&num[i]);
    if(num[i]==5){
        count1++;
    }

    else if(num[i]==7){
        count3++;
    }

}
if(count1==2 && count3==1){

    printf("YES\n");
}
else{
    printf("NO\n");
}
return 0;
}
