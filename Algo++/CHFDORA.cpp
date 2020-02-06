#include<iostream>
#include<vector>
using namespace std;
const int MAX = 10000;

vector< vector<int> > matrix(MAX,vector<int>(MAX,-1));

int doraemon(vector< vector<int> > matrix,int row,int col){

	int result=0;

	for(int i=1;i<row-1;i++){

		for(int k=1;k<col-1;k++){

			//cout<<"R  "<<i<<"   C   "<<k<<endl;
			for(int j=1;i-j>=0 and i+j<row and k-j>=0 and k+j<col ;j++){
				// 		******** ROW ********               ******** COL ***********
				if(matrix[i][k-j] == matrix[i][j+k] && matrix[i-j][k] == matrix[i+j][k]){
				//	cout<<"ROW   "<<matrix[i][k-j]<<" "<<matrix[i][j+k]<<"  COL  "<<matrix[i-j][k]<<" "<<matrix[i+j][k];
	                result++;
	            }else{
	                break;
	            }
	        }
	       	//cout<<endl<<result<<endl;
		}
		
	}

	return result+row*col;
}



int main(){

	int t;
	cin>>t;

	while(t--){
		int row,col;
		cin>>row>>col;

		for(int i=0;i<row;i++)
			for(int j=0;j<col;j++)
				cin>>matrix[i][j];

		cout<<doraemon(matrix,row,col)<<endl;

	}

	return 0;
}