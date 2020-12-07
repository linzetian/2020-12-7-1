//通过reverse函数，对子字符串进行倒序
#include<stdio.h>
#include<string.h>
#include<assert.h>
 void reverse(char* str)
{
	 assert(str);//断言
	 int len = strlen(str);
	 char* left = str;
	 char* right = str + len - 1;

	 while (left < right)
	 {
		 char tep = *left;
		 *left = *right;
		 *right = tep;
		 left++;
		 right--;
	 }
 }
int main()
{
	char arr[266] = {0};
	scanf("%s",arr);//假设输入bcdef
	reverse(arr);
	printf("%s",arr);
	return 0;
}