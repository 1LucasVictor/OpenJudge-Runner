#include<stdio.h>
int main()
{
  int m[10000],n,x,y;
  int count;

     scanf("%d",&n);
   for(x=0;x<n;x++)
     scanf("%d",&m[x]);
   
  for(x=0;x<n;x++){
    while(1){

    if(m[x]==2 || m[x]==3){
     count++;
     break;
}

    if(m[x]<2 || m[x]%2==0)
       break;
   
    y=3;
    while(y*y<=m[x]){
    if(m[x]%y==0)
        break;
    
     y+=2;
}

  if(m[x]%y != 0){
    count++;
    break;
  }
 }
}
    printf("%d\n",count);

  return 0;
}