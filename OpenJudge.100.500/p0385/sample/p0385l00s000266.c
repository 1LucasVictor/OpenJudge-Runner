#include <stdio.h>

int main(void){

while(1){


char x;


int s=0;


scanf("%c",&x);


while(x!='\n'){


s+=x-'0';


scanf("%c",&x);


}


if(s==0){


break;


}


printf("%d\n",s);


}


return 0;


}