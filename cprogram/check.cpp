#include<iostream>
using namespace std;

int maximum(long int arr[],int n)
{
    	cout<<"hello 5"<<endl;
	int max= -1000000000;

	cout<<"hello 6"<<endl;
	for(int i=0;i<n;i++)
	{
	    	cout<<"hello 8"<<endl;
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
		cout<<"hello 9"<<endl;
	return max;
}

int main() {
    cout<<"hello 1"<<endl;
 long int arr[1000000];
 //int arr[100];
	long int n;
	cout<<"hello 1"<<endl;
	cin>>n;
		cout<<"hello 2"<<endl;
	for(int i=0;i<n;i++)
	{
	    	cout<<"hello 3"<<endl;
		cin>>arr[i];
	}

	cout<<"hello 4"<<endl;
	cout<<maximum(arr,n)<<endl;


	return 0;
}