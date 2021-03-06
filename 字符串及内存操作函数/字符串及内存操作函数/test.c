#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>


//strlen函数
//size_t strlen(const char* str)
//1.字符串以'\0'作为结束标志，strlen函数返回的是字符串'\0'前出现的字符个数(不包括'\0')
//2.参数指向的字符串必须以'\0'结束
//3.注意函数的返回类型是size_t，是无符号的(易错)

//int MyStrlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//
//
//	//if (*str == '\0')
//	//	return 0;
//	//else
//	//{
//	//	return 1 + MyStrlen(str + 1);
//	//}
//
//
//	/*char* start = str;
//	while (*str++)
//	{
//		;
//	}
//	return str - start - 1;*/
//}
//int main()
//{
//	char* p = "hello world";
//	//int ret = strlen(p);
//	int ret = MyStrlen(p);
//	printf("%d\n", ret);
//	//const char* str1 = "abcdef";
//	//const char* str2 = "bbb";
//	//if (strlen(str2) - strlen(str1)>0) 
//	//{ 
//	//	printf("str2>str1\n");
//	//}
//	//else  
//	//{ 
//	//	printf("srt1>str2\n");
//	//}
//	return 0;
//}





//strcpy函数
//char* strcpy(char * destination, const char * source )
//                  目标字符串           源字符串
//1.源字符串以'\0'作为结束标志
//2.拷贝事会将源字符串中的'\0'也拷贝到目标字符串
//3.目标空间必须足够大，以确保能够存放源字符串
//4.目标空间必须可变(不能用const修饰目标字符串)


//char* MyStrcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello world";
//	//strcpy(arr1, arr2);
//	MyStrcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//strcat函数(字符串追加函数)
//char* strcat ( char* destination, const char* source )
//                    目标字符串      追加(源)字符串
//1.追加(源)字符串必须以'\0'结束
//2.目标空间必须足够大，能够追加下源字符串
//3.目标空间必须可修改
//4.不能够自己给自己追加



//char* MyStrcat(char* dest, const char* src)
//{
//	char* start = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return start;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	MyStrcat(arr1, arr2);
//	//strcat(arr1, arr2);
//	//strcat(arr1, arr1);      strcat不能自己给自己追加
//	printf("%s", arr1);
//	//return 0;
//	return 0;
//}



//strcmp函数(字符串比较函数)
//int strcmp ( const char * str1, const char * str2 )
//                 字符串一            字符串二
//标准规定：
//第一个字符串大于第二个字符串，则返回大于0的数
//第一个字符串等于第二个字符串，则返回0
//第一个字符串小于第二个字符串，则返回小于0的数


//int MyStrcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (1)
//	{
//		if (*str1 != *str2)
//			return *str1 - *str2;
//		if (*str1 || *str2 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//}
//int main()
//{
//	char arr[] = "hello world";
//	//int ret = strcmp(arr, "hello");
//	int ret = MyStrcmp(arr, "hello world");
//	if (ret > 0)
//	{
//		printf("第一个字符串大\n");
//	}
//	else if (ret < 0)
//	{
//		printf("第二个字符串大\n");
//	}
//	else
//		printf("一样大\n");
//	//if (strcmp(arr, "hello world") == 0)
//	//{
//	//	printf("一样大\n");
//	//}
//	return 0;
//}



//strncpy函数
//char * strncat ( char* destination, const char* source, size_t num )
//                     目标字符串          源字符串        拷贝的数目
//1.拷贝num个字符从源字符串到目标字符串
//2.如果源字符串的数目小于num，则拷贝完源字符串后，在目标字符串后追加0，直到拷贝num个



//char* MyStrncpy(char* str1, const char* str2, size_t num)
//{
//	char* start = str1;
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (num)
//	{
//		if (*str2 != '\0')
//		{
//			*str1 = *str2;
//			num--;
//			str1++;
//			str2++;
//		}
//		else
//		{
//			*str1 = '\0';
//			num--;
//			str1++;
//		}
//	}
//	return start;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxxxxxx";
//	char arr2[] = "hello world";
//	//strncpy(arr1, arr2, 14);
//	MyStrncpy(arr1, arr2, 14);
//	printf("%s\n", arr1);
//	return 0;
//}




//strstr函数(在字符串中找字符串)
//char* strstr ( const char* str1, const char* str2)
//                   字符串一          字符串二


//char* MyStrstr(const char* str1, const char* str2)
//{
//	assert(str1); 
//	assert(str2);  
//	char *cp = (char*)str1; 
//	char *substr = (char *)str2; 
//	char *s1 = NULL;   
//	if (*str2 == '\0')   
//		return NULL;     
//	while (*cp)  
//	{
//		s1 = cp;  
//		substr = str2;   
//		while (*s1 && *substr && (*s1 == *substr)) 
//		{
//			s1++;  
//			substr++;
//		}   
//		if (*substr == '\0')  
//			return cp;  
//		cp++;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bcd";
//	//char* ret = strstr(arr1, arr2);
//	char* ret = MyStrstr(arr1, arr2);
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("找不到\n");
//	return 0;
//}



//strtok函数
//char* strtok ( char* str, const char* sep )
//1.sep参数是个字符串，定义了用作分隔符的字符集合
//2.第一个参数指向一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记
//3.strtok函数找到str中的下一个标记，并将其用\0结尾，返回一个指向这个标记的指针(注:strtok函数
//  会改变被操作的字符串，所以在使用strtok函数切分字符串一般都是切分临时拷贝的一份)
//4.strtok函数的第一个参数不为 NULL ，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置
//5.strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标记
//6.如果字符串中不存在更多的标记，则返回 NULL 指针
int main()
{
	char arr[] = "he,h.e!";
	char* str = strtok(arr, "!,");
	printf("%s\n", str);
	return 0;

	// /81class/test8_26/
}