/*
Ë®Ìâ 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string str[100];
int main(){
	string a;
	int i=0;
	while(cin>>a){
		str[i]=a;
		i++;
		if(getchar()=='\n'){
			for(int j=i-1;j>0;j--)
				cout<<str[j]<<" ";
			cout<<str[0];
			i=0;
			
		}
	}
	return 0;
}
