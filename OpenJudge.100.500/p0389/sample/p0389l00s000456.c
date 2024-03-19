#include <stdio.h>
#include <string.h>

int main()
{
  char input_st[200];
  char output_st[200];
  int shuffle_m, shuffle_h;
  int shuffle_sum = 0;
  int length;
  int counter_i, counter_j, counter_k;

  for(counter_i = 0 ; counter_i < 10 ; counter_i++)
  {
    scanf("%s", input_st);
    if(input_st[0] == '-')
      break;

    scanf("%d", &shuffle_m);
    for(counter_j = 0 ; counter_j < shuffle_m ; counter_j++)
    {
      scanf("%d", &shuffle_h);
      shuffle_sum += shuffle_h;
    }

    length = strlen(input_st);
    shuffle_sum %= length;

    for(counter_j = shuffle_sum, counter_k = 0 ;
      counter_j < length ; counter_j++, counter_k++)
    {
      output_st[counter_k] = input_st[counter_j];
    }
    for(counter_j = 0 ; counter_j < shuffle_sum
      ; counter_j++, counter_k++)
    {
      output_st[counter_k] = input_st[counter_j];
    }
    output_st[counter_k] = '\0';

    printf("%s\n", output_st);
  }
}

