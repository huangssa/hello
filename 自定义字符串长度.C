#include<stdio.h>
int my_strlen(char* arr)
{
	int a = 0;
	while (*arr != '\0')
	{
		a++;
		arr++;
	}
	return a;

}
int main()
{
	char arr[20] = { 0 };

	scanf("%s", arr);
	int len = my_strlen(arr);
	printf("%d", len);
