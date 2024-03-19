#include <stdio.h>
#include <stdlib.h>

void InsSort(int num[ ], int n) ;
void ShowData(int num[ ], int n);
void main(void);

void InsSort(int num[ ], int n)
{
    int i, j, temp;

    for (i = 1; i < n; i++) {      
        temp = num[i];             
        for (j = i; j > 0 && num[j-1] > temp; j--) 
            num[j] = num[j -1];                    

        num[j] = temp;             
        ShowData(num, n);   
    }
}

  /* n 個のデータを表示 */
void ShowData(int num[ ], int n)
{
    while (n--)
        printf("%d ", *num++);
    printf("\n");
}

void main(void)
{
  int NUM_DATA,i;
  int *num;
    
  scanf("%d",&NUM_DATA);

  num = (int *)malloc(sizeof(int) * NUM_DATA);
  
  for(i = 0; i < NUM_DATA; i++){
    scanf("%d",&num[i]);
  }

  

  for(i = 0;i<NUM_DATA;i++){
    printf("%d",num[i]);
    if(i == NUM_DATA-1) break;
    printf(" ");
  }
  printf("\n");
      
    InsSort(num, NUM_DATA);	
}

