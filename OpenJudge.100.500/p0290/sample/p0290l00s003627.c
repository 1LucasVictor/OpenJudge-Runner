#include<stdio.h>
#include<math.h>

int main()
{
  int i,j,s,count1=0,l,count2=0,n=0;
  scanf("%d",&l);
  while(n < l){
    n++;
    scanf("%d",&s);
     
    
    if(s == 2 || s == 3 || s == 5 || s == 7){
      count2++;
    }
    
    else if(s%2!=0 && s%3!=0 && s%5!=0 && s%7!=0){   
      count2++;  
}
  }
  printf("%d\n",count2);
}