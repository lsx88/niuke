/*
2018.2.24
��Ŀ���ӣ�https://www.nowcoder.com/practice/4b91205483694f449f94c179883c1fef
�ο����ӣ�https://zhidao.baidu.com/question/321143462.html 
���ߣ���˼�� 
*/ 
/*
�����ĿӦ����˵���Ǻ��ѣ�����˼·���Ǻܼ򵥵ģ����Ƕ�������˵��һЩ�����Ĳ�����������������Ҫ����������������ʵ���ϲ��������� 
���ж���ṹ���ʱ��տ�ʼҲû��typedef���������ǳ����ο���һ�����ϵĲ��ͲŰ��ҳ�ԭ�� 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef struct node{
	char value;
	struct node *left;
	struct node *right;
}*tree;
tree CreatTree(){
	char ch;
	cin>>ch;
	tree t;
	if(ch=='#') t=NULL;
	else{
		t=(tree)malloc(sizeof(node));
		t->value=ch;
		t->left=CreatTree();
		t->right=CreatTree();
	}
	return t;
}
void traversal(tree t){
	if(t!=NULL){	
	traversal(t->left);
	cout<<t->value<<" ";
	traversal(t->right);
}
}
int main(){
	tree t;
	t=CreatTree();
	traversal(t);
	return 0;
	 
}
