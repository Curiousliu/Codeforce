#include <bits/stdc++.h>
using namespace std;
typedef struct songs{
    int l,b;
    const bool operator<(const songs S) const{ //sort从大到小排列
        return b>S.b;
    }
}song;
int main()
{
    int n,k;
    long long sum=0,ans=0;
    cin>>n>>k;
    song s[n];
    priority_queue<int,vector<int>,greater<int> > Q; //小顶堆
    for(int i=0;i<n;i++){
        cin>>s[i].l>>s[i].b;
    }
    sort(s,s+n);
    for(int i=0;i<n;i++){
        sum+=s[i].l;
        if(Q.size()<k){
            Q.push(s[i].l);
        }
        else{
            sum-=Q.top();
            Q.pop();
            Q.push(s[i].l);
        }
        ans=max(ans,sum*s[i].b);
    }
    cout<<ans;
    return 0;
}
