/*
作者：廉思夏
日期：2018.2.26 
快速幂取模:(a*b)mod n = ((a mod n) * b ) mod n 
参考链接：http://blog.csdn.net/yangyafeiac/article/details/8707079
http://www.mamicode.com/info-detail-1199581.html
http://blog.csdn.net/lhyer/article/details/47905805 

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int root(int x,int y,int k){//快速取模，实际上就是x^ymodk=((x^2modk)^y/2)modk的不断迭代
	int Nf=1;
	x%=k;//防止x大于k 
	while(y!=0){
	//cout<<"Nf:"<<Nf<<"  x:"<<x<<"  y:"<<y<<endl;
		if(y&1)//当y是奇数,提前乘以x 
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
		/*k-1作为参数是因为要使得(N-N')%(k-1)=0,(N'-N'')%(k-1)=0,依次类推，假如Nf为最后的N，把递推的式子相加，则有，(N-Nf)%(k-1)=0,Nf=N%(k-1),
	  	若最后的Nf=0，因为我们实际要求的是Nf对k的模而不是k-1的，所以0<result<=k-1,所以result=k-1,若Nf!=0，Nf则为所求                      
		*/
		if(result==0) result=k-1;
		cout<<result<<endl;
	}
} 
