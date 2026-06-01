#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"ENTER THE VALUE OF N; ";
  cin>>n;
  int res=n;
  
  int sum=0;
   while(n>0)     
  { 
    int r=n%10;  
    int x=1;     
    for(int i=1;i<=r;i++)
    {
      x=x*i;    
    }                
    sum=sum+x;   
    n=n/10;     
   }

   cout<<sum<<endl;

  if(res==sum)
     cout<<" STRONG NUMBER ";
  else
     cout<<" NOT  STRONG NUMBER ";




    return 0;
}



/*
int main()
{
  int n=5;
  int x=1;
  for(int i=2;i<=n;i++)
  {
   x=x*i;;
  }
  cout<<x<<" ";
return 0;
}

*/

