/*
参考链接：https://blog.csdn.net/dsaghjkye/article/details/79870618
深刻理解在mod情况下逆元的含义2mod(m),的逆元为m/2+1 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll kuai(ll a,ll b,ll md){
	a=a%md;
	b=b%md;
	ll res=1;
	while(b>0){
		if(b%2==1)
			res=res*a%md;
		a=a*a%md;;
		b=b/2;
	}
	return res;
}
int main(){
	int n;
	ll m;
	while(cin>>n>>m){
	int num;
	ll a[n][n],b[n][n],c[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			cin>>num;
			a[i][j]=num;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			ll mm=m/2+1;
		c[i][j]=((a[i][j]-a[j][i])*mm%m+m)%m;
		//c[i][j]=((a[i][j]-a[j][i])/2+m)%m;
		//c[i][j]=(kuai(2,m-2,m)*(a[i][j]-a[j][i])%m+m)%m;
	}
}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){	
			cout<<c[i][j]<<" ";
	}
	cout<<c[i][n-1]<<endl;
}
}
 
	return 0;
}
