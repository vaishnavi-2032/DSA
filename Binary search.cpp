#include<iostream>
#include<vector>

using namespace std;

int binary_search(vector<int>&a,int key)
{
	int low=0,high=a.size(),mid;
	
	while(low<=high)
	{
		mid = (low+high)/2;
		
		if(a[mid]==key)return mid;
		else if(a[mid]<key)
		{
			low=mid+1;
		}else{
			high = mid-1;
		}
	}
	return -1;
}

int main()
{
	vector<int> a;
	int size,key,answer;
	cout << "Enter number of elements in array:"<<endl;
    	cin >> size;
    	cout << "Enter numbers:"<<endl;
    	for(int i=0;i<size;i++)
    	{
    		int num;
    		cin >> num;
    		a.push_back(num);
    	}
	cout << "Enter number to find:"<<endl;
    	cin >> key;
    	answer = binary_search(a,key);
    	if(answer==-1){
    		cout << "Given number is not in the list "<<endl;
    	}else{
    	cout << "Given number is at index: "<< answer <<endl;}
	return 0;
}
