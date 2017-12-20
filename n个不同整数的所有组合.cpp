#include <stdio.h>
int T;
int n;
int a[233];
int haha[233];
int vis[233];
void dfs(int dep,int st) {
	for(int i = st ; i <= n ; ++i) {
		if(vis[i]) continue;
		vis[i] = 1;
		haha[dep] = i;
		dfs(dep+1,i);
		vis[i] = 0;
	}
	printf("--> ");
	for(int i = 0 ; i < dep ; ++i) 
		printf("%d ",haha[i]);
	printf("\n");
	return;
}
int main() {
	scanf("%d",&T);
	while(T--) {
		scanf("%d",&n);
		for(int i = 1 ; i <= n ; ++i) scanf("%d",&a[i]);
		dfs(0,1);
	}
}

