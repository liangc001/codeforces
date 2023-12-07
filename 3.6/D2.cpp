#include <bits/stdc++.h>
using namespace std;
#define MAX 0x7fffffff
#define int long long
const int mod = 1e9+7;
const int maxn = 30;
int cnt1,cnt2,t,mi1,mi2,l1,l2,res1,res2;
double ans;
bool vis1[maxn],vis2[maxn];
char s1[maxn],s2[maxn],tep1[maxn],tep2[maxn];
int get_ans(char* x,int l){
	int tep=1,res=0;
	for(int i=l-1;i>=0;i--){
		res+=tep*(x[i]-'0');
		tep*=10;
	}
	return res;
}
void dfs(int x,int y){
	if(x==l1-1&&y==l2-1) return ;
	for(int i=0;i<l1;i++){
		if(vis1[i]) continue;
			for(int j=0;j<l2;j++){
				if(vis2[j]) continue;
 				if(s1[i]==s2[j]){
 					memset(tep1,0,sizeof(tep1));
 					memset(tep2,0,sizeof(tep2));
					cnt1=0,cnt2=0;//cout<<"k:";
					for(int k=0;k<l1;k++){ 
						if(k==i||vis1[k])		 
						continue;
				//		cout<<k<<" ";
						tep1[cnt1++]=s1[k];		
				}//cout<<endl;
				//	printf("i:%lld tep1:%s cnt1:%lld \nk:",i,tep1,cnt1);
					int tt1=get_ans(tep1,cnt1);
					for(int k=0;k<l2;k++){
						if(k==j||vis2[k])
						continue;
						tep2[cnt2++]=s2[k];
				//		cout<<k<<" ";				
				}//cout<<endl;
				//	printf("j:%lld tep2:%s cnt2:%lld \n",j,tep2,cnt2);
					int tt2=get_ans(tep2,cnt2);
					if(tt1==0||tt2==0) continue;
					if(tt1*1.0/tt2==ans){
						if(tt1<mi1||cnt1<mi2){
						mi1=tt1;
						mi2=cnt1;
						res2=tt2;
						res1=tt1;	
					}
					}
					vis1[i]=1;vis2[j]=1;
				//	printf("i:%lld j:%lld\n",i,j);
					dfs(i,j);
					vis1[i]=0;vis2[j]=0;
				}
			}
		}
		return ;
}
signed main(){
	scanf("%lld",&t);
	while(t--){
		memset(vis1,0,sizeof(vis1));
		memset(vis2,0,sizeof(vis2));
		scanf("%s%s",s1,s2);
		mi1=0x3f3f3f;mi2=100;
		l1=strlen(s1),l2=strlen(s2);
		res1=get_ans(s1,l1),res2=get_ans(s2,l2);
		ans=res1*1.0/res2;
		cnt1=0,cnt2=0;
		dfs(0,0);
		printf("%lld %lld\n",res1,res2);
	}
	return 0;
}
