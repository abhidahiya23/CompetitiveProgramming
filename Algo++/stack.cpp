#include<iostream>
#include<stack>
using namespace std;

bool checkParentheses(string str){

	stack<char> s;
	for(int i=0;i<str.length();i++){
		char ch = str[i];
		if(str[i]=='(')
			s.push('(');
		else if(str[i]==')')
			s.pop();

	}

	if(s.empty()){
		return true;
	}else{
		return false;
	}

}

int stockedSpan(int arr[],int n){

	stack<int> s;

	for(int i=0;i<n;i++){
		s.push(arr[i]);
	}

	for(int i = n-1;i>=0;i--){
		int count = 0;
		int si = 1;
		while(si){
			if(s.top()>arr[i]){
				count++;
				s.pop();
				si = 0;
				break;
			}
			count++;
		}

		cout<<count<<" "<<endl;
	}

	return 0;
}

int Maxelement(int arr[],int n){

	stack<int> s;
	s.push(0);
	cout<<"-1"<<" ";
	for(int i=n-1;i>0;i--){

		while(!s.empty()  and arr[i] >= arr[s.top()]){
			s.pop();
		}

		int merivalue;

		if(s.empty()){
			merivalue = i ;
		}else{
			merivalue = i +1;
		}

		cout<<arr[merivalue]<<" ";
		s.push(i);
	}

}

int Minelements(int arr[],int n){
	stack<int> s;

	for(int i=0;i<n;i++){

		while(!s.empty() and arr[i]<arr[s.top()]){
			int idx = s.top();
			s.pop();

			cout<<arr[idx]<<"->"<<arr[i]<<endl;
		}

		s.push(i);
	}

	while(!s.empty()){
		int idx = s.top();
		s.pop();

		cout<<arr[idx]<<"->"<<(-1)<<endl;
	}
}

int main(){

	//string s = "(())";
	//cout<<checkParentheses(s)<<endl;
	int arr[] = {5,3,10,2,6,13,4};
	int n = 7;

	// stockedSpan(arr,n);
	Minelements(arr,n);
	return 0;
}