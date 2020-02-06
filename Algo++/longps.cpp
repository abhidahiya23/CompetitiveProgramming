#include<iostream>
#include<vector>
using namespace std;

int longestPS(string s){

	int row = s.length();
	int col = s.length();

	vector< vector<int> > dp(row,vector<int> (col,0));

	for(int i=0;i<row;i++){
		dp[i][i]=1;
	}

	for(int j=1;j<col;j++){
		for(int i=j-1;i>=0;i--){
			if(s[i]==s[j]){
				dp[i][j] = 2+dp[i+1][j-1];
			}else{
				dp[i][j] = max(dp[i][j-1],dp[i+1][j]);
			}
		}
	}


	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}

	return dp[0][col-1];

}

int main(){
		
	string s = "bbbab";
	cout<<longestPS(s)<<endl;
	return 0;
}