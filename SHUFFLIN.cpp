#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int n;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		int a[n];
		int aodd=0;
		int aeven=0;
		int ieven,iodd;
		int ans;
		for(int j=1;j<=n;j++)
		{
			cin>>a[j];
			if(a[j]%2==0)
			{
				aeven=aeven+1;
			}
			else
			{
				aodd=aodd+1;
			}
		}
	    ieven=n/2;
		iodd=n/2;
		
		if(n%2==1)
		{
		    iodd=iodd+1;
		}
		cout<<min(iodd,aeven)+min(ieven,aodd)<<endl;
	}
	return 0;
}
