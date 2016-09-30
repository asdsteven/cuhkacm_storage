#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <stack>
#include <map>
#include <set>
#include <deque>
#include <cstring>
#include <functional>
#include <climits>
#include <list>
#include <ctime>
#include <complex>
#include <ext/rope>

#define F1(x,y,z) for(int x=y;x<z;x++)
#define F2(x,y,z) for(int x=y;x<=z;x++)
#define F3(x,y,z) for(int x=y;x>z;x--)
#define F4(x,y,z) for(int x=y;x>=z;x--)
#define mp make_pair
#define pb push_back
#define LL long long
#define co complex<double>
#define fi first
#define se second

#define MAX 100005
#define AMAX 53
#define MOD 1000000007

#define f(c,d) ((1<<(c))*(d))

using namespace std;
using namespace __gnu_cxx;

int root,last_added,now_at,needSL,_remainder;
int active_node,active_e,active_len;
int leaf,nxt,split;

struct node{
	int start,end,suffix_link;
	int next[AMAX];
	int edge_length(){
		return min(end,now_at+1)-start;
	}
};

node tree[2*MAX];
char text[MAX];

int new_node(int start,int end=INT_MAX){
	node nd;
	nd.start=start;
	nd.end=end;
	nd.suffix_link=0;
	F1(a,0,AMAX)nd.next[a]=0;
	tree[++last_added]=nd;
	return last_added;
}

char active_edge(){
	return text[active_e];
}

void add_SL(int node){
	if(needSL>0)tree[needSL].suffix_link=node;
	needSL=node;
}

bool walk_down(int node){
	if(active_len>=tree[node].edge_length()){
		active_e+=tree[node].edge_length();
		active_len-=tree[node].edge_length();
		active_node=node;
		return true;
	}
	return false;
}

void st_init(){
	needSL=0;
	last_added=0;
	now_at=-1; 
	_remainder=0;
	active_node=0;
	active_e=0;
	active_len=0;
	root=active_node=new_node(-1,-1);
}

void st_extend(char c){
	text[++now_at]=c;
	needSL=0;
	_remainder++;
	while(_remainder>0){
		if(active_len==0)active_e=now_at;
		if(tree[active_node].next[active_edge()]==0){
			leaf=new_node(now_at);
			tree[active_node].next[active_edge()]=leaf;
			add_SL(active_node);
		}else{
			nxt=tree[active_node].next[active_edge()];
			if(walk_down(nxt))continue;
			if(text[tree[nxt].start+active_len]==c){
				active_len++;
				add_SL(active_node);
				break;
			}
			split=new_node(tree[nxt].start,tree[nxt].start+active_len);
			tree[active_node].next[active_edge()]=split;
			leaf=new_node(now_at);
			tree[split].next[c]=leaf;
			tree[nxt].start+=active_len;
			tree[split].next[text[tree[nxt].start]]=nxt;
			add_SL(split);
		}
		_remainder--;
		if(active_node==root&&active_len>0){
			active_len--;
			active_e=now_at-_remainder+1;
		}else active_node=tree[active_node].suffix_link>0?tree[active_node].suffix_link:root;
	}
}

int n,m;
char x[MAX];

void dfs(int i,int j){
	if(tree[i].end==INT_MAX)tree[i].end=n;
	F1(a,tree[i].start,tree[i].end){
		if(x[a]==x[n-1-j])j++;
		else return;
	}
	if(j==n){
		m=max(m,j);
		return;
	}
	if(tree[i].next[52]||tree[i].end==n)m=max(m,j);
	if(tree[i].next[x[n-1-j]])return dfs(tree[i].next[x[n-1-j]],j);
}

int main(){
	while(scanf("%s",x)==1){
		n=strlen(x);
		st_init();
		F1(a,0,n){
			x[a]=(x[a]<='Z'?(x[a]-'A'):(x[a]-'a'+26));
			st_extend(x[a]);
		}
		st_extend(52);
		m=0;
		dfs(1,0);
		F1(a,0,n){
			x[a]=(x[a]<26?(x[a]+'A'):(x[a]-26+'a'));
			printf("%c",x[a]);
		}
		F4(a,n-1-m,0)printf("%c",x[a]);
		printf("\n");
		memset(x,0,n);
	}
	#ifdef LOCAL_PROJECT
	system("pause");
	#endif
	return 0;
}
