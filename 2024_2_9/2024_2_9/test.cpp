#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include <iostream>
#include <iostream>

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
//				arr[t++] = j + 1;
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
//}

//int hanshu(int tmp) {
//	int cnt1 = 0;
//	int cnt2 = 0;
//	while (tmp) {
//		if (tmp & 1) {
//			cnt1++;
//		}
//		else {
//			cnt2++;
//		}
//		tmp >>= 1;
//	}
//	if (cnt1 % 2 != 0 && cnt2 % 2 == 0) {
//		return 0;
//	}
//	else if (cnt1 % 2 == 0 && cnt2 % 2 != 0) {
//		return 1;
//	}
//	else if (cnt1 % 2 == 0 && cnt2 % 2 == 0) {
//		return 10;
//	}
//	else {
//		return 100;
//	}
//
//}
//
//int main() {
//
//	int n = 0;
//	cin >> n;
//	for (int x = 1; x <= n; x++) {
//		int t;
//		cin >> t;
//		cout << hanshu(t) << " ";
//	}
//	return 0;
//}