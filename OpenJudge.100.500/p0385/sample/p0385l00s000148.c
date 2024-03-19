#include <stdio.h>

int main(void) {  

char num[1001];    

int a, sum;    

while(1){      

scanf("%s" ,num);      

if(num[0]=='0')break;      

sum = 0;      

for(a = 0;num[a]!='\0';a++){        

sum+=num[a]-'0';       

}      

printf("%d\n" ,sum);     

}  

return 0;

}
     