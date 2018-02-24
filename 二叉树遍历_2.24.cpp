/*
2018.2.24
题目链接：https://www.nowcoder.com/practice/4b91205483694f449f94c179883c1fef
参考连接：https://zhidao.baidu.com/question/321143462.html 
作者：廉思夏 
*/ 
/*
这道题目应该来说不是很难，反正思路还是很简单的，但是对于我来说，一些基础的操作还不够熟练，主要是先序建立二叉树的实现上不够熟练， 
还有定义结构体的时候刚开始也没有typedef，编译老是出错，参考了一下网上的博客才把找出原因， 
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
