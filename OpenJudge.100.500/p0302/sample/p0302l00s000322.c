#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COMMAND_NUM 1000000
#define MAX_STR_LEN     12

#define OFF             0
#define ON              1

typedef enum ETAG_STR_TYPE
{
	STR_TYPE_A=0,	/* String A */
	STR_TYPE_C,		/* String C */
	STR_TYPE_G,		/* String G */
	STR_TYPE_T,		/* String T */
	STR_TYPE_COUNT
} STR_TYPE;

typedef struct ST_DICTIONARY_TREE DictionaryTree_t;

typedef struct ST_DICTIONARY_TREE{
	DictionaryTree_t *str[STR_TYPE_COUNT];		/* String Type Pointer */
	int    exist_flag;							/* Data Inserted Flag */
} DICTIONARY_TREE;

static void initInsertData(DictionaryTree_t **ppt_dictionary);				/* Initilize Insert Data */
static void InsertProcess(DictionaryTree_t **ppt_dictionary, char *str);	/* Insert Process in Dictionary */
static void FindProcess(DictionaryTree_t **ppt_dictionary, char *str);		/* Find Process for Dictionary */
static void setInsertPointer(DictionaryTree_t **ppt_dictionary);			/* Make Insert Data */
static void AllFreeProcess(DictionaryTree_t **ppt_dictionary);				/* free malloc data and free 1 th String */
static void FreeProcess_2(DictionaryTree_t **ppt_dictionary);				/* free 2 th String  */
static void FreeProcess_3(DictionaryTree_t **ppt_dictionary);				/* free 3 th String  */
static void FreeProcess_4(DictionaryTree_t **ppt_dictionary);				/* free 4 th String  */
static void FreeProcess_5(DictionaryTree_t **ppt_dictionary);				/* free 5 th String  */
static void FreeProcess_6(DictionaryTree_t **ppt_dictionary);				/* free 6 th String  */
static void FreeProcess_7(DictionaryTree_t **ppt_dictionary);				/* free 7 th String  */
static void FreeProcess_8(DictionaryTree_t **ppt_dictionary);				/* free 8 th String  */
static void FreeProcess_9(DictionaryTree_t **ppt_dictionary);				/* free 9 th String  */
static void FreeProcess_10(DictionaryTree_t **ppt_dictionary);				/* free 10 th String  */
static void FreeProcess_11(DictionaryTree_t **ppt_dictionary);				/* free 11 th String  */

/***********************************************************************************
 ++module <main>
 ++outline
	main function
 ++arguments
	<>			<>					[]
 ++supp
 	<return>
 	  nothing
 ++end_module
************************************************************************************/
int main(void)
{
	int command_num;
	char command[8];								/* command name */
	char str[MAX_STR_LEN] = {0};					/* string data */
	int loop = 0;
	DictionaryTree_t top_contents;
	DictionaryTree_t *dictionary = &top_contents;
	
	initInsertData(&dictionary);					/* set Null Pointer with Data */
	scanf("%d", &command_num);						/* get command num */
	
	if(command_num <= MAX_COMMAND_NUM)				/* If command num is Specified value */
	{
		while(((scanf("%s %s", command, str)) != EOF) && (loop < command_num))
		{
			if(command[0] == 'i')					/* Insert Porcess */
			{
				InsertProcess(&dictionary, str);
			}
			else if(command[0] == 'f')				/* Find Process */
			{
				FindProcess(&dictionary, str);
			}
			else
			{
				/* Error Command */
			}
			dictionary = &top_contents;				 /* back to Dictionary top */
			loop++;
			
			memset(str, '\0', MAX_STR_LEN);
		}
	}
	else
	{
		/* error command num */
	}
	
	AllFreeProcess(&dictionary);					/* free malloc data */

    return 0;
}


/***********************************************************************************
 ++module <initInsertData>
 ++outline
	Initilize Insert Data
 ++arguments
	<DictionaryTree_t>	<**ppt_dictionary>	[Dictionary Data]
 ++supp
 	<return>
 	  nothing
 ++end_module
************************************************************************************/
static void initInsertData(DictionaryTree_t **ppt_dictionary)
{
	int loop;
	for(loop= 0; loop < STR_TYPE_COUNT; loop++)
	{
		(*ppt_dictionary)->str[loop] = NULL;	/* Null pointer set */
	}
	(*ppt_dictionary)->exist_flag = OFF;		/* set No Data */
}


/***********************************************************************************
 ++module <InsertProcess>
 ++outline
	Insert Process in Dictionary
 ++arguments
	<DictionaryTree_t>	<**ppt_dictionary>	[Dictionary Data]
	<char>				<*str>				[Insert Strings]
 ++supp
 	<return>
 	  nothing
 ++end_module
************************************************************************************/
static void InsertProcess(DictionaryTree_t **ppt_dictionary, char *str)
{
	int str_point = 0;
	int str_type;
	DictionaryTree_t *pt_dictionary_point = (*ppt_dictionary);
	
	while(str_point <= MAX_STR_LEN)
	{
		if(pt_dictionary_point == NULL)					/* this line is all not True */
		{
			setInsertPointer(&pt_dictionary_point);
			continue;
		}
		else if(str[str_point] == '\0')					/* If End Signature */
		{
			pt_dictionary_point->exist_flag = ON;		/* exist flag ON */
			break;										/* insert finish */
		}
		else
		{
			if(str[str_point] == 'A')			/* If Insert Type A */
			{
				str_type = STR_TYPE_A;			/* set Insert Type */
			}
			else if(str[str_point] == 'C')		/* If Insert Type C */
			{
				str_type = STR_TYPE_C;			/* set Insert Type */
			}
			else if(str[str_point] == 'G')		/* If Insert Type G */
			{
				str_type = STR_TYPE_G;			/* set Insert Type */
			}
			else if(str[str_point] == 'T')		/* If Insert Type T */
			{
				str_type = STR_TYPE_T;			/* set Insert Type */
			}
			else
			{
				/* error input */
				break;
			}
			
			if(pt_dictionary_point->str[str_type] == NULL)					/* If No Data Dictionary Point */
			{
				setInsertPointer(&(pt_dictionary_point->str[str_type]));	/* Insert Dictionary Point */
			}
			else
			{
				/* nothing */
			}
			pt_dictionary_point = pt_dictionary_point->str[str_type];		/* move Dictionary point */
		}
		str_point++;
	}
}


/***********************************************************************************
 ++module <FindProcess>
 ++outline
	 Find Process for Dictionary
 ++arguments
	<DictionaryTree_t>	<**ppt_dictionary>	[Dictionary Data]
	<char>				<*str>				[Find Strings]
 ++supp
 	<return>
 	  nothing
 ++end_module
************************************************************************************/
static void FindProcess(DictionaryTree_t **ppt_dictionary, char *str)
{
	int str_point = 0;
	int find_flag = OFF;
	int str_type;
	DictionaryTree_t *pt_dictionary_point = (*ppt_dictionary);
	
	while(str_point <= MAX_STR_LEN)
	{
		if(pt_dictionary_point == NULL)						/* IF NULL Point */
		{
			/* Not Find Dicitionary Point */
			break;
		}
		else if(str[str_point] == '\0')						/* If End Signature */
		{
			if(pt_dictionary_point->exist_flag == ON)		/* If Exist Dicitionary Strings */
			{
				/* Find Dictionary Strings */
				find_flag = ON;
			}
			else
			{
				/* Not Exist Dicitionary Strings */
			}
			break;
		}
		else
		{
			if(str[str_point] == 'A')			/* If Find Type A */
			{
				str_type = STR_TYPE_A;			/* set Find Type */
			}
			else if(str[str_point] == 'C')		/* If Find Type C */
			{
				str_type = STR_TYPE_C;			/* set Find Type */
			}
			else if(str[str_point] == 'G')		/* If Find Type G */
			{
				str_type = STR_TYPE_G;			/* set Find Type */
			}
			else if(str[str_point] == 'T')		/* If Find Type T */
			{
				str_type = STR_TYPE_T;			/* set Find Type */
			}
			else
			{
				/* error input */
				break;
			}
			
			if(pt_dictionary_point->str[str_type] == NULL)				/* No Data Dictionary Point */
			{
				/* Not Find Dicitionary Point */
				break;
			}
			else
			{
				pt_dictionary_point = pt_dictionary_point->str[str_type];		/* move Dictionary point */
			}
		}
		str_point++;
	}
	if(find_flag == ON)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
}


/***********************************************************************************
 ++module <setInsertPointer>
 ++outline
	 Make Insert Data
 ++arguments
	<DictionaryTree_t>	<**ppt_dictionary>	[Dictionary Data]
 ++supp
 	<return>
 	  nothing
 ++end_module
************************************************************************************/
static void setInsertPointer(DictionaryTree_t **ppt_dictionary)
{
	DictionaryTree_t *pt_dictionary_point;
	
	/* make Insert pointer */
	pt_dictionary_point = (DictionaryTree_t *)malloc(sizeof(DictionaryTree_t));
	initInsertData(&pt_dictionary_point);			/* set Null Data */
	(*ppt_dictionary) = pt_dictionary_point;		/* set Insert Pointer */
}


/***********************************************************************************
 ++module <AllFreeProcess>
 ++outline
	 free  malloc data and free 1 th String
 ++arguments
	<DictionaryTree_t>	<**ppt_dictionary>	[Dictionary Data]
 ++supp
 	<return>
 	  nothing
 ++end_module
************************************************************************************/
static void AllFreeProcess(DictionaryTree_t **ppt_dictionary)
{
	DictionaryTree_t *pt_temp = (*ppt_dictionary);		/* Calcurate Pointer */
	int loop;
	
	if(pt_temp != NULL)
	{
		for(loop = 0; loop < STR_TYPE_COUNT; loop++)
		{
			if(pt_temp->str[loop] != NULL)				/* If Data Exist */
			{
				pt_temp = pt_temp->str[loop];			/* Move Next String */
				FreeProcess_2(&pt_temp);				/* Free Process Next String */
				free(pt_temp);							/* Free Now Pointer  */
				pt_temp = (*ppt_dictionary);			/* re-set pointer */
			}
			else
			{
				/* Nothing */
			}
		}
	}
	else
	{
		/* Nothing */
	}
}


/***********************************************************************************
 ++module <FreeProcess_2>
 ++outline
	free 2 th String
 ++arguments
	<DictionaryTree_t>	<**ppt_dictionary>	[Dictionary Data]
 ++supp
 	<return>
 	  nothing
 ++end_module
************************************************************************************/
static void FreeProcess_2(DictionaryTree_t **ppt_dictionary)
{
	DictionaryTree_t *pt_temp = (*ppt_dictionary);		/* Calcurate Pointer */
	int loop;
	
	for(loop = 0; loop < STR_TYPE_COUNT; loop++)
	{
		if(pt_temp->str[loop] != NULL)					/* If Data Exist */
		{
			pt_temp = pt_temp->str[loop];				/* Move Next String */
			FreeProcess_3(&pt_temp);					/* Free Process Next String */
			free(pt_temp);								/* Free Now Pointer  */
			pt_temp = (*ppt_dictionary);				/* re-set pointer */
		}
		else
		{
			/* Nothing */
		}
	}
}


/***********************************************************************************
 ++module <FreeProcess_3>
 ++outline
	free 3 th String
 ++arguments
	<DictionaryTree_t>	<**ppt_dictionary>	[Dictionary Data]
 ++supp
 	<return>
 	  nothing
 ++end_module
************************************************************************************/
static void FreeProcess_3(DictionaryTree_t **ppt_dictionary)
{
	DictionaryTree_t *pt_temp = (*ppt_dictionary);		/* Calcurate Pointer */
	int loop;
	
	for(loop = 0; loop < STR_TYPE_COUNT; loop++)
	{
		if(pt_temp->str[loop] != NULL)					/* If Data Exist */
		{
			pt_temp = pt_temp->str[loop];				/* Move Next String */
			FreeProcess_4(&pt_temp);					/* Free Process Next String */
			free(pt_temp);								/* Free Now Pointer  */
			pt_temp = (*ppt_dictionary);				/* re-set pointer */
		}
		else
		{
			/* Nothing */
		}
	}
}


/***********************************************************************************
 ++module <FreeProcess_4>
 ++outline
	free 4 th String
 ++arguments
	<DictionaryTree_t>	<**ppt_dictionary>	[Dictionary Data]
 ++supp
 	<return>
 	  nothing
 ++end_module
************************************************************************************/
static void FreeProcess_4(DictionaryTree_t **ppt_dictionary)
{
	DictionaryTree_t *pt_temp = (*ppt_dictionary);		/* Calcurate Pointer */
	int loop;
	
	for(loop = 0; loop < STR_TYPE_COUNT; loop++)
	{
		if(pt_temp->str[loop] != NULL)					/* If Data Exist */
		{
			pt_temp = pt_temp->str[loop];				/* Move Next String */
			FreeProcess_5(&pt_temp);					/* Free Process Next String */
			free(pt_temp);								/* Free Now Pointer  */
			pt_temp = (*ppt_dictionary);				/* re-set pointer */
		}
		else
		{
			/* Nothing */
		}
	}
}


/***********************************************************************************
 ++module <FreeProcess_5>
 ++outline
	free 5 th String
 ++arguments
	<DictionaryTree_t>	<**ppt_dictionary>	[Dictionary Data]
 ++supp
 	<return>
 	  nothing
 ++end_module
************************************************************************************/
static void FreeProcess_5(DictionaryTree_t **ppt_dictionary)
{
	DictionaryTree_t *pt_temp = (*ppt_dictionary);		/* Calcurate Pointer */
	int loop;
	
	for(loop = 0; loop < STR_TYPE_COUNT; loop++)
	{
		if(pt_temp->str[loop] != NULL)					/* If Data Exist */
		{
			pt_temp = pt_temp->str[loop];				/* Move Next String */
			FreeProcess_6(&pt_temp);					/* Free Process Next String */
			free(pt_temp);								/* Free Now Pointer  */
			pt_temp = (*ppt_dictionary);				/* re-set pointer */
		}
		else
		{
			/* Nothing */
		}
	}
}


/***********************************************************************************
 ++module <FreeProcess_6>
 ++outline
	free 6 th String
 ++arguments
	<DictionaryTree_t>	<**ppt_dictionary>	[Dictionary Data]
 ++supp
 	<return>
 	  nothing
 ++end_module
************************************************************************************/
static void FreeProcess_6(DictionaryTree_t **ppt_dictionary)
{
	DictionaryTree_t *pt_temp = (*ppt_dictionary);		/* Calcurate Pointer */
	int loop;
	
	for(loop = 0; loop < STR_TYPE_COUNT; loop++)
	{
		if(pt_temp->str[loop] != NULL)					/* If Data Exist */
		{
			pt_temp = pt_temp->str[loop];				/* Move Next String */
			FreeProcess_7(&pt_temp);					/* Free Process Next String */
			free(pt_temp);								/* Free Now Pointer  */
			pt_temp = (*ppt_dictionary);				/* re-set pointer */
		}
		else
		{
			/* Nothing */
		}
	}
}


/***********************************************************************************
 ++module <FreeProcess_7>
 ++outline
	free 7 th String
 ++arguments
	<DictionaryTree_t>	<**ppt_dictionary>	[Dictionary Data]
 ++supp
 	<return>
 	  nothing
 ++end_module
************************************************************************************/
static void FreeProcess_7(DictionaryTree_t **ppt_dictionary)
{
	DictionaryTree_t *pt_temp = (*ppt_dictionary);		/* Calcurate Pointer */
	int loop;
	
	for(loop = 0; loop < STR_TYPE_COUNT; loop++)
	{
		if(pt_temp->str[loop] != NULL)					/* If Data Exist */
		{
			pt_temp = pt_temp->str[loop];				/* Move Next String */
			FreeProcess_8(&pt_temp);					/* Free Process Next String */
			free(pt_temp);								/* Free Now Pointer  */
			pt_temp = (*ppt_dictionary);				/* re-set pointer */
		}
		else
		{
			/* Nothing */
		}
	}
}


/***********************************************************************************
 ++module <FreeProcess_8>
 ++outline
	free 8 th String
 ++arguments
	<DictionaryTree_t>	<**ppt_dictionary>	[Dictionary Data]
 ++supp
 	<return>
 	  nothing
 ++end_module
************************************************************************************/
static void FreeProcess_8(DictionaryTree_t **ppt_dictionary)
{
	DictionaryTree_t *pt_temp = (*ppt_dictionary);		/* Calcurate Pointer */
	int loop;
	
	for(loop = 0; loop < STR_TYPE_COUNT; loop++)
	{
		if(pt_temp->str[loop] != NULL)					/* If Data Exist */
		{
			pt_temp = pt_temp->str[loop];				/* Move Next String */
			FreeProcess_9(&pt_temp);					/* Free Process Next String */
			free(pt_temp);								/* Free Now Pointer  */
			pt_temp = (*ppt_dictionary);				/* re-set pointer */
		}
		else
		{
			/* Nothing */
		}
	}
}


/***********************************************************************************
 ++module <FreeProcess_9>
 ++outline
	free 9 th String
 ++arguments
	<DictionaryTree_t>	<**ppt_dictionary>	[Dictionary Data]
 ++supp
 	<return>
 	  nothing
 ++end_module
************************************************************************************/
static void FreeProcess_9(DictionaryTree_t **ppt_dictionary)
{
	DictionaryTree_t *pt_temp = (*ppt_dictionary);		/* Calcurate Pointer */
	int loop;
	
	for(loop = 0; loop < STR_TYPE_COUNT; loop++)
	{
		if(pt_temp->str[loop] != NULL)					/* If Data Exist */
		{
			pt_temp = pt_temp->str[loop];				/* Move Next String */
			FreeProcess_10(&pt_temp);					/* Free Process Next String */
			free(pt_temp);								/* Free Now Pointer  */
			pt_temp = (*ppt_dictionary);				/* re-set pointer */
		}
		else
		{
			/* Nothing */
		}
	}
}


/***********************************************************************************
 ++module <FreeProcess_10>
 ++outline
	free 10 th String
 ++arguments
	<DictionaryTree_t>	<**ppt_dictionary>	[Dictionary Data]
 ++supp
 	<return>
 	  nothing
 ++end_module
************************************************************************************/
static void FreeProcess_10(DictionaryTree_t **ppt_dictionary)
{
	DictionaryTree_t *pt_temp = (*ppt_dictionary);		/* Calcurate Pointer */
	int loop;
	
	for(loop = 0; loop < STR_TYPE_COUNT; loop++)
	{
		if(pt_temp->str[loop] != NULL)					/* If Data Exist */
		{
			pt_temp = pt_temp->str[loop];				/* Move Next String */
			FreeProcess_11(&pt_temp);					/* Free Process Next String */
			free(pt_temp);								/* Free Now Pointer  */
			pt_temp = (*ppt_dictionary);				/* re-set pointer */
		}
		else
		{
			/* Nothing */
		}
	}
}


/***********************************************************************************
 ++module <FreeProcess_11>
 ++outline
	free 11 th String
 ++arguments
	<DictionaryTree_t>	<**ppt_dictionary>	[Dictionary Data]
 ++supp
 	<return>
 	  nothing
 ++end_module
************************************************************************************/
static void FreeProcess_11(DictionaryTree_t **ppt_dictionary)
{
	DictionaryTree_t *pt_temp = (*ppt_dictionary);		/* Calcurate Pointer */
	int loop;
	
	for(loop = 0; loop < STR_TYPE_COUNT; loop++)
	{
		if(pt_temp->str[loop] != NULL)					/* If Data Exist */
		{
			pt_temp = pt_temp->str[loop];				/* Move Next String */
			free(pt_temp);								/* Free Now Pointer  */
			pt_temp = (*ppt_dictionary);				/* re-set pointer */
		}
		else
		{
			/* Nothing */
		}
	}
}

