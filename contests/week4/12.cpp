#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

int T,n,m,s,t,a,b,c,d[21000],v[21000],temp;

vector<int> e[21000],w[21000];
queue<int> q;

int main(){
	scanf("%d",&T);
	for (int I=1;I<=T;I++){
		scanf("%d%d%d%d",&n,&m,&s,&t);
		for (int i=0;i<n;i++){
			e[i].clear();
			w[i].clear();
		}
		for (int i=1;i<=m;i++){
			scanf("%d%d%d",&a,&b,&c);
			e[a].push_back(b);
			w[a].push_back(c);
			e[b].push_back(a);
			w[b].push_back(c);
		}
		for (int i=0;i<n;i++)
			d[i]=900000000;
		d[s]=0;
		q.push(s);
		v[s]=1;
		while (!q.empty()){
			temp=q.front();
			v[temp]=0;
			q.pop();
			for (int i=0;i<e[temp].size();i++)
				if (d[temp]+w[temp][i]<d[e[temp][i]]){
					d[e[temp][i]]=d[temp]+w[temp][i];
					if (!v[e[temp][i]]){
						v[e[temp][i]]=1;
						q.push(e[temp][i]);
					}
				}
			}
		if (d[t]==900000000) printf("Case #%d: unreachable\n",I);
		else printf("Case #%d: %d\n",I,d[t]);
	}
	return 0;
}
