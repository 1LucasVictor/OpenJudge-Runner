
      #include <stdio.h>
int main(){
  int n,i,j,x;

  scanf("%d",&n);

  for(i = 1;i <= n;i++){
    x = i;
    
    if(x % 3 == 0) printf(" %d",i);
    else{
	
      for(j = 0;;j++)
	{
	  if(x % 10 ==3) {
	    printf( " %d",i);
	    break;
	  }
	  x /= 10;
	  if(x == 0)break;
	}
    }
  }
      

  printf("\n");
  return 0;
}

