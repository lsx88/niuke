/*
题目链接：https://www.nowcoder.com/practice/4faa2d4849fa4627aa6d32a2e50b5b25?tpId=85&&tqId=29897&rp=1&ru=/activity/oj&qru=/ta/2017test/question-ranking
日期：2018.3.20
作者：廉思夏 
*/ 
/*
题目好坑，看了其他同志的思路才知道，虽然题目说是合法二叉树，但是，测试样例中还是会有很多
不合法的二叉树出现，所以需要把二叉树变得合法，也就是说，只需要最左边的两个子结点就可以了，
其他结点砍掉
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int mh=0;
typedef struct node{
	int v=-1;
	int l=0;
	int r=0;
}node;

void visit(node tree[],int k,int max,int h){
	h++ ;
	if(h>=mh){
	mh=h;
	}
	if(tree[k].l!=0) visit(tree,tree[k].l,max,h);
	if(tree[k].r!=0) visit(tree,tree[k].r,max,h);

}

int main(){
	int n;
	cin>>n;
	node tree[n];
	int max=0;
    int h=0;
	int a,b;
	for(int i=0;i<n-1;i++){	
		cin>>a>>b;
		tree[a].v=a;
		tree[b].v=b;
		if(tree[a].l==NULL)
		tree[a].l=b;
	
		else {
			if(tree[a].r==NULL)	tree[a].r=b;
			else continue;
		}
	}
	

	visit(tree,0,max,h);
	cout<<mh<<endl;
  
	return 0;
	
}
