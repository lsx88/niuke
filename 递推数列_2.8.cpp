/*
2018.2.8 �������� 
���ߣ���˼�� 
*/
/*
�㷨��ʵһ��������ԭ�����ƺܼ򵥵���Ŀ���Լ����Ȼ�������������벻�������⣬��һ����������⣬���Լ�ʹ˼·�ǶԵ���oj��ʱ�����ڲ��Ե���ֵ�����������������Ҫÿ�ζ���10000ȡģ
���⣬�ݹ���㷨���Ӷ�̫����,ֻ��30%��ͨ���ʣ���˸���forѭ��
*/
#include<iostream>
#include<math.h> 
using namespace std;
int a[1000],p,q;
/*int sequence(int n){
	
	if(n==2) return (p*a1+q*a0)%10000;
	if(n==3) return (p*sequence(2)+q*a1)%10000;
	else return (p*sequence(n-1)+q*sequence(n-2))%10000;
} �ݹ���㷨���Ӷ�̫��*/ 

int main(){
	
	int k;
	
	cin>>a[0]>>a[1]>>p>>q>>k;
	for(int i=2;i<=k;i++){
		a[i]=(p*a[i-1]+q*a[i-2])%10000;
	}
	cout<<a[k];
	return 0;
} 
