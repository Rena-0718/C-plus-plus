#include <iostream>
#include <iomanip>
using namespace std;

long long f1 (long long x);
long C (long m,long n);

int main()
{   long long a,i,k,h,j;
    /*cin>>a;
    cout<<f1(a);*/
    
	/*for (i=1;i<=20;i++)
    cout<<i<<"!="<<f1 (i)<<endl;*/
    
	/*cin>>k>>h;
    cout<< setw(3) << C(k,h);*/
   
    cin>>a;
	for (i=0;i<=a;i++)
      {  for (k=0;k<=a-i;k++) 
	         cout<<"   "; 
	  
	     for (j=0;j<=i;j++)
             cout<<setw(3)<<C(i,j)<<"   ";
	     
		 cout<<endl;
	  }
	
    return 0;
}

long long f1 (long long x)
{   long long y=1,i;

    for (i=1;i<=x;i++)
    y=y*i;

    return y;
}

long  C(long m,long n)
{   long  Q;

    Q=f1(m)/(f1(n)*f1(m-n));

    return Q;
}
