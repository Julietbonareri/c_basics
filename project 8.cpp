#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//declaring variables;
	int a,b,c;
	int sum,average;
	cout<<"enter variable a";
	cin>>a;
	cout<<"enter variable b";
	cin>>b;
	cout<<"enter variable c";
	cin>>c;
	sum=a+b+c;
	average=sum/3;
	cout<<"average is="<<average;
		return 0;
}
