// Arrays-Intersection Of Two Arrays
#include <iostream>
#include <climits>
#include <map>
using namespace std;

int main(){

	int n;  cin>>n;
	int arr1[n];
	int arr2[n];

	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}

	for(int i=0;i<n;i++){
		cin>>arr2[i];
	}

	map<int,int> u;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr1[i]==arr2[j]){
				u[arr1[i]]++;
				arr2[j]=INT_MIN;
				break;
			}
		}
	}

	cout<<"[";
	//int k = u.rbegin();
	for (auto i : u){ 
        int j = i.second;
        while(j){
        	if((i.first == (u.rbegin())->first ) && j==1){
        		cout<<i.first<<"]";
        		break;
        	}
        	cout<<i.first<<", ";
        	j--;
    	}
    }
    cout<<endl;

	return 0;
}