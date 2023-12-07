
#include<stdio.h>
#include<iostream>
#include<string.h>
#include <algorithm>
const int L=100020;
const int mod=1e9 + 7;
typedef long long ll;
using namespace std;
 
int num[26][L];///num[i][j]表示第i个字母在位置j出现的次数
int bj[26];///标记字母有没有在首位出现
int Mi[L],sum[L];///分别表示26的幂和某一个字母总共的次方和
int max_len=-1;
int n,Case=0;;
char str[L];///保存输入的字符串
int a[26];///含义就是说a[i]=j表示i这个数字对应的是字母(j+'a')
void inif()///所有的数组完成一个初始化的功能
{
    memset(num,0,sizeof(num));
    memset(bj,0,sizeof(bj));
    memset(sum,0,sizeof(sum));
}
 
///这个排序也就是相当于将每一个字母所对应的数字按照从小到大的顺序排好
bool cmp(int n1,int n2)/// 用n1，n2分别表示的是两个字母（该字母可以表示为n1+'a',n2+'a'）,并不是他们所对应的数字 
{
    for(int i=max_len-1; i>=0; i--)
    {
        if(num[n1][i]!=num[n2][i])
            return num[n1][i]<num[n2][i];///然后按照这两个字母在同一个位置出现次数按照从小到大排序
    }
    return 0;
}
void solve()
{
    inif();
    for(int i=0; i<n; i++)
    {
        scanf(" %s",str);
        int len=strlen(str);
        if(len>1)
            bj[str[0]-'a']=1;
        reverse(str , str + len);///字符串倒置，就是将整个字符串的位置颠倒过来
        for(int j=0; j<len; j++)
        {
            num[str[j]-'a'][j]++;///该字母在当前位出现的次数加加
            sum[str[j]-'a']+=Mi[j];
            /*
            最开始的时候不理解这里是什么意思，就是说不管一个字母表示的数字如何变化，但是它所在的位数是不会
            变化的，也就是说它后面需要乘上的26的几次方不会发生变化
            */
            if(sum[str[j]-'a']>=mod)
                sum[str[j]-'a']%=mod;
        }
        max_len=max(len,max_len);
    }
        for(int i=0; i<26; i++)
        {
            for(int j=0; j<max_len; j++)
            {
                num[i][j+1]+=num[i][j]/26;
                num[i][j]%=26;
            }
            while(num[i][max_len])///是说最高位上的某个字母的个数已经超过26了，为了计算方便则向前进一位
            {
                num[i][max_len+1]=num[i][max_len]/26;///看能不能向前进一位
                num[i][max_len]%=26;///保留当前位上的个数
                max_len++;///字符串总长度及加
            }
            a[i]=i;///表示的是当前字母所对应的数字，暂时先这样定义，也相当于一个初始化过程
        }
 
        sort(a,a+26,cmp);///关键在于看懂这个函数的排序规则，排完之后就是每一个字母所对应的数字了
 
        int ans=-1;
        for(int i=0; i<26; i++)
        {
            if(!bj[a[i]])
            {
                ans=a[i];
                break;
            }
        }
 
    int res=0,x=25;
    for(int i=25; i>=0; i--)
    {
        if(a[i]!=ans)
        {
           // printf("%d    %d\n",a[i],sum[a[i]]);
            res+=(ll)(x--)*sum[a[i]]%mod;///只有这个字母出现过，sum[a[i]]才有值
            res%=mod;
        }
    }
 
    printf("Case #%d: %d\n",++Case,res);
 
}
int main()
{
    Mi[0]=1;
    for(int i=1; i<L; i++)
    {
        Mi[i]=(ll)Mi[i-1]*26%mod;
        //printf("%d\n",Mi[i]);
    }
    while(~scanf("%d",&n))
    {
        solve();
    }
}
