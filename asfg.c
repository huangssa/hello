#include<stdio.h>
int my_strcmp(char* arr, char *arr2)
{
	while (*arr == *arr2)
	{
		if (*arr == '\0')
		{
			return 0;
		}
		arr++;
		arr2++;
	}
	if (*arr > *arr2)
	{
		return 1;
	}
	else if (*arr < *arr2)
	{
		return -1;
	}

}
int main()
{
	char arr1[] = "asdfg";
	char arr2[] = "asdfgh";
	int ret = my_strcmp(arr1, arr2);
	printf("%d", ret);
	return 0;
}