#include<stdio.h>
int main(){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c&&b>c){printf("%d %d %d\n",c,b,a);}
    else if(a>b&&b<c&&a>c){printf("%d %d %d\n",b,c,a);} 
    else if(a>b&&b<c&&a<c){printf("%d %d %d\n",b,a,c);}
    else if(c<b&&c<a&&a<b){printf("%d %d %d\n",c,a,b);}
    else if(a<c&&a<b&&c<b){printf("%d %d %d\n",a,c,b);}
    else{printf("%d %d %d\n",a,b,c);}

	   return 0;
}