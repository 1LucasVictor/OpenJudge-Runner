#include<stdio.h>
int prime[100000];
int num_prime=2;
int find(int n);
int main(void)
{
  int n,temp;
  
  prime[0]=2;
  prime[1]=3;
  
  while(scanf("%d",&n)!=EOF){
    if(n>prime[num_prime-1]){
      temp=judge(n);
      //print_prime();
      printf("%d\n",temp);
    }
    else if(n==prime[num_prime-1]){
      printf("%d",num_prime);
    }
    else{
      temp=find(n);
      printf("%d\n",temp);
    }
  }
  return 0;
}
int judge(int n)
{
  int i,j,flag=0;
  for(j=prime[num_prime-1]+1;j<=n;j++){
    flag=0;
    for(i=0;i<num_prime;i++){
      if(j%prime[i]==0){
	flag=1;
	break;
      }
    }
    if(flag==0){
      prime[num_prime]=j;
      num_prime++;
    }
  }
  return num_prime;
  
  return 0;
}
int print_prime()
{
  int i;
  
  for(i=0;i<num_prime;i++){
    printf("%2d: %d\n",i,prime[i]);
  }
  return 0;
}
int find(int n)
{
  int i,temp=0;

  for(i=0;i<num_prime;i++){
    if(prime[i]>n){
      return i;
    }
  }
}