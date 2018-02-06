//这道题其实非常容易，无非就是一个排序加输出，不过有两点需要注意的地方，首先，在排序的时候如果两个数大小相同，那两个数的前后顺序不能改变 ，用冒泡排序不能实现，因此使用插入排序 
// 其次，要注意多个case的测试， while(cin>>count>>flag)
//https://www.nowcoder.net/practice/0383714a1bb749499050d2e0610418b1 
#include<iostream>
#include<string>
using namespace std;
struct rank{
	string name="";
	int grade=0;
}student[1000],temp;
int main(){

	int  count;
	int flag;
	char c;
//	cin>>count;
//	cin>>flag;
	int i=0;
	while(cin>>count>>flag){ 
	for(int i=0;i<count;i++){    	
		cin>>student[i].name;
		cin>>student[i].grade;		
	}
	
	
	if(flag==0){
		for(int i=0;i<count;i++){
			temp=student[i];
			int j=i-1;
			while(j>-1&&temp.grade>student[j].grade){
				student[j+1]=student[j];
				j--;
			}
			student[j+1]=temp;
		} 
		
	}
	else{
		for(int i=0;i<count;i++){
			temp=student[i];
			int j=i-1;
			while(j>-1&&temp.grade<student[j].grade){
				student[j+1]=student[j];
				j--;
			}
			student[j+1]=temp;
		} 
		
	}
	for(int i=0;i<count;i++){ 
	   		cout<<student[i].name<<" "<<student[i].grade<<endl;
	}
	
}
return 0;
}
