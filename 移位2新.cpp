#include <stdio.h>
int main() {
	int n,m;
	int a[20013];
	scanf("%d%d",&m,&n);
	int d;
	scanf("%d",&d);
	if(!d) n = -n+m;
	for(int i = 1 ; i <= m ; ++i) scanf("%d",&a[i]),a[i+m] = a[i];
	for(int i = 1+n ; i <= m+n ; ++i) printf("%d ",a[i]);
	printf("\n");
}

