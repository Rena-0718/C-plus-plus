#include <iostream>
using namespace std;

void search(long L,long R,long Z);
long A[21]={0,13,19,21,25,33,37,39,42,44,47,50,53,55,61,63,66,71,75,80,93};

int main()
{   long a;

	for (long i=1;i<=20;i++)
	   cout<<A[i]<<" ";
	   cout<<endl;

	cin>>a;         //a是要找的數 
	search(1,20,a);
	
	return 0;
}

void search(long L,long R,long Z)  //z是去找的數 
{   long t;
    
	cout<<"L="<<L<<",R="<<R<<"  ";
	if((Z<A[L])||(Z>A[R]))
	   cout<<"超出範圍";
	else
	   {t=(L+R)/2;                //t是中間值 
	   	cout<<"t="<<t<<" "<<A[t]<<endl;
	   	
	   	if (Z==A[t])  cout<<"找到了";
	   	if (Z<A[t])   search(L,t-1,Z);
	   	if (Z>A[t])   search(t+1,R,Z);
	   	
	   }
	
}
