int a,i,j;
main(){
  for(;~scanf("%d",&i);){
    for(j=0,a=9999;a--;)
      (a%10+a/10%10+a/100%10+a/1000-i)?0:j++;
    printf("%d\n",j);
  }
}