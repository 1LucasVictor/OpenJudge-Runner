#include<stdio.h>
int main(){
int num,tnum,dgt=1,cnt,rem;
scanf("%d",&num);
cnt=0;
tnum=num;
while(tnum>0){
    rem=tnum%10;
    if(rem==dgt)
        cnt++;
    tnum=tnum/10;
}
printf("%d",cnt);
return 0;
}
