#include <iostream.h>
void main()
{
	int a[1000001]={0},i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		a[n]++;
	}
	for(i=0;i<100001;i++)
	{
		if(a[i])
		{
			while(a[i]--)
			{
				cout<<i;
			}
		}
	}
}