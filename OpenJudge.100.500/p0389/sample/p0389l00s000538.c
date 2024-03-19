#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_LIMIT 201
#define COUNT_SIZE 100
#define DATA_SET_LIMIT 10

typedef struct {
	char str[STRING_LIMIT];
	int strSize;
	int count;
	int* position;
} DataSet;

int InputDataSet(DataSet* dataSet);
void ShiftingDataSet(DataSet* dataSet, int length);
void FreeDataSet(DataSet* dataSet, int length);

int main(void) {
	DataSet dataSet[DATA_SET_LIMIT];
	int length;
	int idx;
	int size = 0;

	for (length = 0; length < DATA_SET_LIMIT; length++) {
		int res = InputDataSet(&dataSet[length]);

		if (res == -1) {
			length--;
			continue;
		}

		if (res == 1) {
			break;
		}
	}

	ShiftingDataSet(dataSet, length);

	for (idx = 0; idx < length; idx++) {
		size += printf("%s\n", dataSet[idx].str);
	}

	FreeDataSet(dataSet, length);
}

int InputDataSet(DataSet* dataSet) {

	int idx;
	char buffer[STRING_LIMIT];
	char* tmpBuffer = buffer;
	int size = 0;
	int count = 0;
	int* position;

	memset(buffer, '\0', STRING_LIMIT);
	scanf(" %[^\n]s", buffer);
	for (size = 0; *(tmpBuffer + size) != '\0'; size++);
	if (size == 1 && buffer[0] == '-') {
		return 1;
	}

	scanf("%d", &count);
	if (count < 1 || count > COUNT_SIZE) {
		return -1;
	}

	position = (int*)malloc(sizeof(int) * count);
	for (idx = 0; idx < count; idx++) {
		int tmp = 0;
		scanf("%d", &tmp);
		if (tmp < 1 || tmp > size) {
			return -1;
		}
		*(position + idx) = tmp;
	}

	memcpy(dataSet->str, buffer, STRING_LIMIT);
	dataSet->strSize = size;
	dataSet->count = count;
	dataSet->position = position;

	return 0;
}

void ShiftingDataSet(DataSet* dataSet, int length) {
	int idx;
	int idc;
	int idp;

	for (idx = 0; idx < length; idx++) {
		DataSet* set = dataSet + idx;
		int strSize = set->strSize;
		char tmpArr[strSize];
		int count = set->count;
		int* position = set->position;

		for (idc = 0; idc < count; idc++) {
			int pos = *(position + idc);
			memset(tmpArr, '\0', strSize);

			for (idp = 0; idp < pos; idp++) {
				tmpArr[idp] = set->str[idp];
			}

			for (idp = 0; idp < strSize - pos; idp++) {
				set->str[idp] = set->str[pos + idp];
			}

			int startIdx = strSize - pos;
			for (idp = startIdx; idp < strSize; idp++) {
				set->str[idp] = tmpArr[idp - startIdx];
			}
		}
	}
}

void FreeDataSet(DataSet* dataSet, int length) {
	int idx;

	for (idx = 0; idx < length; idx++) {
		DataSet* set = dataSet + idx;
		free(set->position);
	}
}
