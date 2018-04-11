/*
小米 
题目链接：https://www.nowcoder.com/practice/493d71a992f44554a500ed818056e1a6?tpId=85&&tqId=29895&rp=1&ru=/activity/oj&qru=/ta/2017test/question-ranking  
这道题目快把我气死了，数组越界...看了一晚上也看不出来 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char str[10001]={};
void solute(char str[]){
	int a[90]={0};
	int b[90]={0};
	for(int i=0;i<strlen(str);i++){
		if(str[i]=='Z') a[0]++;
		else if(str[i]=='W')	a[2]++;
		else if(str[i]=='U')	a[4]++;
		else if(str[i]=='X')	a[6]++;
		else if(str[i]=='G')	a[8]++;
		else if(str[i]=='O')	a[1]++;
		else if(str[i]=='T')	a[3]++;
		else if(str[i]=='F')	a[5]++;
		else if(str[i]=='S')	a[7]++;
		else if(str[i]=='N')	a[9]++;
		else continue;
	}
	a[1]=a[1]-a[0]-a[2]-a[4];
	a[3]=a[3]-a[2]-a[8];
	a[5]=a[5]-a[4];
	a[7]=a[7]-a[6];
	a[9]=(a[9]-a[1]-a[7])/2;
	
	for(int i=0;i<=9;i++)
		b[i]=a[(i+8)%10];
	for(int i=0;i<=9;i++){
		for(int j=0;j<b[i];j++){
			cout<<i;
		}
	}
	cout<<endl;	
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		
		scanf("%s",str);
		solute(str);
	}
	
	return 0;
}
