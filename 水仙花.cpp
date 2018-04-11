#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool flower(int n){
	int count=0;
	int r=n;
	while(n>0){
	count+=pow(n%10,3);
	n=n/10;
	}	
	if(count==r)  return 1;
	else return 0;
}
void solute(int m,int n){
	int flag=0,k=0;
	int a[10000]={0};
	for(int i=m;i<=n;i++){
		if(flower(i)) {
		a[k]=i;
		k++;
		flag=1;
	}
	}
	if(flag==1){
	for(int i=0;i<k-1;i++)
		cout<<a[i]<<" ";
	cout<<a[k-1]<<endl;
	}
	if(flag==0) cout<<"no"<<endl;
}
int main(){
	int m,n;
	while(cin>>m>>n){
	solute(m,n);
	}
	return 0;
}
