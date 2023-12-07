#include<bits/stdc++.h>
#define int long long
using namespace std;

#define maxn 100010
inline int read(){
    int x=0,t=1; char ch=getchar();
    while((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
    if(ch=='-') t=-1,ch=getchar();
    while(ch<='9'&&ch>='0') x=x*10+ch-48,ch=getchar();
    return x*t;
}
int t;

int n,x;
bool flag=0;
int a[maxn],b[maxn];

signed main(){
    cin>>t;
    while(t--){
        for(register int i=1;i<=n;++i) a[i]=b[i]=0;
        cin>>n>>x; flag=0;
        for(register int i=1;i<=n;++i){
            b[i]=a[i]=read();
        }
        sort(b+1,b+1+n);
        for(register int i=1;i<=n;++i){
            if(a[i]==b[i]) continue;
            // cout<<a[i]<<" "<<b[i]<<endl;
            if(i<=x&&i+x>n){
                flag=1; break;
            }
        }
        if(flag==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}