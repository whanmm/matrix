//#include <stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int a[100][100] = { 0 };//二维数组占用空间太大会无法正常运行，为什么
//
//	int count = 0;
//	int sum = 1;
//	while (count <= 2 * n - 2) {
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (i + j == count) {
//					if (count % 2 == 0) {
//						a[j][i] = sum++;//偶数斜列向右上递增，i递减j递增
//						                // 奇数列向左下递增，i递增，j递减
//						                //外层的i是递增的
//					}
//					else {
//						a[i][j] = sum++;
//					}
//				}
//			}
//		}
//		count++;
//	}
//	for (int i = 0; i < n;i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%-2d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
