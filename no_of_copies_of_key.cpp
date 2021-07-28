#include <iostream>
#include<algorithm>
using namespace std;
int count(int arr[], int x, int n)
{
int *low = lower_bound(arr, arr+n, x);

if (low == (arr + n) || *low != x)
	return 0;
	
int *high = upper_bound(low, arr+n, x);	
	
return high - low;
}

int main()
{
int n;cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int key;cin>>key;
int c = count(arr, key, n);
cout<<key<<"-"<<c;
return 0;
}