/*
大数阶乘 题目链接:https://www.nowcoder.com/practice/f54d8e6de61e4efb8cce3eebfd0e0daa 
参考链接:http://blog.csdn.net/lisp1995/article/details/52403507 
日期：2018.2.28
作者：廉思夏 
*/
/*
这道题题目考核的其实是乘法的另外一种表示方法，因为如果直接表示阶乘的结果，最后的测试数据会太大，
即便是long double也不能够准确表示，所以只能够用数组来表示最后的结果,然后，过程其实就是乘法运算的具体过程，
每一位都用数组中的一个元素来表示，最后全部输出来 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int num=0;
/*long double factorial(long double n){
	if(n==1) return 1;
	return n*factorial(n-1);
}*/

void factoria(int a[],int n){
    
	int digit=1; 
	int carry=0;//进位 
	int temp=0; 
	a[1]=1;
	for(int i=1;i<=n;i++){
	   for(int j=1;j<=digit;j++){
	   		//cout<<"$$$$$$$$$$"<<endl;
	   		temp=i*a[j]+carry;
	   		a[j]=temp%10;
	   		carry=temp/10;
	   }
	   while(carry!=0){
	   	digit+=1;
	   	a[digit]=carry%10;
	   	carry/=10;
	   }
	}
	num=digit;
			
	
}

int main(){
	
	int n;
	int result[5000]={0};
	while(cin>>n){
		//printf("%.0Lf",factorial(n));
		//cout<<factorial(n);
		
		factoria(result,n);
	
		for(int i=num;i>=1;i--)
			cout<<result[i];
		
	}
	return 0;
}
