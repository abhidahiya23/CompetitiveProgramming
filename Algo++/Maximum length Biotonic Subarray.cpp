//Maximum length Biotonic Subarray

#include <iostream>
#include <climits>
using namespace std;

int bioTonicArray(int arr[],int n){
	// // Increasing Distance
	// int cl=0,mli=INT_MIN;
	// for(int i=0;i<n-1;i++){
	// 	if(arr[i]<arr[i+1]){
	// 		cl+=1;
	// 		mli = max(mli,cl);
	// 	}else{
	// 	    cl=0;
 //        }
	// }

	// if(mli+1==n){
	// 	return n;
	// }

	// // Decreasing Distance
	// int mld=INT_MIN;
 //    cl=0;
	// for(int i=0;i<n-1;i++){
	// 	if(arr[i]>arr[i+1]){
	// 		cl+=1;
	// 		mld = max(mld,cl);
	// 	}else{
	// 	    cl=0;
 //        }
	// }
                      
	// if(mld+1==n){
	// 	return n;
	// }

	// // first increasing then decreasing distance
	// int ml=INT_MIN;
 //    cl=0;

	// for(int i=1;i<n-1;i++){

	// 	if(arr[i-1] < arr[i] < arr[i+1] || arr[i-1] < arr[i] > arr[i+1] || arr[i-1] > arr[i] > arr[i+1]){
	// 		cl+=1;
	// 		ml = max(ml,cl+2);
	// 	}else if(arr[i-1] > arr[i] < arr[i+1]){
	// 	    ml = max(ml,cl+2);
	// 	    cl = 0;
 //        }

	// }
	// cout<<ml<<endl;

	// increasing array
	int inc[n];
	inc[0] = 1;
	for(int i=1;i<n;i++){
		inc[i] = arr[i]>arr[i-1] ? inc[i-1]+1:1;
	}
	// decreasing array
	int dec[n];
	dec[n-1] = 1;
	for(int i=n-2;i>=0;i--){
		dec[i] = arr[i]>arr[i+1] ? dec[i+1]+1:1;
	}

	// for(int i=0;i<n;i++){
	// 	cout<<inc[i]<<" "<<dec[i]<<endl;
	// }

	// maximum array size
	int m = INT_MIN;
	for(int i=0;i<n;i++){
		m = max(inc[i]+dec[i]-1,m);
	}
	return m;
}

int main(){
    int t;
    cin>>t;
    while(t--){
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];

	cout<<bioTonicArray(arr,n)<<endl;
    }
	return 0;
}