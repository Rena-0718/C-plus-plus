#include <iostream>
using namespace std;

int main()
{
	double chinese,english,math,science,social,sum,avg;
	cin>>chinese;
	cin>>english;
	cin>>math;
	cin>>science;
	cin>>social;
	sum=chinese+english+math+science+social;
	avg=sum/5;
	cout<<sum<<endl; 
	cout<<avg;
	return 0;
}
