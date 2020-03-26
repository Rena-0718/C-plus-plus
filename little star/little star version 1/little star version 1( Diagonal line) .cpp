#include <iostream>
using namespace std;

int main()
{  long i,j;

    for (i=1;i<=9;i++)
       {    for (j=1;j<=9;j++)
       	       {if (i==j)
       	          cout<<"*";
       	        else
       	          cout<<" ";
       	      }
       	
       	cout<<endl;
       	
	   }      

   return 0;
}
