#include<iostream>

void QuickSort(int* arr,int cnt)
{
	if (cnt < 2)
		return;
	int iPivot = arr[cnt - 1];

	int L = 0;
	int R = cnt - 2;

	while (1) {

		while ((arr[L] < iPivot) && L < R) L++;
		while ((arr[R] > iPivot) && L < R) R--;

		if (L == R)
		{
			break;
		}
		else
		{
			int tmp = arr[L];
			arr[L] = arr[R];
			arr[R] = tmp;
		}
	}

	if (arr[L] > iPivot)
	{
		int tmp = arr[L];
		arr[L] = iPivot;
		arr[cnt - 1] = tmp;

		QuickSort(arr, L);
	}
	else
	{
		QuickSort(arr, L + 1);
	}

	QuickSort(arr + L + 1, cnt - (L + 1));
}

int main()
{
	int arr[10] = { 10,5,9,8,6,1,3,4,2,7 };

	QuickSort(arr, 10);

	for (int i = 0; i < 10; ++i)
	{
		printf("arr[%d] = %d\n",i, arr[i]);
	}
}