#include<iostream>
using namespace std;
void find3indices(int arr[],int n)
{
	int i,j,k,found=0;
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(arr[i]+arr[j]==arr[k])
				{
					cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
					found++;
				}
				
			}
		}
	}
	if(found==0)
	{
		cout<<"no pair found"<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	find3indices(arr,n);
}