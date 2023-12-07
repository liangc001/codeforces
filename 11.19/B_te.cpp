
#include<stdio.h>
#include<iostream>
#include<string.h>
#include <algorithm>
const int L=100020;
const int mod=1e9 + 7;
typedef long long ll;
using namespace std;
 
int num[26][L];///num[i][j]��ʾ��i����ĸ��λ��j���ֵĴ���
int bj[26];///�����ĸ��û������λ����
int Mi[L],sum[L];///�ֱ��ʾ26���ݺ�ĳһ����ĸ�ܹ��Ĵη���
int max_len=-1;
int n,Case=0;;
char str[L];///����������ַ���
int a[26];///�������˵a[i]=j��ʾi������ֶ�Ӧ������ĸ(j+'a')
void inif()///���е��������һ����ʼ���Ĺ���
{
    memset(num,0,sizeof(num));
    memset(bj,0,sizeof(bj));
    memset(sum,0,sizeof(sum));
}
 
///�������Ҳ�����൱�ڽ�ÿһ����ĸ����Ӧ�����ְ��մ�С�����˳���ź�
bool cmp(int n1,int n2)/// ��n1��n2�ֱ��ʾ����������ĸ������ĸ���Ա�ʾΪn1+'a',n2+'a'��,��������������Ӧ������ 
{
    for(int i=max_len-1; i>=0; i--)
    {
        if(num[n1][i]!=num[n2][i])
            return num[n1][i]<num[n2][i];///Ȼ������������ĸ��ͬһ��λ�ó��ִ������մ�С��������
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
        reverse(str , str + len);///�ַ������ã����ǽ������ַ�����λ�õߵ�����
        for(int j=0; j<len; j++)
        {
            num[str[j]-'a'][j]++;///����ĸ�ڵ�ǰλ���ֵĴ����Ӽ�
            sum[str[j]-'a']+=Mi[j];
            /*
            �ʼ��ʱ�����������ʲô��˼������˵����һ����ĸ��ʾ��������α仯�����������ڵ�λ���ǲ���
            �仯�ģ�Ҳ����˵��������Ҫ���ϵ�26�ļ��η����ᷢ���仯
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
            while(num[i][max_len])///��˵���λ�ϵ�ĳ����ĸ�ĸ����Ѿ�����26�ˣ�Ϊ�˼��㷽������ǰ��һλ
            {
                num[i][max_len+1]=num[i][max_len]/26;///���ܲ�����ǰ��һλ
                num[i][max_len]%=26;///������ǰλ�ϵĸ���
                max_len++;///�ַ����ܳ��ȼ���
            }
            a[i]=i;///��ʾ���ǵ�ǰ��ĸ����Ӧ�����֣���ʱ���������壬Ҳ�൱��һ����ʼ������
        }
 
        sort(a,a+26,cmp);///�ؼ����ڿ�����������������������֮�����ÿһ����ĸ����Ӧ��������
 
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
            res+=(ll)(x--)*sum[a[i]]%mod;///ֻ�������ĸ���ֹ���sum[a[i]]����ֵ
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
