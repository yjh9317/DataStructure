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

	// 버블 정렬
	for (int i = MAX - 1; i > 0; --i)
	{
		for (int j = 0; j < i ; ++j)
		{
			if (iArr[j] > iArr[j + 1])
			{
				swap(&iArr[j], &iArr[j + 1]);
			}
		}
		
	}


	for (int i = 0; i < MAX; ++i)
	{
		cout << iArr[i] << endl;
	}
}