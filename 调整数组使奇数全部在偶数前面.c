#include<stdio.h>
void cort(int a[], int c)
{
	int left = a[0];
	int right = c - 1;
	while (left < right)
	{

		while (left < right && a[left] % 2 == 1)
		{
			left++;
		}
		while (left < right && a[right] % 2 == 0)
		{
			right--;
		}

		int tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;


	}
}

void print(int b[], int c)
{
	for (int i = 0; i <= c - 1; i++)
	{
		printf("%d ", b[i]);
	}
}
int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(a) / sizeof(a[0]);
	cort(a, sz);
	print(a, sz);

	return 0;
}