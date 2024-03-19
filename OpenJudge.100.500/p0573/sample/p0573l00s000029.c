/*
	長さ4の英大文字からなる文字列Sが与えられます。
	Sがちょうど２種類の文字からなり、かつ現れる各文字は
	ちょうど２回ずつ現れているかどうか判定してください。
	<制約>
	・Sの長さは4である。
	・Sは英大文字からなる。
	
	例：ASSA -> YES   STOP -> No  EEEE -> No
	
	URL:https://atcoder.jp/contests/abc132/tasks/abc132_a
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define S_LEN (4)

static bool is_upper(char* array, int n);
static int appear_char_count(char* array, int n);
static void swap(char* a, char* b);
static void bubble_sort(char* array, int n);

int main(void)
{
	bool result = true;
	char buf[S_LEN];
	
	scanf("%s", buf);
	
	if(strlen(buf) != 4)
	{
		printf("No");
		return 0;
	}
	
	bubble_sort(buf, strlen(buf));
	
	if(!is_upper(buf, strlen(buf)))
	{
		printf("No");
		return 0;
	}

	if(appear_char_count(buf, strlen(buf)) != 2)
	{
		printf("No");
		return 0;
	}

	printf("Yes");

	return 0;
}

static bool is_upper(char* array, int n)
{
	for(int i = 0; i < n/2; i += 2)
	{
		if(!isupper(array[i+0]) || !isupper(array[i+1]))
		{
			return false;
		}
	}	
	return true;
}

static int appear_char_count(char* array, int n)
{
	int cnt = 1;
	char ch = array[0];

	for(int i = 1; i < n; i++)
	{
		if(ch != array[i])
		{
			cnt++;
		}
		ch = array[i];
	}
	return cnt;
}

static void swap(char* a, char* b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

static void bubble_sort(char* array, int n)
{
        for(int sorted_i = 0; sorted_i < n-1; sorted_i++)
        {
                for(int j = n-1; j > sorted_i; j--)
                {
                        if(array[j-1] > array[j])
                        {
                                swap(&array[j-1], &array[j]);
                        }       
                }
        }
}

