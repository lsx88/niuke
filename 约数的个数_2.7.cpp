//�����Ӧ����˵�Ƚϼ򵥣�������һ����Ҫע�⣬��������Լ����ѭ����ʱ��Ӧ��ѭ������n�ζ�����n/2�Σ��������Ա���ܶ���ν�����㣬 
//����С���㷨���Ӷ��������ȷ�Ĵ𰸲�������Ҫ���ģ������ǽ�����һ���� 
//�ο����� https://zhidao.baidu.com/question/565505959255455924.html
//��Ŀ���� https://www.nowcoder.net/practice/04c8a5ea209d41798d23b59f053fa4d6 
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
