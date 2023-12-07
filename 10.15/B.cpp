#include<bits/stdc++.h>
using namespace std;

const int maxn=1010;
char a[maxn][maxn];
int n,m;

int findx(int x){
    int ans=0;
    int sum=0;
    for(int i=1;i<=m;i++){
        if(a[x][i]=='>') sum++;
        else if(a[x][i]=='<') ans+=sum;
        else sum=0;
    }
    return ans;
}

int findy(int y){
    int ans=0;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(a[i][y]=='v') sum++;
        else if(a[i][y]=='^') ans+=sum;
        else sum=0;
    }
    return ans;
}

signed main(){
    int ans=0;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%s",a[i]+1);

    for(int i=1;i<=n;i++) ans+=findx(i); 
    for(int i=1;i<=m;i++) ans+=findy(i); 
    cout<<ans;
    return 0;
}
