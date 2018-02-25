/*
快速幂取模:(a*b)mod n = ((a mod n) * b ) mod n
参考链接：http://blog.csdn.net/yangyafeiac/article/details/8707079
http://www.mamicode.com/info-detail-1199581.html
http://blog.csdn.net/lhyer/article/details/47905805 

*/
/*
这道题的思路本身非常简单，我刚开始用我最笨拙的方法算出了结果，其实结果是正确的，但是不管怎么样就是过不了，因为算法复杂度太大，
在挣扎了一个晚上之后还是想不出更好的优化方法了，网上一查，原来还有一个关于快速幂的计算方法，时间复杂度为O（logy）,虽然看了几遍
推导过程，但是其实还是理解的不够透彻，还得重看,多用才能牢记这种方法 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*int kHex(double N,int k){
	int r;
	int count=0;
	while(N!=0){
		r=fmod(N,k);
		N=N/k;
	
		count+=r;	
	}
	return count;
}
int root(double N,int k){
	 
	while(N>=k) {
	N=kHex(N,k);
	
	}
	return N;
	
}*/
int PowerMod(int x, int y, int k){
int ans = 1;
x = x % k;
while(y>0)
{
if(y % 2 == 1)
ans = (ans * x) % k;
y = y/2;
x = (x * x) % k;
}
return ans;
}

int main(){
	int x,y,k;
	int result;
	while(cin>>x>>y>>k){
	int result=PowerMod(x,y,k-1);
	if(result==0) result=k-1;
	cout<<result;
	}
	return 0;
}
