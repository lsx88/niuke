/*
日期：2018.3.6
题目链接：https://www.nowcoder.com/acm/contest/69/B
作者：廉思夏 
*/
#include<iostream>
#include<bits/stdc++.h>
typedef long long ln;
using namespace std;
ln change(ln c1,ln c5,ln c10,ln c50,ln v){
	ln d=0;
	c5+=2*c10+10*c50;
	if(v%5!=0){
		d=(c5/(v/5+1))*(5-v%5);
		c1+=d;
	}
	return c1; 
}

int main(){
	int n;
	cin>>n;
	ln c1,c5,c10,c50,v;
	for(int i=1;i<=n;i++){
		cin>>c1>>c5>>c10>>c50>>v;
		cout<<change(c1,c5,c10,c50,v)<<endl;
	}
	return 0;
}
