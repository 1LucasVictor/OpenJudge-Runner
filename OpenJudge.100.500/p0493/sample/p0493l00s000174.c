int main()
{int a,d,s=0;
  scanf("%d",&a);
  while( a>=5){
  if(a>=500){

    d=a/500;
    s=s+d*1000;
     a=a%500;


  }
  else if(a>=5){

    d=a/5;
    s=s+d*5;
  a=a%5;
  }

  }
  printf("%d",s);
  
}