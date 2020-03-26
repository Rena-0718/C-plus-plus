#include <iostream>
using  namespace std;

int main()
{  long i,j;

    for (i=0;i<=9;i++)
    {  for (j=0;j<=9;j++)
        { if (i+j>=9)
            cout<<" * ";
         else
		    cout<<"   ";   
		}
	   cout<<endl;
	}
	return 0;
}
