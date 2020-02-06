#include<iostream>
using namespace std;

bool isPalindrome(string str,int left,int right){
	while(left<=right){
		if(str[left]!=str[right]){
			return false;
		}
		left++;
		right--;
	}

	return true;
}

int c=0;

void subString(string str,int si,string ans){

	if(si==str.length()){
		if(isPalindrome(ans,0,ans.length()-1))
			c++;

		return ;
	}

	char ch = str[si];
	subString(str,si+1,ans+ch);
	subString(str,si+1,ans);

}

// int countPalindrome(string str){
// 	int l = str.length();

// 	int count=0;
// 	for(int i=0;i<l;i++){
// 		for(int j=1;j<i;j++){
// 			if(str[i-j]==str[i-j])
// 				count++;
// 		}
// 	}

// 	for(int i=0;i<l;i++){
// 		for(int j=1;j<i;j++){
// 			if(str[i-j]==str[i-j])
// 				count++;
// 		}
// 	}



// }

string longestPalindrome(string s) {
        
    int max=-1;
    int result = 0;
    
    int si=0,li=0;
    string out;
    for(int i=0;i<s.length();i++){
            
            //ODD LENGTH
        result =0;
            
        for(int j=0; i-j>=0 and i+j<s.length() ;j++){
            if(s[i-j] == s[i+j]){
                result+=2;
            }else{
                if(result+1>max){
                max = (max,result+1);
                si = i-j+1;
                li = i+j-1;
                //cout<<si<<" "<<li<<" "<<max<<endl;
                }
                break;
            }
        }
        //out = s.substr(si,li-si+1);

            //EVEN LENGTH
        result =0;
            
        for(int j=0; i-j>=0 and i+j+1<s.length() ;j++){
            if(s[i-j] == s[i+j+1]){
                result+=2;
            }else{
                if(result>max){
                max = (max,result);
                si = i-j;
                li = i+j+1;
                cout<<si<<" "<<li<<" "<<max<<endl;
                }
                break;
            }
        }
        out = s.substr(si,li-si);
    }
        
        
    return out; 
}

int main(){

	//ubString("abc",0,"");
	cout<<longestPalindrome("baad")<<endl;
	return 0;
}