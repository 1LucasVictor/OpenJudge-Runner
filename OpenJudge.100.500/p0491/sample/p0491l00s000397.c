int main(){
	long long int n,k,total,mod;
  	scanf("%lld%lld",&n,&k);
  
  	total=n/k;
  
  	mod=n%k;
  
  	if(mod==0)
      	printf("0");
  	else
    {
      if((k-mod)<=mod)
    	printf("%lld",(k-mod));
      else
        printf("%lld",mod);
    }
 
}