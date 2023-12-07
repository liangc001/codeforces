#include<bits/stdc++.h>

using namespace std;


#define maxn 110
int t;
char s[maxn];

signed main(){
    cin>>t;
    while(t--){
        scanf("%s",s);
    bool flag1=0; bool flag2=0;
        for(register int i=0;i<strlen(s);++i){
            if(s[i]=='<'){
                flag1=1;
            }
            if(s[i]=='>'){
                flag2=1;
            }
        }
        if(flag1==1&&flag2==1){
            cout<<"?"<<endl;
        }
        else if(flag1==1&&flag2==0){
            cout<<"<"<<endl;
        }
        else if(flag1==0&&flag2==1){
            cout<<">"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
    }
    return 0;
}