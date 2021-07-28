#include<iostream>
using namespace std;
int find3indices(int arr[],int n)
{
    int low,high;
	for(int i=n-1;i>=0;i--)
	{
	    low=0;
	    high=n-1;
	
        	while(low<high)
        	{
        	    	
        		if(arr[low]+arr[high]==arr[i])
        		{
			
        			cout<<low+1<<" "<<high+1<<" "<<i+1<<endl;
        			low++;high--;
        			return 1;
        		    
        		}
        		else if(arr[low]+arr[high]>arr[i])
            		{
            			high--;
            		}
        		else 
            		{
            			low++;
            		}
        	}
	
	}
	return -1;

}
int main()
{
	int n,res;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	res = find3indices(arr,n);
    
	if(res==-1)
	cout<<"no sequence found";
}
