/* 
日期：2018.2.23
题目链接https://www.nowcoder.com/practice/20082c12f1ec43b29cd27c805cd476cd
作者：廉思夏 
*/
/*
这道题目应该来说不算很难，思路很清晰，其实我第一个想到的方法是字典，但是c++里面没有字典，所以我用了结构体，但是后来发现用结构体
也不好做，因为每次读入一个子母都要过一边结构体来查找相应的信息，所以决定用另一种方法，在网上查资料发现c++的map和字典很想像，于是
就用map来做这道题 
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

