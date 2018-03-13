/*
日期：2018.3.13
题目链接：https://www.nowcoder.com/practice/a6a656249f404eb498d16b2f8eaa2c60?tpId=85&&tqId=29898&rp=1&ru=/activity/oj&qru=/ta/2017test/question-ranking 
*/ 
/*
其实这就是冒泡排序，只不过大于和小于得自己重新定义，if ab>ba,则a>b 
*/ 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int digit(int a){
	int count=0;
	while(a/10!=0){
		a/=10;
		count+=1;
	}
	return count+1;
}
bool cmp(int a,int b){
	int n=a*pow(10,digit(b))+b;
	int m=b*pow(10,digit(a))+a;
	
	 if(n>=m) return 1;
	 else return 0;
}
int main(){
	int n;
	while(cin>>n){
	int a[n];
	int max=0;
	int temp=0;
	for(int i=0;i<n;i++){
		cin>>a[i];	
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(cmp(a[i],a[j])==1){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	
	for(int i=0;i<n;i++)
	  cout<<a[i];
	cout<<endl;
}
	return 0;
}
