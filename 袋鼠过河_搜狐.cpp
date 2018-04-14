/*
题目链接：https://www.nowcoder.com/practice/74acf832651e45bd9e059c59bc6e1cbf?tpId=85&tqId=29892&tPage=4&rp=4&ru=/ta/2017test&qru=/ta/2017test/question-ranking 
动态规划 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int MAX=99999;
int a[10001];
int dp[10001];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<10001;i++)
		dp[i]=99999;
	dp[0]=0;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		for(int j=0;j<i;j++){
			if(a[j]+j>=i){
				dp[i]=min(dp[i],dp[j]+1);
			}
		}
	printf("%d",dp[n]==99999? -1:dp[n]);
	return 0;
}
