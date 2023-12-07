#include<bits/stdc++.h>
using namespace std;
#define maxn 1010

int t;
int max1,max2;
int num1;
int n,H,ans;
int a[maxn];

int main(){
    cin>>t;
    while(t--){
        max1=0; max2=0; ans=0;
        cin>>n>>H; num1=0;
        for(register int i=1;i<=n;++i){
            cin>>a[i];
            if(a[i]==max1){
                num1++;
            }
            else if(a[i]>max1){
                max1=a[i];
                num1=1;
            }
        }
        for(register int i=1;i<=n;++i){
            if(a[i]<max1){
                max2=max(max2,a[i]);
            }
        }
        if(num1>1){
            ans=(H%max1==0?H/max1:H/max1+1);
        }
        else{
            int max_now=max1+max2;
            int yu=H%max_now;
            if(yu==0)ans=(H/max_now)*2;
            else{
                if(yu>max1){
                    ans=(H/max_now)*2+2;
                }
                else{
                    ans=(H/max_now)*2+1;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}