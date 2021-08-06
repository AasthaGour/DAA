#include <iostream>
using namespace std;
void merge(int arr[],int l,int m,int r) 
    {
        int n1= m-l+1;
        int n2= r-m;
        int left[n1],right[n2];
            for(int i=0;i<n1;i++)
                {
                    left[i]=arr[l+i];
                }
            for(int j=0;j<n2;j++) 
                { 
                    right[j]=arr[m+1+j]; 
                    
                }
        int i=0,j=0,k=l; 
            while(i<n1 && j<n2) 
                {
                    if(left[i]<=right[j])
                            {
                                arr[k]=left[i];
                                i++;    
                                
                            }
                    else
                    {
                        arr[k]=right[j];
                        j++;
                    }
                        k++;
                }
        while(i<n1)
            { 
                arr[k]=left[i]; 
                i++;
                k++;
            }
        while(j<n2)
            { 
                arr[k]=right[j]; 
                j++;
                k++;
            }
            }

        void mergesort(int arr[],int l,int r) {
            if(l>=r)
                {
                    return;
                }
                    int m=l+(r-l)/2; 
                    mergesort(arr,l,m); 
                    mergesort(arr,m+1,r); 
                    merge(arr,l,m,r);
                }

    void duplicate (int arr[],int n) 
    {
        int i,j,low,high,mid,flag=0; 
        mergesort(arr,0,n-1);
            for(i=0;i<n-1;i++)
                    {
                        low=i+1; 
                        high=n-1; 
                        while(low<=high) 
                            
                            { 
                                mid=(low+high)/2; 
                                if(arr[mid]==arr[i]) 
                                {
                                    flag=1;
                                    break; 
                                    
                                }
                                else if(arr[mid]>arr[i]) 
                                {
                                    high=mid-1; 
                                    
                                }
                                    else low=mid+1;
                                } 
                                    if(flag==1)
                                    break; 
                        
                    }
                        if(flag==0) 
                            cout<<"NO"; 
                        else 
                            cout<<"YES"; 
        
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
                    duplicate(arr,n); 
            
        }
                return 0; 
    
}