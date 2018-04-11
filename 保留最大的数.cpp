/*
日期：2018.4.11
题目链接:https://www.nowcoder.com/practice/7f26bfeccfa44a17b6b269621304dd4a?tpId=85&tqId=29890&tPage=4&rp=4&ru=/ta/2017test&qru=/ta/2017test/question-ranking
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string str="";
void choose(){
	for(int i=0;i<str.length();i++){
		if(str[i+1]>str[i])	{
			str.erase(str.begin()+i);	
			break;
	}
		if(i==(str.length()-1)) str.erase(str.end()-1);
}
}
int main(){
	int m;
	cin>>str;
	cin>>m;
	int b[50001];
	int l=str.length();
	for(int i=0;i<m;i++){
		choose();
	}
	cout<<str;
	return 0;
}



