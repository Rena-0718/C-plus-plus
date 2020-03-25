#include <iostream>

using namespace std;

int main()
{   long a,tmp;

    cin>>a;
    tmp=a;

    while (tmp!=0)
          {cout<<tmp%10;
           tmp=tmp/10;
          }

    return 0;
}
