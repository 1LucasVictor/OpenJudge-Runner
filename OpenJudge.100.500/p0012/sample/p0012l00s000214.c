#include<stdio.h>

main()
{
  int tra[10]={0},out[10]={0};
  int i,c,com;
  i=c=0;
  scanf("%d",&com);
  tra[0]=com;
  i=1;
  
  while(i!=0 && i<10){

    scanf("%d",&com);
    if(com==0){
      out[c]=tra[i-1];
      i--;
      c++;
    }else{
      tra[i]=com;
      i++;
    }
   
  }

  for(c=0;out[c]!=0 && c<10;c++){
    printf("%d\n",out[c]);
  }
  return 0;
}