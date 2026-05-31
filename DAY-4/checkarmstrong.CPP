#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n, sum = 0;
    cout << " Enter a number n: ";
    cin >> n;

    int res = n;

    int count=0;
    while(n>0)
    {
       n=n/10;
       count++;
    }
    n=res;
    while(n>0)
    {
        int r=n%10;
        sum=sum+round(pow(r,count));
        n=n/10;
    }
if(sum==res)
  cout<<"ARMSTRONG NUMBER"<<endl;
else
  cout<<"NOT ARMSTRONG NUMBER"<<endl;

return 0;
}