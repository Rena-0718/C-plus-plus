#include <iostream>
#include <algorithm> //加入內涵演算法的功能 
using namespace std;

int main()
{ int a[100];
  int n=3,i,x,y,z;
 
  for (i=0;i<=(n-1);i++)
    cin>>a[i];
      
   sort	(a,a+n);
    for (i=0;i<=(n-2);i++)
    cout<<a[i]<<" ";
    cout<<a[n-1]<<endl; 
	
	x=a[0];y=a[1];z=a[2];
	
	if ((x+y)<=z)
	   cout<<"No";
	else//可構成三角形
	   { if ((x*x+y*y)<z*z) cout<<"Obtuse";//鈍角三角形 
	     if ((x*x+y*y)==z*z) cout<<"Right";
	     if ((x*x+y*y)>z*z) cout<<"Acute";//銳角三角形 
       }
	     
  return 0;
 } 
