#include<iostream>
using namespace std;
int main(void)
{
	int n;
	
	cout<<"請輸入你要的n:"<<endl;
	cin>>n;
	
	for(int count = 1 ; count <= 100 ; count++ ) 
	{
		if(count % n == 0)
		{
			cout<<count<<endl;
		}
		else
		{
			continue;
		}
	}
	
	
} 
