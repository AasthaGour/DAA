#include<iostream>
#include<algorithm>
using namespace std;
int find3indices(int arr[],int n,int key)
{
    int low,high;
    int count=0;
    sort(arr,arr+n);
	
	    low=0;
	    high=0;
	    
        	while(high<n)
        	{
        	    	
        		if(arr[high]-arr[low]==key)
        		{
			
        		    count++;
        			low++;high++;
        		
        		    
        		}
        		else if(arr[high]-arr[low]>key)
            		{
            			low++;
            		}
        		else 
            		{
            			high++;
            		}
            			
        	}
        	return count;
}
	

int main()
{
	int n,key,res;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	cin>>key;
	res = find3indices(arr,n,key);
	cout<<res<<endl;
    
}
