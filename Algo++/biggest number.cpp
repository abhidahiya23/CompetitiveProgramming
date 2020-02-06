#include <bits/stdc++.h>
using namespace  std;

int mycompare(string x,string y){
	string xy = x.append(y);
	string yx = y.append(x);

	if(xy>yx)
		return 1;
	else
		return 0;
}

int main(){

	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	string arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	sort(arr,arr+n,mycompare);

	for(int i=0;i<n;i++){
		cout<<arr[i];
	}

	cout<<endl;
	
	}
	return 0;
	
}

// int main(){

// 	int t;
// 	cin>>t;
// 	while(t--){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}

// 	sort(arr,arr+n,greater<int>());
// 	int k=n;
// 	while(k--){
// 	for(int i=0;i<n-1;i++){

// 		string x = to_string(arr[i]);
// 		string y = to_string(arr[i+1]);
// 		string temp = x;
// 		temp.append(y);
// 		y.append(x);

// 		if(temp<y){
// 			int t = arr[i];
// 			arr[i] = arr[i+1];
// 			arr[i+1] = t;
// 		}

// 	}}

// 	for(int i=0;i<n;i++){
// 		cout<<arr[i];
// 	}

// 	cout<<endl;
// 	}
// 	return 0;
	
// }