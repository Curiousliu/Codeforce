#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m,pos1=-1,pos2=-1;
        cin>>m;
        char p;
        for(int j=0;j<m;j++){
            cin>>p;
            if(p=='>'&&pos1==-1){
                pos1=j+1;
            }
            if(p=='<'){
                pos2=j+1;
            }
        }
        if(pos2==m||pos1==1||pos1==-1||pos2==-1) cout<<0<<endl;
        else{
            cout<<min(pos1-1,m-pos2)<<endl;
        }
    }
    return 0;
}
/*
    2:< <;> >;> <;
      < >

    3:< < <; < > <; > < <; > > <; > > >; > < >
      < < >; < > >;
*/
