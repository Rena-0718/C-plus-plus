#include <iostream>
using namespace std;

int main()
{
	double score,A,B,C,D;
	cin>>score;
	
	if((score>=80)&&(score<=100)) cout<<"A";
	if((score>=70)&&(score<80))   cout<<"B";
	if((score>=60)&&(score<70))   cout<<"c";
	if((score>=0)&&(score<60))    cout<<"D";
    if((score<0)||(score>100))    cout<<"輸入錯誤";
	 return 0;
	
 } 
