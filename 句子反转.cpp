/*
水题
题目链接：https://www.nowcoder.com/practice/0ae4a12ab0a048ee900d1536a6e98315?tpId=85&&tqId=29896&rp=1&ru=/activity/oj&qru=/ta/2017test/question-ranking
日期：2018.3.22
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string str[100];
int main(){
	string a;
	int i=0;
	while(cin>>a){
		str[i]=a;
		i++;
		if(getchar()=='\n'){
			for(int j=i-1;j>0;j--)
				cout<<str[j]<<" ";
			cout<<str[0];
			i=0;
			
		}
	}
	return 0;
}
