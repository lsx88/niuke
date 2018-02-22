/*
日期：2.21
作者：廉思夏
题目链接：https://www.nowcoder.com/practice/376537f4609a49d296901db5139639ec
参考链接：http://blog.csdn.net/clamercoder/article/details/24363817 
*/
/*
这道题对我来说其实是挺难的，因为从一开始整体的方向就错了，刚开始想到的思路是使用递归，但是后来我知道这种方法一定是不行的，
因为算法复杂度太大，因此这个时候就得像数列一样去寻找测试数据n和n+1前后关系，这样可以很大程度的降低算法复杂度，但是我
花了很长时间并没有找到合适的解法，因此实在忍不住去参考了网上的博客，发现当N为奇数时，f(N) = f(N-1); 当N为偶数时，N的
拆分可分为包含1和不包含1的情况，前者与N-1的情况相同，即与N-2的情况相同，后者最小拆分到2，将各项除以2可知与N/2的情况相同
*/ 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a[1000001];
void f(int n){
	
    int i;
    a[0]=a[1]=1;
   	
	for(i=2;i<=n;i++){
		if(i%2==1) a[i]=a[i-1];
		else    a[i]=(a[i-1]+a[i/2])%1000000000;//a[i]就是i的拆分总数 
		
	} 
	cout<< a[i-1];		
}
int main(){
	int n;
	while(cin>>n){
	 f(n);
	}
	return 0;
}
