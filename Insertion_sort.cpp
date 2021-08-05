#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
int i,j,key,shifts=0,comparisons=0;
for(i=1;i<n;i++)
{
    j=i-1;
    key=arr[i];
    while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            shifts++;
            comparisons++;
            j--;
        }
            arr[j+1]=key;
            shifts++;
}
        for(i=0;i<n;i++)
        cout<< arr[i] <<" ";
        cout<<"Comparisons="<<comparisons<<endl;
        cout<<"Shifts="<<shifts<<endl;
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
                        insertion_sort(arr,n);
            }
        return 0;
    }