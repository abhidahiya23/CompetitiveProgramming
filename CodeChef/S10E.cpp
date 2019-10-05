#include<iostream>
using namespace std;

int check(int i,int *arr){
	int c=0,j;
    
    for(j = (i-5 >= 0) ? i-5 : 0;j<i;j++)
		if (arr[i]<arr[j])
			c++;
    
	if(c==5 || c==j)
		return true;
	else 
	    return false;

}


int main(){

	int n,i,count=0;
	cin >> n;

	int arr[n]; // Array declared with values
	for(i=0;i<n;i++)
		cin>>arr[i];

	for(i=0;i<n;i++)
		if(check(i,arr))
			count++;

	cout<<count;
	return 0;
}