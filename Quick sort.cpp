#include<iostream>
using namespace std;




int partition(int a[],int low,int high)
{
	
	int pivot = a[low];
	int cnt=0;
	for(int i=low+1;i<=high;i++)
	{
		if(a[i]<=pivot)cnt++;
	}
	
	int pivotindex = low + cnt; 
	swap(a[low],a[pivotindex]);
	
	int i = low,j=high;
	
	while(i < pivotindex && j > pivotindex)
	{
		while(a[i]<=pivot)
		{
			i++;
		}
		
		while(a[j]>pivot)
		{
			j--;
		}
		
		if(i<pivotindex && j>pivotindex){
			swap(a[i++],a[j--]);
		}
	}

	
	return pivotindex;
}



void quicksort(int a[],int low,int high)
{
	if(low>=high) return;
	
	int p = partition(a,low,high);
	quicksort(a,low,p-1);		
	quicksort(a,p+1,high);
	
	
}


int main()
{

	int a[6] = {4,2,100,8,1,60};
	int size=6;

	quicksort(a,0,size-1);
	
	for(int i=0;i<size;i++)
    {
    	cout<<a[i]<<endl;
    }cout << endl;
	
	return 0;
}
