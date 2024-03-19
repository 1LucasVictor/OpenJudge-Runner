main(){
  int a,b,i,gcd=1;        /* The gcd is the greatest common divisor. */

  scanf("%d%d",&a,&b);    /* Scaning two natural numbers a and b */
  
  if(a<1||a>10e9||b<1||b>10e9){
    return 0;
  }                       /* Constrants: 1<=a,b<=10e9 */

  for(i=2;a>=2||b>=2;i++){
    while(a%i==0||b%i==0){
      if(a%i==0&&b%i==0){
	gcd = gcd * i;   /* Multiply the common prime factor. */
	a = a/i;
	b = b/i;
      }
      else if(a%i==0)a = a/i;
      else b = b/i;
    }
  }

  printf("%d\n",gcd);
  return 0;
}