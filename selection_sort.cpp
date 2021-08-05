#include <iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
	int i,j,swaps=0,comparisons=0,ind,t;
	for(i=0;i<n-1;i++)
	{
		ind=i;
		for(j=i+1;j<n;j++)
			{
				if(arr[j]<arr[ind])
				{
					ind=j;
				}
				comparisons++;
			}
				t=arr[i];
				arr[i]=arr[ind];
				arr[ind]=t;
				swaps++;
	}
		for(i=0;i<n;i++)
		cout<<arr[i]<<" "; 
		cout<<"Comparisons="<<comparisons<<endl;
		cout<<"Swaps="<<swaps<<endl; 
    
}

int main()
{
	int t,n,i,j;
	cin>>t;
	for(i=0;i<t;i++)
		{
			cin>>n;
			int arr[n];
			for(j=0;j<n;j++)
				{
					cin>>arr[j];
				}
					selection_sort(arr,n);
		}
				return 0;
}