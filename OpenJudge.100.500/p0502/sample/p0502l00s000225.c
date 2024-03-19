#include <stdio.h>
#include <stdlib.h>


int main()
{
	int arrayLength, buffer;
	scanf("%d", &arrayLength);

	int *intArray = (int *)calloc(arrayLength, sizeof(int));

	for (int i = 0; i < arrayLength; i++)
	{		
		scanf("%d", &buffer);
		intArray[i] = buffer;
	}

	for (int i = 0; i < arrayLength; i++)
	{
		if (intArray[i] % 2 == 0)
		{
			if (intArray[i] % 5 == 0)
			{
				continue;
			}
			else if (intArray[i] % 3 == 0)
			{
				continue;
			}
			else
			{
				printf("DENIED \n");
				return 0;
			}	
		}
	}
	printf("APPROVED \n");

	return 0;
}