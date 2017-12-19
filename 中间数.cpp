#include <stdio.h>
int main() {
	int n;
	int a[1003];
	scanf("%d",&n);
	for(int i = 1 ; i <= n ; ++i) scanf("%d",&a[i]);
	for(int i = 1 ; i <= n ; ++i) {
		int big = 0;
		int small = 0;
		for(int j = 1 ; j <= n ; ++j) {
			if(a[i]>a[j]) small++;
			if(a[i]<a[j]) big++;
		}
		if(big==small) {
			printf("%d\n",a[i]);
			return 0;
		}
	}
	printf("-1\n");
}

