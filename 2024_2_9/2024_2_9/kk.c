#define _CRT_SECURE_NO_WARNINGS 1





//int func(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x >> 1;
//	}
//	return count
//}
//int main() {
//
//	int a = -1;
//	int b = a<<1;
//	printf("%d\n", b);
//
//	return 0;
//}


//int main() {
//
//	int  w = -2;
//	//10000000000000000000000000000010ԭ��
//	//11111111111111111111111111111101����
//	//11111111111111111111111111111110
//	// 
//	// 1111111111111111111111111111100  
//	// 1000000000000000000000000000011
//	// 1000000000000000000000000000100
//	// 
//	//10000000000000000000000000000100
//	int x = w << 1;
//	printf("%d\n", x);
//
//	return 0;
//}



//int Add(int num1, int num2) {
//	while (num2) {//��λ��Ϊ0���������ӽ���������
//		int tmp = num1 ^ num2;//�õ�ÿλ��Ӳ����ǽ�λ������
//		num2 = (num1 & num2) << 1;//ͬ1��λ�������λ
//		num1 = tmp;
//	}
//	return num1;
//}
//
//int main() {
//	int ret=Add(5, 7);
//	printf("%d\n", ret);
//	return 0;
//}


//int main() {
//
//	int nums[] = { 4,3,2,7,8,2,3,1 };
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	int ret[8];
//	int n= 0;
//	int* ptr = (int*)malloc(10 * sizeof(int));
//	*ptr = 0;
//	for (int i = 0; i < sz; i++) {
//		ret[nums[i]] = -1;
//	}
//	for (int j = 1; j <= sz; j++) {
//		if (ret[j]!=-1) {
//			ret[*ptr] = j;
//			*ptr += 1;
//		}
//	}
//	//for (int a = 0; a < n; a++) {
//	//	printf("%d ", ret[a]);
//	//}
//	free(ptr);
//
//
//	return 0;
//}

//int Fun(int num1, int num2) {
//	int sum = num1;
//	int add = num2;
//	while (add) {
//		int tmp = sum^add;//��ʾ�������ǽ�λ�ģ�����tmp��
//		add = (add & sum) << 1;//��add��sum��ֵ��λ�룬����һλ������add�У������Ͼ��ǽ����ǽ�λ��ֵ����add
//		sum = tmp;//����ٰѷǽ�λ��ֵ����sum
//	}
//	return sum;
//
//}
//
//int main() {
//
//	int ret=Fun(5, 7);
//	printf("%d\n", ret);
//
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	
//	int n = 0;
//	int sum = 0;
//	int count = 0;
//	scanf("%d", &n);
//	for (int t = n; t >1; t--) {
//		int sum = 0;
//		for (int x =1; x; x++) {
//			if (t % x == 0) {
//				sum += x;
//			}
//		}
//		if (sum == t) {
//			count += 1;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


#include <stdio.h>
//int main()
//{
//	/*unsigned int x = 1;
//	unsigned int y = 2;
//	if (x > y)
//	{
//		printf("x is greater");
//	}
//	else
//	{
//		printf("y is greater");
//	}*/
//	/*int k, a, b;
//	a += a -= a = 9;
//	printf("%d", a);*/
//
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	/*int i = 1;
//	printf("%zd\n", sizeof(i++));*/
///*	int k = 1 ^ (1 << 31 >> 31);
//	//printf("%d\n", k)*/
//	int x = 3.4;
//	int t = x % 2;
//	return 0;
//}

#include <stdio.h>
#include< stdlib.h >
//int* finddisappearednumbers(int* nums, int numssize, int* returnsize) {
//    int* arr = (int*)malloc(numssize*sizeof(int));
//    *returnsize = 0;
//    for (int i = 0; i < numssize; i++) {
//        arr[nums[i]] =0;
//    }
//    for (int j = 1; j <= numssize; j++) {
//        if (arr[j]) {
//            arr[*returnsize] = j;
//            *returnsize += 1;
//        }
//    }
//    return arr;
//}
//
//
//
//int main() {
//
//	int nums[] = { 7,7,7,7,7,7,7,7 };
//	int k = sizeof(nums) / sizeof(nums[0]);
//    int r=3;
//	int* ret = finddisappearednumbers(nums, k,&r);
//    for (int i = 0; i < k-1; i++) {
//        printf("%d ", *(ret + i));
//    }
//	return 0;
//}
//


#include <stdio.h>
#include <string.h>

//int main() {
//
//	char str[10001];
//	gets(str);
//	int len = strlen(str);
//	int x;
//	int cnt = 0;
//	int k = 0;
//	for (int j = len - 1; j >= 0; j--) {
//		if (!((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z'))) {
//			for (x = j + 1;cnt;x++,cnt--) {
//				printf("%c", str[x]);
//			}
//			if (k) {
//				printf(" ");
//				k=0;
//			}
//		}
//		else {
//			k = 1;
//			cnt++;
//		}
//		if (j == 0) {
//			for (x = j; cnt; x++, cnt--) {
//				printf("%c", str[x]);
//			}
//		}
//	}
//	putchar('\n');
//	
//	return 0;
//}

//�з������������ǰ��ձ������������͵ķ���λ��������
//�޷���������������λ��0

//int main() {
//
//	char a = 5;
//	unsigned b = a;
//	printf("%llu", b);
//
//	return 0;
//}

//int Fact(int n) {
//	//if (n == 1 || n == 2) {
//	//	return 1;
//	//}
//	//else {
//	//	return Fact(n - 1) + Fact(n - 2);
//	//}
//	int x = 0;
//	int y = 1;
//	int z = x + y;
//	if (n <= 2) {
//		return z;
//	}
//	else {
//		while (n>2) {
//			x = y;
//			y = z;
//			z = x + y;
//			n--;
//		}
//		return z;
//	}
//}
//
//int main() {
//
//	int n;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//#include <math.h>
//int main() {
//
//	int m, n;
//	while (scanf("%d %d", &n, &m) == 2) {
//		double sum = 0;
//		double k =n ;
//		for (int i = 1; i <=m; i++) {
//			sum += k;
//			k = (double)sqrt(k);
//		}
//		printf("%.2f\n", sum);
//	}
//	return 0;
//}


//int main() {


	/*int x = 10;
	while (x--) {
		printf("%d ", x);
	}*/

	/*int a[8] = { 1,2,3,4,5,6,7,8 };
	a[0]++;
	int* ptr = &a[0];
	printf("%d\n", *ptr);
	*/

//	return 0;
//}

#include <stdio.h>

//int My_strlen(char* s) {
//	char* t = s;
//	while (*t++) 
//	return t - s;
//}
//
//int main()
//{
//	/*int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }, * p = a + 5, * q = NULL;
//	*q = *(p + 5);
//	printf("%d %d\n", *p, *q);*/
//	///*int* p = NULL*/;
//	char a[] = "abcdef";
//	int t=My_strlen(a);
//	printf("%d\n", t);
//	return 0;
//}


//int main() {
//
//	int nums[] = { 20,70,110,150 };
//	int t = 0;
//	int arr[2];
//	int target = 90;
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	for (int j = 0; j < sz; j++) {
//		for (int k = j + 1; k < sz; k++) {
//			if (nums[j] + nums[k] == target) {
//				arr[t++] = j+1;
//				arr[t] = k + 1;
//				j = sz;
//				break;
//			}
//		}
//	}
//	for (int x = 0; x <= t; x++) {
//		printf("%d ", arr[x]);
//	}
//	return 0;
//}		j	δ�����ʶ�� "j"	



//int main() {
//
//    //char guess[4] = "RRBB";
//    char solution[4] ="YBBY";//YYYB//
//    char guess[4]= "GYYB";//YYYY//
//    int o = 0;
//    int cnt1 = 0;
//    int cnt2 = 0;
//    char a[10];
//    int k = 0;
//    int t = 0;
//    int ret = -2;
//    int ptr = 0;
//    for (int i = 0; i < 4; i++) {
//        int m = 0;
//        for (int j = 0; j < 4; j++) {
//            if (guess[i] == solution[j] && i == j) {
//                for (int l = 0; l < k; l++) {
//                    if (guess[i] == a[l] && a[l] == solution[j] && cnt2 > 0) {
//                        int v = 0;
//                        for (; v < 4; v++) {
//                            if (v!=i&&guess[v] == solution[j]) {
//                                ret = v;
//                                break;
//                            }
//                        }
//                        if (o == m && m==0&&(ret!=v || v<j)) {
//                            cnt2 = cnt2 -1;
//                        }
//                        else{
//                            cnt2 = cnt2 - m;
//                        }
//                        break;
//                    }
//                }
//                a[k++] = guess[i];
//                cnt1++;
//                solution[j] = 'L';
//                goto there;
//            }
//            else if (guess[i] == solution[j] ) {
//             
//                t = j;
//                for (int x = 0; x < k; x++) {
//                    if (guess[i] != a[x] || j > ptr) {
//                        for (; t >= j && t < 4; t++) {
//                            if (guess[i] == solution[t]&& m < 1)// 
//                            {
//                                    a[k++] = guess[i];
//                                    cnt2++;
//                                    m++;   
//                                    ptr = j;
//                                    char vb = guess[i];
//                                    for (int z = 0; z < k; z++) {
//                                        if (z != i && vb == a[z]) {
//                                            cnt2 -= 1;
//                                            a[i] = '\0';
//                                            break;
//                                        }
//                                    }
//                            }
//                        }
//                        t = 0;
//                        goto this;
//                    }
//                }
//                if (k == 0) {
//                    m++;
//                    cnt2++;
//                    if (k < 1) {
//                        o = i;
//                    }
//                    a[k++] = guess[i];
//                }
//                ptr = j;
//            }
//            this:
//            ;
//
//        }
//    there:
//        ;
//    }
//    printf("%d %d\n",cnt1,cnt2);
//	return 0;
//}


//int main() {
//
//    int o = 0;
//    int cnt1 = 0;
//    int cnt2 = 0;
//    char solution[4] ="YBBY";//YYYB//
//    char guess[4]= "GYYB";//YYYY//
//    char a[10];
//    int k = 0;
//    int t = 0;
//    int ret = -2;
//    for (int i = 0; i < 4; i++) {
//        int m = 0;
//        for (int j = 0; j < 4; j++) {
//            if (guess[i] == solution[j] && i == j) {
//                for (int l = 0; l < k; l++) {
//                    if (guess[i] == a[l] && a[l] == solution[j] && cnt2 > 0) {
//                        int v = 0;
//                        for (; v < 4; v++) {
//                            if (v != i && solution[v] == solution[i]) {
//                                ret = v;
//                                break;
//                            }
//                        }
//                        if (o == m && m == 0 && ret != v) {
//                            cnt2 = cnt2 - o - 1;
//                        }
//                        else {
//                            cnt2 = cnt2 - m;
//                        }
//                        break;
//                    }
//                }
//                a[k++] = guess[i];
//                cnt1++;
//                goto there;
//            }
//            else if (guess[i] == solution[j]) {
//                t = j;
//                for (int x = 0; x < k; x++) {
//                    t++;
//                    if (guess[i] == a[x]) {
//                        for (; t > j && t < 4; t++) {
//                            if (guess[i] == solution[t] && m < 1)// 
//                            {
//                                a[k++] = guess[i];
//                                cnt2++;
//                                m++;
//                            }
//                        }
//                        t = 0;
//                        goto this;
//                    }
//                }
//                m++;
//                cnt2++;
//                if (k < 1) {
//                    o = i;
//                }
//                a[k++] = guess[i];
//            }
//            this:
//            ;
//
//        }
//    there:
//        ;
//    }
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>
//int main() {
//
//	char str[1000] = { 0 };
//	gets(str);
//	int n = 0;
//	scanf("%d", &n);
//	char tmp[1000] = { 0 };
//	int len = strlen(str);
//	strncpy(tmp, str, n);
//	for (int j = 0; j < n; j++) {
//		printf("%c", tmp[j]);
//	}
//	return 0;
//}


//int main() {
//
//	int n, k;
//	long long count = 0;
//	scanf("%d %d", &n, &k);
//	//for (int y = 1; y <= n; y++) {
//	//	for (int x = 1; x <= n; x++) {
//	//		if (x <= n && y <= n && x % y >= k) {
//	//			count++;
//	//		}
//	//	}
//	// 
//	// 
//	// 
//	//}
//	
//	for (int x = 1; x <= n; x++) {
//		if()
//	}
//
//	printf("%d", count);
//	return 0;
//}

//#define max 255
//int main()
//{
//	char a[max];
//	 char  i;
//	for (i = 0; i <= max; i++)
//		a[i] = i;
//	return 0;
//}

#include<stdio.h>
//int main()
//{
//	unsigned char i = 7;
//	int j = 0;
//	for (; i > 0; i -= 3)
//	{
//		++j;
//	}
//	printf("%d\n", j);
//	return 0;
//}

//int main()
//{
//	
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i;
//	for (i = 0; i <= 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//#define MAX 255
//int main()
//{
//	unsigned char A[MAX], i;
//	for (i = 255; i <= MAX; i++)
//		A[i] = i;
//	return 0;
//}



//void hanshu(char* solution, char* guess, int* cnt1, int* cnt2) {
//    char stk[4] = { 0 };
//    int p = 0;
//    int o = 0;
//    int chufa = 0;
//    char a[10];
//    int k = 0;
//    int t = 0;
//    int ret = -2;
//    for (int i = 0; i < 4; i++) {
//        int m = 0;
//        for (int j = 0; j < 4; j++) {
//            if (guess[i] == solution[j] && i == j) {
//                for (int l = 0; l < k; l++) {
//                    if (guess[i] == a[l] && a[l] == solution[j] && cnt2 > 0) {
//                        int v = 0;
//                        for (; v < 4; v++) {
//                            if (v != i && solution[v] == solution[i]) {
//                                ret = v;
//                                break;
//                            }
//                        }
//                        if (o == m && m == 0 && ret != v) {
//                            (*cnt2) = (*cnt2) - o - 1;
//                        }
//                        else {
//                            (*cnt2) -= m;
//                        }
//                        break;
//                    }
//                }
//                if (i == j) {
//                    solution[j] = 'K';
//                }
//                a[k++] = guess[i];
//                stk[p++] = guess[i];
//                chufa = 1;
//                (*cnt1)++;
//                goto there;
//            }
//            else if (guess[i] == solution[j]) {
//                t = j;
//                for (int x = 0; x < k; x++) {
//                    if (guess[i] == a[x]) {
//                        t++;
//                        for (; t > j && t < 4; t++) {
//                            if (guess[i] == solution[t] && m < 1)// 
//                            {
//                                a[k++] = guess[i];
//                                (*cnt2)++;
//                                m++;
//                            }
//                        }
//                        int g = 0;
//                        for (; g < k; g++) {
//                            if (guess[i] == stk[g]) {
//                                chufa = 1;
//                                break;
//                            }
//                        }
//                        if (g == k) {
//                            chufa = 0;
//                        }
//                        if (chufa) {
//                            for (; chufa < 4; chufa++) {
//                                if (solution[chufa] == guess[i]) {
//                                    *cnt2 += 1;
//                                    break;
//                                }
//                            }
//                            k++;
//                            chufa = 0;
//                        }
//                        t = 0;
//                        goto this;
//                    }
//                }
//                
//                m++;
//                *cnt2+=1;
//                if (k < 1) {
//                    o = i;
//                }
//                a[k++] = guess[i];
//            }
//            this:
//            ;
//
//        }
//    there:
//        ;
//    }
//}

//int main() {
//
//	char solution[] = "BBBB";//BBYR
//	char guess[] = "YBBB";//GYBB
//  /*  int cnt1 = 0;
//    int cnt2 = 0;
//	hanshu(solution, guess, &cnt1, &cnt2);
//
//	printf("%d %d\n", cnt1, cnt2);*/
//	static int arr[2] = { 0 };
//	arr[0] = 0; arr[1] = 0;//��̬�ռ䲻����ж��γ�ʼ�����ÿ�����³�ʼ��������ʹ��memset����
//	int s_arr[26] = { 0 };//26���ַ�λ solution ������ɫ����ͳ��
//	int g_arr[26] = { 0 };//26���ַ�λ guess ������ɫ����ͳ��
//	for (int i = 0; i < 4; i++) {
//		if (solution[i] == guess[i]) {
//			arr[0] += 1;//λ�ú���ɫ��ȫһ�����������+1
//		}
//		else {
//			//ͳ��ͬһλ�ò�ͬ��ɫ��������ɫ������α���в���Ҫ��Ӧλ����ͬ��ֻ��Ҫ�ж�Ӧ��������ɫ����
//			s_arr[solution[i] - 'A'] += 1; //ͳ��solution��Ӧ��ɫ�ַ����ִ���
//			g_arr[guess[i] - 'A'] += 1;//ͳ��guess��Ӧ��ɫ�ַ����ִ���
//		}
//	}
//	//��������ɫ����ͳ�������в鿴��ɫ������ȡ��ͬλ�ý�С��һ������Ϊ��������
//	for (int i = 0; i < 26; i++) {
//		arr[1] += s_arr[i] > g_arr[i] ? g_arr[i] : s_arr[i];
//	}
//	for (int j = 0; j < 2; j++) {
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}


//int main() {
//
//	char solution[] = "BBBB";//BBYR
//	char guess[] = "YBBB";//GYBB
//  /*  int cnt1 = 0;
//    int cnt2 = 0;
//	hanshu(solution, guess, &cnt1, &cnt2);
//
//	printf("%d %d\n", cnt1, cnt2);*/
//	static int arr[2] = { 0 };
//	arr[0] = 0; arr[1] = 0;//��̬�ռ䲻����ж��γ�ʼ�����ÿ�����³�ʼ��������ʹ��memset����
//	int s_arr[26] = { 0 };//26���ַ�λ solution ������ɫ����ͳ��
//	int g_arr[26] = { 0 };//26���ַ�λ guess ������ɫ����ͳ��
//	for (int i = 0; i < 4; i++) {
//		if (solution[i] == guess[i]) {
//			arr[0] += 1;//λ�ú���ɫ��ȫһ�����������+1
//		}
//		else {
//			//ͳ��ͬһλ�ò�ͬ��ɫ��������ɫ������α���в���Ҫ��Ӧλ����ͬ��ֻ��Ҫ�ж�Ӧ��������ɫ����
//			s_arr[solution[i] - 'A'] += 1; //ͳ��solution��Ӧ��ɫ�ַ����ִ���
//			g_arr[guess[i] - 'A'] += 1;//ͳ��guess��Ӧ��ɫ�ַ����ִ���
//		}
//	}
//	//��������ɫ����ͳ�������в鿴��ɫ������ȡ��ͬλ�ý�С��һ������Ϊ��������
//	for (int i = 0; i < 26; i++) {
//		arr[1] += s_arr[i] > g_arr[i] ? g_arr[i] : s_arr[i];
//	}
//	for (int j = 0; j < 2; j++) {
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}

//int Permutationnumber(int x, int y) {
//
//    int tmp = 0;
//    if (x > y) {
//        for (tmp = x; y > 1; y--, x--) {
//            tmp *= (x - 1);
//        }
//    }
//    else if (x == y) {
//        for (tmp = x; y > 1; y--, x--) {
//            tmp *= (x - 1);
//        }
//    }
//    else {
//        return 0;
//    }
//    return tmp;
//}
//
//
//int main() {
//    int m, n;
//    scanf("%d %d", &m, &n);
//    int ret = Permutationnumber(m, n);//4,2
//    printf("%d\n", ret);
//    return 0;
//}
//
//

