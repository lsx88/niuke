/*
2018.2.7
作者：廉思夏 
题目：质因数 
题目连接：https://www.nowcoder.net/practice/20426b85f7fc4ba8b0844cc04807fbd9 
*/
/*
这道题其实并不难，一个循环便可以求出所有的质因数，只是如果简单地用i<n循环的话，得出的复杂度太高，通过概率只有95%，所以必须
降低算法复杂度，联系之前约数的算法，可以用i*i<=n的做法来降低复杂度，然后假如sqrt(n)之前的质因数相乘小于sqrt(n)，说明还有
一个质因数大于sqrt(n),因此count+=1 
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
