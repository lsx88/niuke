/*
2018.2.7
���ߣ���˼�� 
��Ŀ�������� 
��Ŀ���ӣ�https://www.nowcoder.net/practice/20426b85f7fc4ba8b0844cc04807fbd9 
*/
/*
�������ʵ�����ѣ�һ��ѭ�������������е���������ֻ������򵥵���i<nѭ���Ļ����ó��ĸ��Ӷ�̫�ߣ�ͨ������ֻ��95%�����Ա���
�����㷨���Ӷȣ���ϵ֮ǰԼ�����㷨��������i*i<=n�����������͸��Ӷȣ�Ȼ�����sqrt(n)֮ǰ�����������С��sqrt(n)��˵������
һ������������sqrt(n),���count+=1 
*/

#include<iostream>
#include<math.h>
using namespace std;
void factor(int n){
	int count=0;
    int m=1;
    int p=n;
    //for(int i=2;i<=p;i++){
	for(int i=2;i*i<=p;i++){
		while(n%i==0){
			n/=i;
			count+=1;
   			//cout<<i<<"*";
   			m*=i;
		}	
	}
	//cout<<endl;
	//cout<<m<<endl;
	if(m<sqrt(p)){
	count+=1;
	}
	cout<<count<<endl;
} 
int main(){
	int n;
	while(cin>>n)
	factor(n);
	return 0;
} 
