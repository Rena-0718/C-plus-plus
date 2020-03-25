#include <iostream>
 
using namespace std;

double CTF(double C);
double FTC(double F);

int main()
{  double a;

   cout<<"請輸入溫度";
   cin>>a;

   cout<<"攝氏溫度"<<a<<"<-->華氏溫度"<<CTF (a)<<endl;
   cout<<"華氏溫度"<<a<<"<-->攝氏溫度"<<FTC (a)<<endl; 

    return 0;
}

double CTF (double C)
{   double F;
    F=C*9/5+32;

    return F;
}

double FTC (double F)
{   double C;
    C=(F-32)*5/9;

    return C;
}
