//#include <stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int a[100][100] = { 0 };//��ά����ռ�ÿռ�̫����޷��������У�Ϊʲô
//
//	int count = 0;
//	int sum = 1;
//	while (count <= 2 * n - 2) {
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (i + j == count) {
//					if (count % 2 == 0) {
//						a[j][i] = sum++;//ż��б�������ϵ�����i�ݼ�j����
//						                // �����������µ�����i������j�ݼ�
//						                //����i�ǵ�����
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
