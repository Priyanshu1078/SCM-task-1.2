#include<iostream>
using namespace std;
int main(){
	int i;
	int a[5]={1,2,3,4,5};
	int*ptr;
	ptr=a;
	for (i=0; i<5;i++)
	   ptr=ptr+i;
	   cout<<ptr<<endl;
	
}
