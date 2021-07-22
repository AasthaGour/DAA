#include <iostream>
using namespace std;
void binarysearch(int arr[],int n)
{
	int count,found,i,low,high,mid,key,q; 
	cout<<"Enter the no of elements you want to search?\n";
	cin>>q;

	for(int it=1;it<=q;it++)
	{
	cin>>key;
	count=0;
	found=0;
	low=0;
	high=n-1;
	while(low<=high)
		{
			mid= low + ((high-low)/2);
				
					if(arr[mid]==key)
						{
							count++;
							found=1;
							break;
						}
					else if(arr[mid]>key)
						{
							high=mid-1;
							count = count + 2;
						}
					else
						{
							low=mid+1;
							count = count + 2;
						}
		}
			if(found==1)
				{
					cout<<"Present "<<count<<endl;
				}
			else
				{
					cout<<"Not Present "<<count<<endl;
				}
}
}

int main()
{
	int n,i; 
			cin>>n;
			int arr[n]; 
				for(i=0;i<n;i++)
					{
						cin>>arr[i];
					}
						
						binarysearch(arr,n); 
		
	return 0;
}