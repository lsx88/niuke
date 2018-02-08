/*
2018.2.8 递推数列 
作者：廉思夏 
*/
/*
算法真实一门艺术，原来看似很简单的题目，自己算居然出现了两个意想不到的问题，第一个是溢出问题，所以即使思路是对的在oj的时候由于测试的数值过大造成溢出，因此需要每次都对10000取模
另外，递归的算法复杂度太高了,只有30%的通过率，因此改用for循环
*/
#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int a[1000],p,q;
/*int sequence(int n){
	
	if(n==2) return (p*a1+q*a0)%10000;
	if(n==3) return (p*sequence(2)+q*a1)%10000;
	else return (p*sequence(n-1)+q*sequence(n-2))%10000;
} 递归的算法复杂度太大*/ 

int main(){
	
	int k;
	
	cin>>a[0]>>a[1]>>p>>q>>k;
	for(int i=2;i<=k;i++){
		a[i]=(p*a[i-1]+q*a[i-2])%10000;
	}
	cout<<a[k];
	return 0;
} 
