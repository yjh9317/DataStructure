#include <iostream>
#include <time.h>
using std::cout;
using std::endl;


#define MAX 10

void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


int main()
{
	srand((unsigned int)time(NULL));
	
	int iArr[MAX];

	for (int i = 0; i < MAX; ++i)
	{
		iArr[i] = rand() % MAX;
	}
	
	// 선택 정렬
	for (int i = 0; i < MAX - 1; ++i)
	{
		int min = i;
		for (int j = i + 1; j < MAX; ++j)
		{
			if (iArr[j] < iArr[min])
			{
				min = j;
			}
		}
		
		swap(&iArr[i], &iArr[min]);
	}


	for (int i = 0; i < MAX; ++i)
	{
		cout << iArr[i] << endl;
	}
}