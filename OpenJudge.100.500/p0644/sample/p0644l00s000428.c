#include <stdio.h>
int main(void){
   int i,count=0;
   char num[4];
   for(i=0;i<4;i++)
   num[i]=0;
   
    scanf("%s",&num);
    
    for(i=0;i<3;i++)
    if(num[i]=='1')
    count++;
    
    printf("%d\n",count);
    return 0;
}
