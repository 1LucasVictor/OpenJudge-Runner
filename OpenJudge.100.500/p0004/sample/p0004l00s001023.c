main(){
  unsigned int i,j,a,b;
  while(scanf("%d %d",&a,&b)!=-1){
    if(a<b){
      for(i=1;b%(a/i);)
	for(i++;a%i;i++)
	  ;

      //for(i=a;a%i||b%i;i--);
      for(j=1;a/i*j%b||a/i*j%a;j++)
	;
      printf("%d %d\n",a/i,a/i*j);
    }else{
      for(i=1;a%(b/i);)
	for(i++;b%i;i++)
	  ;
      //for(i=b;a%i||b%i;i--);
      //for(j=b/i;j%a;j+=b/i)
    //	;
      for(j=1;b/i*j%a||b/i*j%b;j++)
	;
      printf("%d %d\n",b/i,b/i*j);
    }

  }
  return 0;
}