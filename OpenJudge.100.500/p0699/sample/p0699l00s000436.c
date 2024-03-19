#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>



/*以下便利なマクロを定義する。*/

#define if_forall(i, min, max, prop)\
	bool if_forall_condition=1;\
\
	for(i=min; i<=max; i=i+1)\
	{\
		if(!(prop))\
		{\
			if_forall_condition=0;\
			break;\
		}\
	}\
\
	if(if_forall_condition==1)\



#define if_exists(i, min, max, prop)\
	bool if_exists_condition=0;\
\
	for(i=min; i<=max; i=i+1)\
	{\
		if(prop)\
		{\
			if_exists_condition=1;\
			break;\
		}\
	}\
\
	if(if_exists_condition==1)\











/*以下便利な関数を定義する。*/



void ini_int(int a[], int num)
{
	int i=0;

	for(i=0; i<=num; i=i+1)
	{
		a[i]=0;
	}

}



void ini_char(char array[], int num)
{
	int i=0;

	for(i=0; i<=num; i=i+1)
	{
		array[i]='\0';
	}

}



int powi(int base, unsigned int exponent)
{
	int answer=1;

	answer=(int)pow((double)base, (double)exponent);

	return answer;
}



void sort_asc_int(int a[], int min, int max)
{
	int i, j;
	int dumy;

	for(i=min; i<=max; i=i+1)
	{
		for(j=i+1; j<=max; j=j+1)
		{
			if(a[i]>a[j])
			{
				dumy=a[i];
				a[i]=a[j];
				a[j]=dumy;
			}
		}
	}
}



void sort_des_int(int a[], int min, int max)
{
	int i, j;
	int dumy;

	for(i=min; i<=max; i=i+1)
	{
		for(j=i+1; j<=max; j=j+1)
		{
			if(a[i]<a[j])
			{
				dumy=a[i];
				a[i]=a[j];
				a[j]=dumy;
			}
		}
	}
}



int max_int(int a[], int min, int max)
{
	int i;
	int answer;

	answer=a[min];

	for(i=min+1; i<=max; i=i+1)
	{
		if(answer<a[i])
		{
			answer=a[i];
		}
	}

	return answer;
}



int min_int(int a[], int min, int max)
{
	int i;
	int answer;

	answer=a[min];

	for(i=min+1; i<=max; i=i+1)
	{
		if(answer>a[i])
		{
			answer=a[i];
		}
	}

	return answer;
}



bool containelement_int(int array[], int min, int max, int element)
{
	int i;
	bool answer=0;

	if_exists(i, min, max, array[i]==element)
	{
		answer=1;
	}

	return answer;
}



int count_differentelement_int(int array[], int min, int max)
{
	int i=min;
	int pickup[max];
	ini_int(pickup, max);
	int answer=0;

	for(i=min; i<=max; i=i+1)
	{
		if(containelement_int(pickup, 0, answer-1, array[i])==0)
		{
			pickup[answer]=array[i];
			answer=answer+1;
		}
	}

	return answer;
}



int count_equalelement_int(int array[], int min, int max, int element)
{
	int i;
	int answer=0;

	for(i=min; i<=max; i=i+1)
	{
		if(array[i]==element)
		{
			answer=answer+1;
		}
	}

	return answer;
}











int main()
{

	int A[4];
	A[0]=0;
	scanf("%d %d %d", &A[1], &A[2], &A[3]);
	sort_asc_int(A, 1, 3);
	if(A[1]==5 && A[2]==5 && A[3]==7)
	{
		printf("%s\n", "YES");
	}
	else
	{
		printf("%s\n", "NO");
	}

	return 0;

}
