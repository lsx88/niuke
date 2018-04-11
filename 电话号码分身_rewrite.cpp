/*
小米 
题目链接：https://www.nowcoder.com/practice/493d71a992f44554a500ed818056e1a6?tpId=85&&tqId=29895&rp=1&ru=/activity/oj&qru=/ta/2017test/question-ranking 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solute(char str[]){
	int a[90]={0};
	int b[90]={0};
	for(int i=0;i<strlen(str);i++){
	
	if(str[i]=='Z') a[0]++;
	else if(str[i]=='O') a[1]++;
	else if(str[i]=='W') a[2]++;
	else if(str[i]=='H') a[3]++;
	else if(str[i]=='U') a[4]++;
	else if(str[i]=='V') a[5]++;
	else if(str[i]=='X') a[6]++;
	else if(str[i]=='S') a[7]++;
	else if(str[i]=='G') a[8]++;
	else if(str[i]=='I') a[9]++;
	}
	a[1] = a[1]-a[0]-a[2]-a[4];
	a[3] = a[3]-a[8];
	a[7]-=a[6];
	a[5]-=a[7];
	a[9]-=(a[5]+a[6]+a[8]);
	

	while(a[8]--)
	cout<<0;
	while(a[9]--){
		cout<<1;
	}
	
	for(int i = 0;i<8;i++)
	{
	if(a[i])
	while(a[i]--)
	cout<<i+2;
	}
		cout<<endl;	
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		char str[10001];
		cin>>str;
		solute(str);
	}
	
	return 0;
}
