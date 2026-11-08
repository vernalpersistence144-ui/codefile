#include <bits/stdc++.h>
using namespace std;
int f(int a){
	string b=to_string(a);
	int c=b.size();
	return c;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a;cin>>a;
	string b;cin>>b;
	long long ans=0;
	int i=0;
	while(i<b.size()){
		for(int j=0;j<a.size();j++){
			if(i-1==b.size())break;
			if(a[j]==b[i]){
				i++;
			}
		}
		ans++;
	}
	cout<<ans;
	return 0;
}
