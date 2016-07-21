#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int field[101][101];
int m,n,out=0;
void run(){
}
void dfs(int x,int y){
	field[x][y]=2;
	for (int i=x-1;i<=x+1;i++)
		for (int j=y-1;j<=y+1;j++)
			if (i>=0 && i<m && j>=0 && j<n && field[i][j]==1) dfs(i,j);
}
int main(){
	
	scanf("%d%d\n",&m,&n);
	
	while(m!=0){
		
		//cout<<m<<" "<<n;
		out=0;
		char row[101];

			for(int i=0;i<m;i++){
				fgets(row,101,stdin);
				//cout<<"output: "<<row;
				for(int j=0;j<n;j++){
					if(row[j]=='*')
						field[i][j]=0;
					if(row[j]=='@')
						field[i][j]=1;
				}
				
			}
		//cout<<"\n"<<field[0][0];
		run();
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(field[i][j]==1){
					out++;
					dfs(i,j);
				}
			}
		}
		printf("%d\n",out);
		scanf("%d%d\n",&m,&n);
	}

}
