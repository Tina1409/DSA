#include<iostream>
using namespace std;
int main(){
	int n,i,sum=0;
	cout<<"Enter a number: "<<endl;
	cin>>n;
	for(i=0;i<=n;i++){
		sum=sum+i;
	}
	cout<<"The sum is: "<<sum<<endl;
}
