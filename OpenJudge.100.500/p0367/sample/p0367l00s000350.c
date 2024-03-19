#include<stdio.h>
#include<stdlib.h>

int main()
{
  char str[20],x[10],y[10],z[10];
  int m,a,b,c,i=0,j=0,l=0;
  
  fgets(str,sizeof(str),stdin);
    
    for(;;){
      if(str[i]==' '){
	break;
      }
      x[i]=str[i];
      i++;
    }

    i++;

    for(;;){
      if(str[i]==' '){
	break;
      }
      y[j]=str[i];
      i++;
      j++;
    }

    for(;;){
      if(str[i]=='\0'){
	break;
      }
      z[l]=str[i+1];
      i++;
      l++;
    }

    a=atoi(x);
    b=atoi(y);
    c=atoi(z);
    j=0;

    if(a<1 || 10000<a || b<1 || 10000<b || c<1 || 10000<c || b<a){
      printf("Error!!\n");
    }else{
      for(i=a;i<=b;i++){
	if(c%i==0){
	  j++;
	}	
      }
      printf("%d\n",j);
    }
    
    return 0;
}