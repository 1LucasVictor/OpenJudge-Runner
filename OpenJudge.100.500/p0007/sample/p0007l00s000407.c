a,b,c,d,t;
main(n){
  while(~scanf("%d",&n)){
    t=0;
  for(a=0;a<=9;a++)
  for(b=0;b<=9;b++)
  for(c=0;c<=9;c++)
  for(d=0;d<=9;d++)
    if(a+b+c+d==n)
      t++;
  printf("%d\n",t);
}
  return 0;
}