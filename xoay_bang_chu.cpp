#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define str string
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
using namespace std;
vector<str> rotate90(vector<str> table){
    int r=table.size();
    int c=table[0].size();
    vector<str> ans(c, str(r, ' '));
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            ans[j][r-1-i] = table[i][j];
        }
    }
    return ans;
}
vector<str> rotate45(vector<str> table){
    int r=table.size();
    int c=table[0].size();
    int total_lines = r + c - 1;
    vector<str> ans;
    for (int line=0; line<total_lines; line++) {
        str cur = "";
        int spaces = abs(r - 1 - line);
        cur.append(spaces, ' ');
        bool first = true;
        for (int i=r-1; i>=0; i--) {
            int j = line - i;
            if (j>=0 && j<c) {
                if (!first) {
                    cur += ' ';
                }
                cur += table[i][j];
                first = false;
            }
        }
        ans.push_back(cur);
    }
    return ans;
}
int main (){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r,c;cin>>r>>c;
    vector<str> table(r);
    for(int i=0;i<r;i++){
        cin>>table[i];
    }
    int k;cin>>k;
    k%=360;
    int rotation90 = k/90;
    bool rotation45 = k%90!=0;
    for(int i=0;i<rotation90;i++){
        table=rotate90(table);
    }
    if(rotation45)table=rotate45(table);
    for(string a:table)cout<<a<<"\n";
	return 0;
}
