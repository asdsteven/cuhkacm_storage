#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m,a,b,o;
int c[110][110],d[110],v[110],ans[110];
void dfs(int x){
	ans[++o]=x;
	v[x]=1;
	for (int i=1;i<=n;i++)
		if (c[x][i]==1){
			d[i]--;
			if (d[i]==0)	dfs(i);
		}
}
int main(){
	scanf("%d%d",&n,&m);
	while (n!=0){
		memset(c,0,sizeof(c));
		memset(d,0,sizeof(d));
		memset(v,0,sizeof(v));
		
		for (int i=1;i<=m;i++){
			scanf("%d%d",&a,&b);
			c[a][b]=1;
			d[b]++;
		}
		o=0;
		for (int i=1;i<=n;i++)
			if (d[i]==0 && v[i]==0)
				dfs(i);				
		for (int i=1;i<n;i++)
			printf("%d ",ans[i]);
		printf("%d\n",ans[n]);
		scanf("%d%d",&n,&m);
	}
	return 0;
}
