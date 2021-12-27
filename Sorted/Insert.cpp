#include <iostream>
#include <time.h>
using std::cout;
using std::endl;

#define MAX 10

int main()
{
	srand((unsigned int)time(NULL));

	int iArr[MAX];

	for (int i = 0; i < MAX; ++i)
	{
		iArr[i] = rand() % MAX;
	}

	// 삽입 정렬
	for (int i = 1; i < MAX; ++i)
	{
		int tmp = iArr[i];
		int j = i;
		while ((j > 0) && (iArr[j - 1] > tmp))
		{
			iArr[j] = iArr[j - 1];
			j = j - 1;
		}
		iArr[j] = tmp;
	}


	for (int i = 0; i < MAX; ++i)
	{
		cout << iArr[i] << endl;
	}
}
