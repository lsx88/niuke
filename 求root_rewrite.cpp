/*
���ߣ���˼��
���ڣ�2018.2.26 
������ȡģ:(a*b)mod n = ((a mod n) * b ) mod n 
�ο����ӣ�http://blog.csdn.net/yangyafeiac/article/details/8707079
http://www.mamicode.com/info-detail-1199581.html
http://blog.csdn.net/lhyer/article/details/47905805 

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int root(int x,int y,int k){//����ȡģ��ʵ���Ͼ���x^ymodk=((x^2modk)^y/2)modk�Ĳ��ϵ���
	int Nf=1;
	x%=k;//��ֹx����k 
	while(y!=0){
	//cout<<"Nf:"<<Nf<<"  x:"<<x<<"  y:"<<y<<endl;
		if(y&1)//��y������,��ǰ����x 
		  Nf=(Nf*x)%k;
		y/=2;
		x=(x*x)%k; 
	}
	//cout<<"Nf:"<<Nf<<"  x:"<<x<<"  y:"<<y<<endl;
	return Nf;
}
int main(){
	int x,y,k;
	int result;
	while(cin>>x>>y>>k){
		result=root(x,y,k-1);
		/*k-1��Ϊ��������ΪҪʹ��(N-N')%(k-1)=0,(N'-N'')%(k-1)=0,�������ƣ�����NfΪ����N���ѵ��Ƶ�ʽ����ӣ����У�(N-Nf)%(k-1)=0,Nf=N%(k-1),
	  	������Nf=0����Ϊ����ʵ��Ҫ�����Nf��k��ģ������k-1�ģ�����0<result<=k-1,����result=k-1,��Nf!=0��Nf��Ϊ����                      
		*/
		if(result==0) result=k-1;
		cout<<result<<endl;
	}
} 
