#include<iostream>
using namespace std;
void find_common(int a1[],int a2[],int n, int m)
{
	int i=0,j=0;
	while(i<n && j<m)
	{
	   
	    while(i<n && i+1<n && (a1[i]==a1[i+1])){
	        i++;
	    }
	    while(j<m && j+1<m && (a2[j]==a2[j+1])){
	        j++;
	    }
		if(a1[i]<a2[j])
		{
			i++;
		}
		else if (a2[j]<a1[i])
		{
			j++;
		}
		else 
		{
			cout<<a2[j]<<"  ";
			i++;
			j++;

		}
	
		
	}

}
int main()
{
	int m,n;
	cin>>n;
	
	int a1[n];
	
	for(int i=0;i<n;i++)
		{
			cin>>a1[i];
		}
        cin>>m;
        int a2[m];
	for(int j=0;j<m;j++)
		{
			cin>>a2[j];
		}
    
		find_common(a1,a2,n, m);
		
		return 0;
}
