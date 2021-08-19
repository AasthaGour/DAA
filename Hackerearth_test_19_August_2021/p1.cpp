#include<iostream>
//#include<string>
using namespace std;
void sort(char arr[], int n)
{
	int freq[26]={0};
	int max = -1;
	char result;
	
	for(int i=0;i<n;i++)
	{
		freq[arr[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) 
	{
        if (max < freq[i]) 
        { 
            max = freq[i]; 
            result = (char)(i + 'a'); 
            //cout<<result<<"-"<<max<<endl;
        } 
    }

        if (max<2)
        {
        		cout<<"No duplicates present"<<endl;
        }
			else
			{
					cout<<result<<"-"<<max<<endl;

			} 
	
}
int main()
{
	//string s;
	//getline(cin,s);
	//cout<<s<<"\n";
	int n;
	cin>>n;
	char arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	/*for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}*/

	sort(arr,n);

	return 0;
}