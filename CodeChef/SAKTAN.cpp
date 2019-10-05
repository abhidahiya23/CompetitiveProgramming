#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
	    
	int r,c,q,i,j,count=0;
	cin>>r>>c>>q;


	// Matrix with all elements intialized to zero
	int matrix[r][c],rowno[q],colno[q];

	for (i = 1; i <= r; i++)
		for (j = 1; j <= c; j++)
			matrix[i][j]=0;

	for(i=1;i<=q;i++)
		cin>>rowno[i]>>colno[i];

	for(i=1;i<=q;i++){
		for (j = 1; j <= c; j++)
			matrix[rowno[i]][j]++;
		for (j = 1; j <= r; j++)
			matrix[j][colno[i]]++;
	}

	//for (i = 1; i <= r; i++){
	//	for (j = 1; j <= c; j++)
	//       if (matrix[i][j]%2 !=0)
	//            count++;
	//}
    
    cout<<count<<endl;

	}
	return 0;
}