/*
������ȡģ:(a*b)mod n = ((a mod n) * b ) mod n
�ο����ӣ�http://blog.csdn.net/yangyafeiac/article/details/8707079
http://www.mamicode.com/info-detail-1199581.html
http://blog.csdn.net/lhyer/article/details/47905805 

*/
/*
������˼·����ǳ��򵥣��Ҹտ�ʼ�����׾�ķ�������˽������ʵ�������ȷ�ģ����ǲ�����ô�����ǹ����ˣ���Ϊ�㷨���Ӷ�̫��
��������һ������֮�����벻�����õ��Ż������ˣ�����һ�飬ԭ������һ�����ڿ����ݵļ��㷽����ʱ�临�Ӷ�ΪO��logy��,��Ȼ���˼���
�Ƶ����̣�������ʵ�������Ĳ���͸���������ؿ�,���ò����μ����ַ��� 
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
