#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main() {
//
//    int n = 0;
//    scanf("%d", &n);
//    getchar();
//    for (int i = 1; i <= n; i++) {
//        char str[101] = { 0 };
//        gets(str);
//        int len = 0;
//        int a = 0;
//        int d = 0;
//        int b = 1;
//        int c = 1;
//        int e = 0;
//        for (int j = 0; j < strlen(str); j++) {
//            if (!j) {
//                if (str[j] >= '0' && str[j] <= '9') {
//                    c = 0;
//                }
//            }
//            if ((!(str[j] >= 'a' && str[j] <= 'z'))&& (!(str[j] >= 'A' && str[j] <= 'Z')) && (!(str[j] >= '0' && str[j] <= '9')))
//            {
//                b = 0;
//                break;
//            }
//            if (str[j] >= '0' && str[j] <= '9') {
//                a++;
//            }
//            if (str[j] >= 'A' && str[j] <= 'Z') {
//                d++;
//            }
//            if (str[j] >= 'a' && str[j] <= 'z') {
//                e++;
//            }
//            len++;
//        }
//        if ((b && c && a && e && len >= 8) || (b && c && a && d && len >= 8) || (b && c && d && e && len >= 8)) {
//            printf("YES\n");
//        }
//        else {
//            printf("NO\n");
//        }
//    }
//    return 0;
//}



//nums1 = { 1,2,2,1 };//4
//nums2 = { 2,2 };//2

//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
//	static int arr[1000];//static修饰这个数组的时候，使这个数组生命周期变长了
//	*returnSize = 0;
//	int i, j, k;
//	for (i = 0; i < nums1Size; i++) {
//		for (j = 0; j < nums2Size; j++) {
//			if (nums2[j] == nums1[i]) break;//判断nums1[i] 是否在nums2数组中
//		}
//		if (j == nums2Size) {// nums1中i位置的数据在nums2数组中不存在，则非交集数据
//			continue;
//		}
//		//只有在另一个数组中存在的数据才能走下来，判断是否已经被添加到返回数组中
//		for (j = 0; j < *returnSize; j++) {
//			if (nums1[i] == arr[j]) break;//判断nums1[i] 是否在 arr 这个返回数组中
//		}
//		if (j == *returnSize) {//不在返回数组中，则添加到返回数组中
//			arr[*returnSize] = nums1[i];
//			*returnSize += 1;
//		}
//	}
//	return arr;
//}


#include <stdio.h>
#include <string.h>

//void sort(char str[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) {
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++) {
//			if (str[j] > str[j + 1]) {
//				char tmp = str[j + 1];
//				str[j + 1] = str[j];
//				str[j] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag)break;
//	}
//}
//
//void print(char* str, int sz) {
//	int t = 0;
//	for (t = 0; t < sz; t++) {
//		printf("%c", *(str + t));
//	}
//}
//
//int main() {
//	char str[1001] = { 0 };
//	scanf("%s", str);
//	sort(str, sizeof(str) / sizeof(str[0]));
//	print(str, sizeof(str) / sizeof(str[0]));
//
//	return 0;
//}

//int main() {
//
//	int nums[] = { 1, 2, 3 };
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	int ret=-1;
//	for (int i = 0; i < numsSize; ++i) {
//		int sum1 = 0;
//		int sum2 = 0;
//		if (!i) {
//			for (int j = 1; j < numsSize; j++) {
//				sum2 += nums[j];
//			}
//			if (sum1 == sum2) {
//				ret = 0;
//				break;
//			}
//		}
//		else {
//			for (int j = 0; j < i; j++) {
//				sum1 += nums[j];
//			}
//			for (int j = i + 1; j < numsSize; j++) {
//				sum2 += nums[j];
//			}
//			if (sum1 == sum2) {
//				ret = i;
//				break;
//			}
//		}
//	}
//	if (ret != -1)
//		return ret;
//	else {
//		return ret;
//	}
//	return 0;
//}

#include <stdio.h>
#include <string.h>
//int main() {
//
//    char str[501] = { 0 };
//    char str2[501] = { 0 };
//    scanf("%s", str);
//    int len = strlen(str);
//    int x = 0;
//    for (int i = 0; i < len; i++) {
//        int ret = 1;
//        if (!i) {
//            str2[x++] = str[i];
//        }
//        else {
//            for (int j = 0; j <= x; j++) {
//                if (str2[j] == str[i])
//                    continue;
//                else if (str2[j] == '\0') {
//                    for (int k = 0; k < j; k++) {
//                        if (str2[k] == str[i]) {
//                            ret = 0;
//                            break;
//                        }
//                    }
//                    if (ret) {
//                        str2[x++] = str[i];
//                        break;
//                    }
//                }
//            }
//
//        }
//    }
//    printf("%zd", strlen(str2));
//    return 0;
//}


//int main() {
//
//	int nums[] = { 2,2,1,1,1,2,2 };
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	int max = nums[0];
//	int min = nums[0];
//	for (int i = 1; i < numsSize; i++) {
//		if (max < nums[i])max = nums[i];
//		if (min > nums[i])min = nums[i];
//	}
//	for (int i = min; i <=max; i++) {
//		int ret = 0;
//		int j = 0;
//		for (; j < numsSize; j++) {
//			if (nums[j] == i) {
//					ret++;
//				}
//		  }
//		if (ret > numsSize / 2) {
//			return i;
//		}
//	}
//	return 0;
//}


//int main()
//{
//	char str[] = "Geneius";
//	print(str);
//	return 0;
//}
//print(char* s)
//{
//	if (*s)
//	{
//		print(s++);
//		printf("%c", *s);
//	}
//}


//int main() {
//	
//	int x = 55;
//	int ret = 1;
//	int t = x;
//	while (t) {
//		int tmp = t % 10;
//		if (t % tmp != 0) {
//			ret = 0;
//			break;
//		}
//		t /= 10;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

#include <stdio.h>

//int main() {
//
//	int nums[] = {1,2,3,4 };
//	int left = 1;
//	int right = 1;
//	int numsize = sizeof(nums) / sizeof(nums[0]);
//	int ret[4];
//	for (int i = 0; i < numsize; i++) {
//		ret[i] = left;
//		left *= nums[i];
//	}
//	for (int j = numsize - 1; j >= 0; j--) {
//		ret[j] *= right;
//		right *= nums[j];
//	}
//	for (int i = 0; i < numsize; i++) {
//		printf("%d ", ret[i]);
//	}
//	return 0;
//}



//int main() {
//
//	int nums[] = { 1,1 };
//	int numSize = sizeof(nums) / sizeof(nums[0]);
//	int num2s[7];
//	int n = 0;
//	for (int i = 1; i <= numSize; i++) {
//		int ret = 0;
//		for (int j = 0; j < numSize; j++) {
//			if (nums[j] == i) {
//				ret++;
//			}
//		}
//		if (!ret)num2s[n++] = i;
//	}
//	for (int j = 0; j < n; j++) {
//		printf("%d ", num2s[j]);
//	}
//	return 0;
//}

//int add(int num1, int num2) {
//    // write code here
//    //考察加法原理。不考虑进位+只考虑进位，循环，知道进位位0.
//    int tmp = num1;
//    while (num2)
//    {
//        tmp = num1 ^ num2;  //不考虑进位
//        num2 = (num1 & num2) << 1;  //只考虑进位
//        num1 = tmp;
//    }
//    //当进位为0的时候，不考虑进位的和就是整体的和。
//    return tmp;
//}
//
//int main() {
//
//	int num1, num2;
//	scanf("%d %d", &num1, &num2);
//	int ret=add(num1, num2);
//	printf("%d\n", ret);
//
//	return 0;
//}




//int is_prime(int x) {
//    for (int i = 2; i * i <= x; i++) {
//        if (x % i == 0) {
//            return 0;
//        }
//    }
//    if (x < 2)return 0;
//    return 1;
//}
//
//int main() {
//
//    int n;
//    // cin>>n;
//    scanf("%d", &n);
//    int cnt = 0;
//    for (int i = 1; i <= n; i++) {
//        if (is_prime(i)) {
//            // cout<<i<<" ";
//            printf("%d ", i);
//            cnt++;
//        }
//    }
//    // cout<<"\n"<<cnt<<endl;
//    printf("\n%d", cnt);
//
//    return 0;
//}
