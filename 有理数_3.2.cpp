#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void integer(int p,int q){
	
	int a=p/q;
	if(p%q==0)
	  cout<<a-1<<endl;
	
	else if(p%q!=0&&p*q<0) cout<<a-1<<endl;
	else cout<<a<<endl;
} 
int main(){
	int n;
	int p,q;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p>>q;
		if(q==0) continue; 
		integer(p,q);
	}
	return 0;
}
