/*
分数求模-费马小定理 
快速幂 
题目链接：https://www.nowcoder.com/acm/contest/80/B
参考链接：https://www.cnblogs.com/zhumengdexiaobai/p/8728927.html
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int md=998244353;

ll kuai(ll a,ll b){
	int ans=1;
	a=a%md;
	b=b%md;
	while(b>0){
		if(b%2==1)
			ans=(ans*a)%md;
		a=(a*a)%md;
		b=b/2;		
	}
	return ans;
}

int main(){
	ll a;
	ll  n,m;
	cin>>n>>m;
	ll b,x,r;
	b=(n*n-m)%md;
	x=kuai(n*n,md-2)%md;
	//b=n;
	//x=kuai(m,md-2)%md;
	r=b*x%md;
	cout<<r;
	return 0;
}
