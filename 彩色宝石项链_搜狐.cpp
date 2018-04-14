/*
搜狐 
题目链接：https://www.nowcoder.com/questionTerminal/321bf2986bde4d799735dc9b493e0065 
题目不难，不过有一点烦，也就是从字符串的第一个符号开始找，计算从那个符号开始直到找齐5个字母，再统计这中间的字母数count，然后找出最小的count，
也就是min，通过维护 min就可以得出皇后最少的宝石个数，最后用l-min，学者就能拿到最多的宝石了 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string str;
struct quene{
	char ch;
	bool flag;
}q[10];
bool find(char c){
	for(int i=0;i<5;i++){
		if(q[i].ch==c&&q[i].flag==1) {
		q[i].flag=0;
		return 1;
	}
	}
	return 0;
}
int main(){	
	cin>>str;
	int l=str.length();
	int min=99999;	
	for(int i=0;i<str.length();i++){
		int count=0;
		int num=5;
		for(int k=0;k<5;k++){
			q[k].ch='A'+k;
			q[k].flag=1;
		}
		for(int j=i;j<i+str.length();j++){
			count++;
			if(find(str[j%l])){
				num--;		
			}
			if(num==0) break;
		}
		if(count<min)	min=count;
	}
	cout<<l-min;	
	return 0;
}
