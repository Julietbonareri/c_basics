#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	//declation of values
	string studentname="enter student name";
	int admnno;
		cout<<"enter admnno";
		cin>>admnno;
		int HCImarks,Networkmarks,databasemarks,ethicalhackingmarks,total,average;
		cout<<"enter HCImarks";
		cin>> HCImarks;
		cout<<"enter Networkmarks";
		cin>>Networkmarks;
		cout<<"enter databasemarks";
		cin>>databasemarks;
		cout<<"enter ethical hackingmarks";
		cin>>ethicalhackingmarks;
		total=HCImarks+databasemarks+ethicalhackingmarks+Networkmarks;
		average=total/4;
		cout<<"average is="<<average<<endl;
		if(average>=70)
		cout<<"first class";
		else if (average>=65)
		cout<<"second class upper";
		else if(average>=60)
		cout<<"second class lower";
		else if(average>=50)
		cout<<"pass";
	    else cout<<"fail";
	return 0;
}
