   #include<stdio.h>
     
    int main(void){
    int A,B;
    int i;
    scanf("%d %d",&A,&B);
    for(i = 0;i<16;i++){
    	if(i%2 == 0)
          A = A-1;
      	else
          B = B-1;
    }
    if(A > 0 || B > 0) printf(":(");
    else printf("Yay!");
     return 0;
    }