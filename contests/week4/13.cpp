#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

int T,n,m,d[110];
double x[110],y[110],ans;
struct edge{
	int x,y;
	double w;
	bool operator < (const edge&T) const{
		return w<T.w;
	}
} e[20000];
int find(int u){
	if (u==d[u]) return u;
	else u=find(d[u]);
}
void Union(int u,int v){
	d[find(u)]=find(v);
}
int main(){
	scanf("%d",&T);
	while (T--){
		scanf("%d",&n);
		m=0;
		for (int i=1;i<=n;i++) scanf("%lf%lf",&x[i],&y[i]);
		for (int i=1;i<=n;i++)
			for (int j=i+1;j<=n;j++){
				m++;
				e[m].x=i;
				e[m].y=j;
				e[m].w=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
			}
		sort(e+1,e+1+m);
		for (int i=1;i<=n;i++) d[i]=i;
		ans=0;
		for (int i=1;i<=m;i++)
			if (find(e[i].x)!=find(e[i].y)){
				ans+=e[i].w;
				Union(e[i].x,e[i].y);
			}
		printf("%.2f\n",ans);
		if (T) printf("\n");
	}
	return 0;
}
