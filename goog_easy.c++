#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
		
	int x;
	cin >> x;
	
	int flag = 0;	
	for(int i = 0; i < n; i++)
	{
		for(int j = 1; j < n; j++)
		{
			if(arr[i] + arr[j] == x)
			{
				cout << arr[i] <<  " " <<  arr[j];
				flag = 1;
				break;
			}
		}
	}
	
	if(!flag)
		cout << "Not found";
}
