#include <iostream>

using namespace std;
int main()
{int n,i,j, max,x;
cin >> n;

 
  for (i=1; i<=n; i++)
  { 
      
 cin >> j;
 if (j>0  && max==0)
 {      x=j;
 max=1;}
      
      
      if (j<0 && max==0)
 {      x=j;
 max=-1;
      } 
      
      
}
	if (max==0)
	{       cout << "  Vse 4isla nulevie";  }
	
	if (max<0)	
	{ cout << x << "  -  otricat"; }
	
	 	if (max>0) 
{	  cout << x << "  -  pologit";  }
	
	
	return 0;
}