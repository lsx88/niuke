/* 
���ڣ�2018.2.23
��Ŀ����https://www.nowcoder.com/practice/20082c12f1ec43b29cd27c805cd476cd
���ߣ���˼�� 
*/
/*
�����ĿӦ����˵������ѣ�˼·����������ʵ�ҵ�һ���뵽�ķ������ֵ䣬����c++����û���ֵ䣬���������˽ṹ�壬���Ǻ��������ýṹ��
Ҳ����������Ϊÿ�ζ���һ����ĸ��Ҫ��һ�߽ṹ����������Ӧ����Ϣ�����Ծ�������һ�ַ����������ϲ����Ϸ���c++��map���ֵ����������
����map��������� 
*/ 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*struct phone{
	char ch;
	int group;
	int num;
}letter[32];*/
map<char,int> mapchar;
int main(){
	char key[8][4]={{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
	for(int i=0;i<8;i++)
		for(int j=0;j<4;j++){
			if(key[i][j]!=NULL) {
				/*letter[i*4+j].ch=key[i][j];
				letter[i*4+j].group=i+1;
				letter[i*4+j].num=j+1;*/
				mapchar[key[i][j]]=(i+1)*10+j+1;
			}
		}


	string str="";
	int count=0; 
	while(cin>>str){
	map<char ,int >::iterator iter1,iter2;
	iter1=mapchar.find(str[0]);	
	

	count=iter1->second%10;
	for(int k=1;k<str.length();k++){
		iter1=mapchar.find(str[k]);
		iter2=mapchar.find(str[k-1]);
		
		count+=(iter1->second)%10;
		if((iter1->second)/10==(iter2->second)/10) count+=2;
		
		
	}
	
    cout<<count<<endl;
	}
    return 0;
	
}

