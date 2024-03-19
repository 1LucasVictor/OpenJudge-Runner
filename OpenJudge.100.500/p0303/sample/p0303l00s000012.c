//2019.12.16
//s1270188 momoka murakami
//alds1_04d Allocation

#include<stdio.h>
#include<stdlib.h>

//prototype
int allocation(void);

//global
int w_n, *w, car_n, SUM=0;

int main(){
  int i;

  //input
  scanf("%d %d",&w_n,&car_n);
  w=(int *)malloc(sizeof(int)*w_n);
  for(i=0;i<w_n;i++){
    scanf("%d",&w[i]);
    SUM+=w[i];
  }
  
  //output
  printf("%d\n",allocation());
  
  free(w);
  return 0;
}

int allocation(void){
  int *car, allow;
  int i, j;
  
  car=(int *)malloc(sizeof(int)*car_n);

  allow=SUM/car_n;
  while(1){
    for(i=0;i<car_n;i++) car[i]=0;
    
    for(i=0,j=0;i<w_n;i++){

      if(car[j]+w[i]>allow){
	j++;
	if(j==car_n || car[j]+w[i]>allow) break;
      }
      
      car[j]+=w[i];
    }

    if(i==w_n) break;
    allow++;
  }


  // for(i=0;i<car_n;i++) printf("%d ",car[i]);
  free(car);
  return allow;
}

