#include <bits/stdc++.h>
using namespace std;
int mins=-1e9;
int x[]={-1,-1,-1,0,0,1,1,1};
int y[]={-1,0,1,-1,1,-1,0,1};
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m,k;cin>>n>>m>>k;
	vector < vector<int> > a(n,vector<int>(m,0));
	while (k--){
		int r,s;cin>>r>>s;
		a[r-1][s-1]+=mins;
		for(int i=0;i<8;i++){
			int b=r+x[i]-1;
			int c=s+y[i]-1;
			if((0<=b&&b<n)&&(0<=c&&c<m))a[b][c]+=1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]<0)cout<<"B"<<" ";
			else cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
