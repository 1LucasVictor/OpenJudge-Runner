#include <stdio.h>

int main(void)
{
  int a[10], b[10], c[10], d[10];
  int n[50], cou[50];
  int i, j, k, s, top, all;
  int count = 0;
  int index = 0;

  do{
    if((scanf("%d", &n[index])) == EOF)
      break;
    else
      index++;
  }while((1 <= index) && (index <= 50));


 for(i = 0; i < 10; i++){
   a[i] = b[i] = c[i] = d[i] = i;
 }

 for(top = 0; top < index; top++){
   for(i = 0; i < 10; i++){
     for(j = 0; j < 10; j++){
       for(k = 0; k < 10; k++){
	 for(s = 0; s < 10; s++){

	  all = a[i] + b[j] + c[k] + d[s];
    
	  if(n[top] == all)
	    count++;
	 }
       }
     }
   }
   cou[top] = count;
   count = 0;
 }

  for(i = 0; i < index; i++)
  printf("%d\n", cou[i]);

  return 0;
}