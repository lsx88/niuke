/*
�����׳� ��Ŀ����:https://www.nowcoder.com/practice/f54d8e6de61e4efb8cce3eebfd0e0daa 
�ο�����:http://blog.csdn.net/lisp1995/article/details/52403507 
���ڣ�2018.2.28
���ߣ���˼�� 
*/
/*
�������Ŀ���˵���ʵ�ǳ˷�������һ�ֱ�ʾ��������Ϊ���ֱ�ӱ�ʾ�׳˵Ľ�������Ĳ������ݻ�̫��
������long doubleҲ���ܹ�׼ȷ��ʾ������ֻ�ܹ�����������ʾ���Ľ��,Ȼ�󣬹�����ʵ���ǳ˷�����ľ�����̣�
ÿһλ���������е�һ��Ԫ������ʾ�����ȫ������� 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int num=0;
/*long double factorial(long double n){
	if(n==1) return 1;
	return n*factorial(n-1);
}*/

void factoria(int a[],int n){
    
	int digit=1; 
	int carry=0;//��λ 
	int temp=0; 
	a[1]=1;
	for(int i=1;i<=n;i++){
	   for(int j=1;j<=digit;j++){
	   		//cout<<"$$$$$$$$$$"<<endl;
	   		temp=i*a[j]+carry;
	   		a[j]=temp%10;
	   		carry=temp/10;
	   }
	   while(carry!=0){
	   	digit+=1;
	   	a[digit]=carry%10;
	   	carry/=10;
	   }
	}
	num=digit;
			
	
}

int main(){
	
	int n;
	int result[5000]={0};
	while(cin>>n){
		//printf("%.0Lf",factorial(n));
		//cout<<factorial(n);
		
		factoria(result,n);
	
		for(int i=num;i>=1;i--)
			cout<<result[i];
		
	}
	return 0;
}
