#include<iostream>
using namespace std;

void printMazePath(string sr,string sc,string er,string ec,string ans){
	if(ans.length()==4 &&sr.length()==er.length() && sc.length()==ec.length()){
		cout<<ans<<endl;
		return ;
	}

	if(sr.length()>er.length() || sc.length()>ec.length()){
		return ;
	}

	printMazePath(sr+"h",sc,er,ec,ans+"h");
	printMazePath(sr,sc+"v",er,ec,ans+"v");
}

/*int countMazePathDiag(int sr,int sc,int er,int ec){
	if(sr==er and sc==ec){
		return 1;
	}

	if(sr>er or sc>ec){
		return 0;
	}

	int count = 0;

	int vertical = countMazePath(sr+1,sc,er,ec);
	int horizontal = countMazePath(sr,sc+1,er,ec);
	int diagonal = countMazePath(sr+1,sc+1,er,ec);

	count = horizontal + vertical+diagonal;
	return count;
}*/

void countMazePathDiag(int sr,int sc,int er,int ec,string str){
	if(sr==er and sc==ec){
		cout<<str<<endl;
		return;
	}

	if(sr>er or sc>ec){
		return;
	}

	countMazePath(sr+1,sc,er,ec,str+"h");
	countMazePath(sr,sc+1,er,ec,str+"v");
	countMazePath(sr+1,sc+1,er,ec+str+"h"+"v");

}

void printBoardPath(int start,int end,string ans){
	if(start==end){
        cout<<ans<<endl;
		return ;
	}

	if(start>end){
		return ;
	}

	for(int dice = 1;dice<=6;dice++){
        char ch = dice + '0';
		printBoardPath(start+dice,end,ans+ch);
	}

}

int main(){
   // printMazePath("","","hh","vv","");
    //printBoardPath(0,10,"");
    //cout<<countMazePath(0,0,2,2)<<endl;
    printMazePathDiag(0,0,2,2,"");
    return 0;
}
