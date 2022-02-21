#include<iostream>
using namespace std;




void merge(int a[],int l,int h)
{
	
	int mid = (l+h)/2;

    int len1 = mid - l+1;
    int len2 = h - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int arrindex = l;
    for(int i=0;i<len1;i++)
    {
        arr1[i]=a[arrindex++];
    }

    arrindex = mid+1;
    for(int j=0;j<len1;j++)
    {
        arr2[j]=a[arrindex++];
    }

    int i=0,j=0;
    arrindex = l;
    while(i<len1 && j<len2)
    {
        if(arr1[i]<arr2[j]){
            a[arrindex++] = arr1[i++];
        }else{
            a[arrindex++] = arr2[j++];
        }
    }

    while(i<len1)
    {
            a[arrindex++] = arr1[i++];
    }

    while(j<len2)
    {
            a[arrindex++] = arr2[j++];
        
    }

    delete []arr1;
    delete []arr2;
}



void mergesort(int a[],int l,int h)
{
	if(l>=h) return;
	
	int mid = (l+h)/2;
	mergesort(a,l,mid);		
	mergesort(a,mid+1,h);
	
    merge(a,l,h);
	
}


int main()
{

	int a[6] = {4,2,100,8,1,60};
	int size=6;

	mergesort(a,0,size-1);
	
	for(int i=0;i<size;i++)
    {
    	cout<<a[i]<<endl;
    }cout << endl;
	
	return 0;
}

