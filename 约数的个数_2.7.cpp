/*
*作者：廉思夏
*2018.2.7
*约数的个数 
*/

/* 
*这道题应该来说比较简单，但是有一点需要注意，就是在求约数，循环的时候应该循环根号n次而不是n/2次，这样可以避免很多无谓的运算， 
*以最小的算法复杂度来求出正确的答案才是我们要做的，而不是仅仅求一个答案 
*参考链接 https://zhidao.baidu.com/question/565505959255455924.html
*题目链接 https://www.nowcoder.net/practice/04c8a5ea209d41798d23b59f053fa4d6 
*/ 

#include<iostream>
using namespace std;
void submultiple(int n){
	int count=0;
	//for(int i=1;i<=n/2;i++){
	for(int i=1;i*i<=n;i++){
		if(n%i==0) {
			count+=1;
			if(i*i!=n) count+=1;
	}
	}
	//count+=count; 
	cout<<count<<endl;
}
int main(){
	int n;
	int a[1000];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	    submultiple(a[i]);
	return 0;
}
