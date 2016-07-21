#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
int n,m,ans;
char a[110][110];
void dfs(int x,int y){
	a[x][y]='*';
	for (int i=x-1;i<=x+1;i++)
		for (int j=y-1;j<=y+1;j++)
			if (a[i][j]=='@')
				dfs(i,j);
}
int main(){
	scanf("%d%d",&n,&m);
	while (n!=0){
		ans=0;
		for (int i=1;i<=n;i++)
			scanf("%s",a[i]+1);
		for (int i=1;i<=n;i++)
			for (int j=1;j<=m;j++)
				if (a[i][j]=='@'){
					ans++;
					dfs(i,j);
				}
		printf("%d\n",ans);
		scanf("%d%d",&n,&m);
	}
	return 0;
}
