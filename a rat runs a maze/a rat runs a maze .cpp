#include <iostream>
using namespace std;

void printmaze ();
void gomaze(long vi,long vj);

long N=9;
long StartX=2,StartY=2;
long EndX=8,EndY=8;
long S=0;//S=1 =>成功 

long A[10][10]=
    {  {0,0,0,0,0,0,0,0,0,0},  //0
	   {0,1,1,1,1,1,1,1,1,1},  //1
       {0,1,0,0,1,1,1,1,1,1},  //2
       {0,1,1,0,1,0,1,0,1,1},  //3
	   {0,1,1,0,0,0,1,0,1,1},  //4
	   {0,1,1,0,1,1,1,0,1,1},  //5
       {0,1,1,0,0,0,0,0,1,1},  //6
       {0,1,1,1,1,1,1,0,1,1},  //7
       {0,1,1,1,1,1,1,0,0,1},  //8
       {0,1,1,1,1,1,1,1,1,1},  //9 
    };

int main()
{  
    printmaze ();
    gomaze (StartX,StartY);
    printmaze (); 

	return 0;
 }
 
void printmaze ()
{  
    for (long i=1;i<=9;i++) 
       { for (long j=1;j<=9;j++)
	       {  
			 if (A[i][j]==1)  cout<<"▉"; 
	         if (A[i][j]==0)  cout<<"□";
	         if (A[i][j]==2)  cout<<"△";
	       }
	        
			 cout<<endl;
	   }
	cout<<"========================"<<endl;
}
 
void gomaze(long vi,long vj) 
{   A[vi][vj]=2;
	if((vi==8)&&(vj==8)) S=1;
	//上下左右探索
	//if (S=0)且(下一格為0) =>會繼續探索下一格 
	if((S==0)&&(A[vi-1][vj]==0))   gomaze(vi-1,vj);
	if((S==0)&&(A[vi+1][vj]==0))   gomaze(vi+1,vj);
	if((S==0)&&(A[vi][vj-1]==0))   gomaze(vi,vj-1);
	if((S==0)&&(A[vi][vj+1]==0))   gomaze(vi,vj+1);  
	 
	if (S==0) A[vi][vj]=0;
	
}
 
