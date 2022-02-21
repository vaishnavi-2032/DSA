//Implement program to find minimum and maximum element from given list using Divide and Conquer.

#include<iostream>
#include<climits>
#include<vector>
using namespace std;

void minmax(vector<int>&a,int low,int high,int &min,int &max)
{
	if(low == high){
		min = max = a[low];
	}
	else if(low == high-1)
	{
		if(a[low]>a[high]){
			min = a[high];
			max = a[low];
		}else{
			max = a[high];
			min = a[low];
		}
	}
	else
	{
		int mid = (high+low)/2;
		int max1 = INT_MIN;
		int min1 = INT_MAX;
		minmax(a,low,mid,min,max);
		minmax(a,mid+1,high,min1,max1);
		
		if(max1>max) max=max1;
		if(min1<min) min = min1;
	}
}

int main()
{
	vector<int> a;
	int size;
	cout << "Enter number of elements in array:"<<endl;
    	cin >> size;
    	cout << "Enter numbers:"<<endl;
    	for(int i=0;i<size;i++)
    	{
    		int num;
    		cin >> num;
    		a.push_back(num);
    	}
	int max = INT_MIN;
	int min = INT_MAX;
	minmax(a,0,size-1,min,max);
	
	cout << "Maximum number is = " <<max << endl;
	cout << "Minimum number is = " <<min << endl;
	return 0;
}
