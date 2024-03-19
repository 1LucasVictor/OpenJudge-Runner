#include<stdio.h>
int main(void){
    int i,n,m=0;
scanf("%d",&n);
for(i=3;i<n+1;i++){
    m=i;
 if(i%3==0) printf(" %d",i);
else
 while(m>0){
     if(m%10==3) 
      printf(" %d",i);
      if(m>999) m/=10;
      if(m>99) m/=10;
      m/=10;
 }

}
printf("\n");
 return 0;
}
