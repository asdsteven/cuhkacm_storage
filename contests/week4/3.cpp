#include<cstdio>
#include<cmath>
#define F1(a,b,c) for(int a=b;a<c;a++)
#define F2(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
int n,m,ans;
int dx[]={0,1,-1};
char x[105][105];
void dfs(int a,int b){
if(x[a][b]=='@'){
x[a][b]=0;
F1(c,0,3)F1(d,0,3)dfs(a+dx[c],b+dx[d]);
}}
int main(){
while(1){
scanf("%d%d",&n,&m);
if(!n)break;
ans=0;
F2(a,1,n)scanf("%s",x[a]+1);
F2(a,1,max(n,m)+1)x[a][m+1]=x[n+1][a]=0;
F2(a,1,n)F2(b,1,m)if(x[a][b]=='@')dfs(a,b),ans++;
printf("%d\n",ans);
}}




