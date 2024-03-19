#include<stdio.h>

int main(void){


int a,b,c;


int d;


scanf("%d %d %d",&a,&b,&c);


if(a>c){


d=a;


a=c;


c=d;


}


if(a>b){


d=b;


b=a;


a=d;


}


if(b>c){


d=c;


c=b;


b=d;


}


printf("%d %d %d\n",a,b,c);


return 0;


}