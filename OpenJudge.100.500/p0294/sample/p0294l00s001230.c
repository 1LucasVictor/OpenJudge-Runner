#include<stdio.h>
#define N 36

int main(){

  int i,j,n,min,hantei1,hantei2,a,b,cnum[N],cnum2[N],innum[N],nchange;
  char ccard[N],ccard2[N],incard[N],cchange;


  scanf("%d",&n);
  for(i = 0;i < n;i++){
    while(1){
    scanf("%c",&ccard[i]);
    if(ccard[i] != 'S' && ccard[i] != 'H'&& ccard[i] != 'C' && ccard[i] != 'D')continue;
    scanf("%d",&cnum[i]);
    break;
    }
  }
  
  for(i = 0;i < n;i++){
    ccard2[i] = ccard[i];
    cnum2[i] = cnum[i];
    incard[i] = ccard[i];
    innum[i] = cnum[i];
  }

  for(i =0;i < n;i++){
    for(j = n-1;j > i;j--){
      if(cnum[j] < cnum[j-1]){
	cchange = ccard[j];
	nchange = cnum[j];
	ccard[j] = ccard[j-1];
	cnum[j] = cnum[j-1];
	ccard[j-1] = cchange;
	cnum[j-1] = nchange;
      }
    }
  }

  for(i = 0;i < n;i++){
    min = i;
    for(j = i;j < n;j++){
      if(cnum2[j] < cnum2[min]){
	min = j;
      }
    }
    cchange = ccard2[i];
    nchange = cnum2[i];
    ccard2[i] = ccard2[min];
    cnum2[i] = cnum2[min];
    ccard2[min] = cchange;
    cnum2[min] = nchange;
    
  }

  for(i = 0;i < n;i++){
    for(j = i+1;j < n;j++){
      for(a = 0;a < n;a++){
	for(b = a+1;b < n;b++){
	  if(innum[i] == innum[j] && incard[i] == ccard[b] && incard[j] == ccard[a]){
	    hantei1 = 0;
	  }
	  if(innum[i] == innum[j] && incard[i] == ccard2[b] && incard[j] == ccard2[a]){
	    hantei2 = 0;
	  }
	}
      }
    }
  }
    for(i = 0;i < n-1;i++){
      printf("%c%d ",ccard[i],cnum[i]);
    }
    printf("%c%d\n",ccard[n-1],cnum[n-1]);
    if(hantei1 == 0)printf("Not stable\n");
    else printf("Stable\n");


    for(i = 0;i < n-1;i++){
      printf("%c%d ",ccard2[i],cnum2[i]);
    }
    printf("%c%d\n",ccard2[n-1],cnum2[n-1]);
    if(hantei2 == 0)printf("Not stable\n");
    else printf("Stable\n");

    return 0;
}