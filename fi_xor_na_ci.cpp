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
	long long f0,f1;cin>>f0>>f1;
	long long f2=f0^f1;
	long long n;cin>>n;
	if((n)%3==0)cout<<f0;
	else if((n)%3==1)cout<<f1;
	else cout<<f2;
	return 0;
}
