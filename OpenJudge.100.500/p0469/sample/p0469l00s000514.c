#include<stdio.h>
int main()
{
int k;
int a;
int b;
int i;
int flag=0;

scanf("%d",&k);
scanf("%d %d",&a,&b);


for(i=a;i<b+1;i++){

if(i%k==0){flag=1;}

}


if(flag==0){
printf("NG");
}else{
printf("OK");
}

return 0;
}