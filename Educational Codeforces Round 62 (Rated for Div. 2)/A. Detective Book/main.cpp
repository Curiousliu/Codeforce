#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,maxn=0,days=0;

    cin>>n;
    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        if(temp>maxn) maxn=temp;
        if(i==maxn){
            days++;
            continue;
        }
        maxn=max(i,maxn);
    }
    cout<<days;
    return 0;
}
