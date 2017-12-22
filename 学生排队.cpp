#include <stdio.h>
int n,pos[23333],wh[23333];
int main() {
	scanf("%d",&n);
	for(int i = 1 ; i <= n ; ++i) pos[i] = i,wh[i] = i;
	int m;
	scanf("%d",&m);
	for(int i = 1 ; i <= m ; ++i) {
		int p,q;
		scanf("%d%d",&p,&q);
		if(q>0) {
			for(int j = pos[p] ; j < pos[p]+q ; ++j) {
				pos[wh[j+1]] = j;
				wh[j] = wh[j+1];
			}
			pos[p] = pos[p]+q;
			wh[pos[p]] = p;
		} else {
			q*=-1;
			for(int j = pos[p] ; j > pos[p]-q ; --j) {
				pos[wh[j-1]] = j;
				wh[j] = wh[j-1];
			}
			pos[p] = pos[p]-q;
			wh[pos[p]] = p;
		}
	}
	for(int i = 1 ; i <= n ; ++i) printf("%d ",wh[i]);
	printf("\n");
}
