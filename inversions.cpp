#include<iostream>
using namespace std;
int inversion(int arr[],int n) 
{
int in=0,i,j; 
for(i=0;i<n-1;i++) {
for(j=i+1;j<n;j++) {
    if(arr[i]>arr[j]) 
    in++;
} 
    
}
return in; 
    
}
void merge(int arr[],int l,int m,int r,int *cmps) {
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
(*cmps)++;
}
while(i<n1)
{ 
    arr[k]=left[i];
i++;
k++;
}
while(j<n2)
{ 
    arr[k]=right[j]; j++;
k++; 
    
}
}
void mergesort(int arr[],int l,int r,int *cmps) {
if(l>=r)
{
return;
}
int m=l+(r-l)/2; 
mergesort(arr,l,m,cmps); 
mergesort(arr,m+1,r,cmps); 
merge(arr,l,m,r,cmps);
}
int main()
{
int n,c=0;
int t,invers=0; 
cin>>t; 
for(int i=1;i<=t;i++) 
{
c=0;
cin>>n;
int arr[n];
for(int j=0;j<n;j++)
{
cin>>arr[j];
}
invers=inversion(arr,n);
mergesort(arr,0,n-1,&c);
for(int j=0;j<n;j++)
{
cout<<arr[j]<<" "; 
}
cout<<"\n\nComparisons = "<<c<<endl;
cout<<"\ninversions = "<<invers<<endl; 
}
return 0;
}
