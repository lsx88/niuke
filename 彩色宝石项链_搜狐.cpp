/*
�Ѻ� 
��Ŀ���ӣ�https://www.nowcoder.com/questionTerminal/321bf2986bde4d799735dc9b493e0065 
��Ŀ���ѣ�������һ�㷳��Ҳ���Ǵ��ַ����ĵ�һ�����ſ�ʼ�ң�������Ǹ����ſ�ʼֱ������5����ĸ����ͳ�����м����ĸ��count��Ȼ���ҳ���С��count��
Ҳ����min��ͨ��ά�� min�Ϳ��Եó��ʺ����ٵı�ʯ�����������l-min��ѧ�߾����õ����ı�ʯ�� 
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
