#include<iostream>
#include<algorithm>
using namespace std;

void compute(int arr[],int n)
{
	int low,high,key;
	int found_pair=0;
	cin>>key;
	sort(arr,arr+n);
	low=0;
	high=n-1;
	for(int i=0;i<n;i++)
	{
		if((arr[low]+arr[high])>key)
		{
			high--;
		}
		else if ((arr[low]+arr[high])<key)
		{
			low++;
		}
			else
		{
			
			found_pair=1;
			break;
		}
	}

		if(found_pair==1)
		{
			cout<<arr[low]<<" "<<arr[high]<<endl;
		}
		else
		{
			cout<<"No Such Elements Exist"<<endl;
		}
}


int main()
{
	int n;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
			compute(arr,n);

	return 0;
}