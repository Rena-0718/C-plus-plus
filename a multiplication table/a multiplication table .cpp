#include <iostream>
using namespace std;
int main()
{

	
	for( int i = 1 ; i < 10 ; i++ )
	{
		for( int j = 1 ; j < 10 ; j++ )
		{
			if(j == 9)
			{
				cout<<i<<"x"<<j<<"="<<i*j<<"\n"<<endl;
			}
			else
			{
				cout<<i<<"x"<<j<<"="<<i*j<<endl;
			}
			
		}
	}
	system("pause");
		return 0;
}
