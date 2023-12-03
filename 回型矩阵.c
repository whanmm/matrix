//#include <stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int a[20][20] = { 0 };
//	int count = 0;
//	int p = 0,q=n-1;
//	int i;
//	while (count < n * n) {
//		for (i = p; i <= q; i++) {
//			a[p][i] = ++count;
//		}
//		for (i = p + 1; i <= q; i++) {
//			a[i][q] = ++count;
//		}
//		for (i = q-1; i >= p; i--) {
//			a[q][i] = ++count;
//		}
//		for (i = q - 1; i >= p + 1; i--) {
//			a[i][p]=++count;
//		}
//		++p;
//		--q;
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}