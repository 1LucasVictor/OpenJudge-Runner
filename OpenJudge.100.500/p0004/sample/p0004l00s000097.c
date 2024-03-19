main(){
  unsigned int i,j,a,b,c;
  while(scanf("%d %d",&a,&b)!=-1){
    if(a<b){
      c=a;
      a=b;
      b=c;
    }
    for(i=1;a%(b/i);)
      for(i++;b%i;i++);
    for(j=1;b/i*j%a||b/i*j%b;j++);
    printf("%d %d\n",b/i,b/i*j);
  }
  return 0;
}