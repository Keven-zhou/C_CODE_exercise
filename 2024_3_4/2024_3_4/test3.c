#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>

//int main() {
//    char a = '    ';
//    char c = '   ';
//    int ret = isspace(a);
//    int ret2 = isspace(c);
//    printf("%d %d", ret, ret2);
//
//
//    return 0;
//}

//int main() {
//
//	char arr[] = "I am A student!";
//	int i = 0;
//	while (arr[i]) {
//		if (isupper(arr[i])) //判断是否为小写字母
//		{
//			arr[i] = tolower(arr[i]);//将大写字母转换为小写字母
//		}
//		putchar(arr[i]);
//		i += 1;
//	}
//	putchar('\n');
//	return 0;
//}



//int main() {
//
//	char arr[] = "Keven-Zhou";
//
//
//	return 0;
//}

//size_t my_strlen(const char* a) {
//	int count = 0;
//	while (*a) {
//		count++;
//		a++;
//	}
//	return count;
//}
//
//
//int main() {
//
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//	return 0;
//}
#include <string.h>
//int main() {
//
//	char arr[] = "hello bit.";
//	char arr2[20] = "xxxxxxxxxYYYYY";//拷贝的时候顺便把arr字符数组中的\0给拷过来了
//	strcpy(arr2, arr);
//	printf("%s\n", arr2);
//
//	return 0;
//}

#include <assert.h>
//#define NDEBUG
//char* my_strcpy(char* src, const char* dest) {
//	assert(src != NULL);
//	assert(dest != NULL);
//	char* tmp = src;
//	while (*src++=*dest++)
//	{
//			;
//	}
//	return tmp;
//}
//
//int main() {
//
//	char arr1[] = "hello bit";
//	char arr2[20] = "xxxxxxxxyyyyyy";
//	char*ptr=my_strcpy(arr2, arr1);
//	printf("%s\n", ptr);
//	printf("%s\n", arr2);
//	return 0;
//}
//


//模拟实现strcat函数
//#include <stdio.h>
//#include <string.h>
//char* my_strcat(char* src, const char* dest) {
//	assert(src && dest);
//	char* ret = src;
//	//找到目标的\0
//	while (*src)
//		src++;
//	//拷贝
//	while (*src++ = *dest++);
//	return ret;
//}
//
//int main() {
//
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	char*ptr=my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", ptr);
//	return 0;
//}

//模拟实现streln函数的三种方式
//1.

//int my_strlen(char* str) {
//	int count = 0;
//	while (*str) {
//		str++;
//		count++;
//	}
//	return count++;
//}
//
//int main() {
//
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//2.递归版

//int my_strlen(char* str) {
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//
////int main() {
////
////	char arr[] = "abcdef";
////	int ret = my_strlen(arr);
////	printf("%d\n", ret);
////	return 0;
////}


//3.


//size_t my_strlen(char* str) {
//	char* ret = str;
//	while (*str)
//		str++;
//	return str - ret;//指针-指针得到的是指针之间相差的元素个数
//}
//
//int main() {
//
//	char arr[] = "abcdef";
//	size_t ret = my_strlen(arr);
//	printf("%zd\n", ret);
//	return 0;
//}


#include <stdio.h>
#include<string.h>
#include<assert.h>
//模拟实现strcpy函数
//char* my_strcpy(char* dest, const char* src) {
//	assert(src && dest);
//	char* tmp = dest;
//	while(*dest++=*src++);
//	return tmp;
//}
//
//int main() {
//
//	char arr1[] = "hello bit.";
//	char arr2[20] = "xxxxxxyyyyy";
//	char* ptr = my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", ptr);
//	return 0;
//}



struct stu{
	char name[20];
	int age;
};


//int cmp_int(const void* e1, const void* e2) {
//	return  *(int*)e2 - *(int*)e1;
//}

//int cmp_int(const void* e1, const void* e2) {
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}


int cmp_int(const void* e1, const void* e2) {
	return  strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}

void _Swap(char* buff1, char* buff2, int sz) {
	for (int i = 0; i < sz; i++) {
		char tmp = *(buff1 + i);
		*(buff1 + i) = *(buff2 + i);
		*(buff2 + i) = tmp;
	}
}

void my_qsort(void* base, int sz, int width, int cmp(void*,void*)) {
	for (int i = 0; i < sz - 1; i++) {
		for (int j = 0; j < sz - i - 1; j++) {
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0) {
				_Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);//交换两个元素的部分
			}
		}
	}
}

//void print_arr(int* nums, int sz) {
//	for (int j = 0; j < sz; j++)
//		printf("%d ", *(nums + j));
//	printf("\n");
//}
//
//void test() {
//
//	int arr[] = { 3,0,1,5,8,9,20,-4 };
//	my_qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_int);
//	print_arr(arr, sizeof(arr) / sizeof(arr[0]));
//}

//void test2() {
//	struct stu s[] = { {"zhangsan",17},{"lisi",19},{"wangwu",16} };
//	my_qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmp_int);
//}

void test3() {
	struct stu s[] = { {"zhangsan",17},{"lisi",19},{"wangwu",16} };
	my_qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), cmp_int);
}

int main() { 

	//test();
	//test2();
	test3();
	return 0;
}