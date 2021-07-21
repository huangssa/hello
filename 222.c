#include<stdio.h>
#include<string.h>
#include<assert.h>
void my_strcpy(char *str1, const char *str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);

	while (*str2)
	{
		*str1++ = *str2++;


	}
	*str1 = *str2;
}
int main()
{
	char arr1[] = "asdfghhj";
	char arr2[] = "asd";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);

	return 0;
}