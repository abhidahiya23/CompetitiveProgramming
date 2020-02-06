#include<bits/stdc++.h>
#include<climits>
using namespace std;

int ReduceToOne(int n){
	int dp[n+1]={0};
	//memset(dp,-1,n+1);

	dp[1] = 0;

	if(dp[n]!=0){
		return dp[n];
	}
	//dp[1]

	for(int i = 2;i<=n;i++){

		int count1 = INT_MAX,count2 = INT_MAX,count3 =INT_MAX;

		if(i%3==0){
			count3 = 1 + dp[i/3];
		}
		if(i%2==0){
			count2 = 1 + dp[i/2];
		}
		count1 = 1 + dp [i-3]; 

		dp[i] = min(count1,min(count2,count3));
	}




}

// int countBoardPathMemo(int start,int end){
// 	int dp[end+1];

// 	dp[end] = 1;

// 	for(int i = end -1  ;i>=1;i--){

// 		int l = 0;
// 		int sum = 0;
// 		while(l<6 && ){
// 			sum = sum + dp[]
// 		}

// 	}


// }

int getMinSquares(unsigned int n,int dp[]) 
{ 
    // base cases 
    // if n is perfect square then Minimum squares required is 1 (144 = 12^2) 
    if (sqrt(n) - floor(sqrt(n)) == 0) 
        return 1; 
    if (n <= 3) 
    	//dp[n] = n;
        return n; 
  
  	if(dp[n]!=-1){
  		//return dp[n];
  	}
    // getMinSquares rest of the table using recursive 
    // formula 
    int res = n; // Maximum squares required is n (1*1 + 1*1 + ..) 
  
    // Go through all smaller numbers 
    // to recursively find minimum 
    for (int x = 1; x <= n; x++) { 
        int temp = x * x; 
        if (temp > n) 
            break; 
        else{
            res = min(res, 1 + getMinSquares(n - temp,dp)); 
        	dp[x] = res;
        }
    }


    return dp[n]; 
} 

int perfectSquare(int n,int dp[]){
	if(n<=0){
		return 0;
	}

	if(dp[n]!=-1)
		return dp[n];

	int minValue = INT_MAX;

	for(int i=1;i*i<=n;i++){
		minValue = min(minValue,perfectSquare(n-i*i,dp) + 1);
	}

	dp[n] = minValue;

	return minValue;
}

// void longestCommonSubsequence(string text1, string text2,string ans,string max) {
//    	int l1 = text1.length();
//     int l2 = text2.length();
        
//    	if(l1==0 || l2==0){
//    		if(ans.length()>max.length)
//    			strcpy(max,ans);
//        	return ;
//   	}
        
//    	char ch1 = text1[0];
//    	char ch2 = text2[0];
        
//   	string ros1 = text1.substr(1);
//   	string ros2 = text2.substr(1);
        
//     int count = 0;
        
//   	if(ch1 == ch2){
//     	longestCommonSubsequence(ros1,ros2,ans+ch1);
//  	}else{
//     	longestCommonSubsequence(text1,ros2,ans);
//     	longestCommonSubsequence(ros1,text2,ans);
//     }

//  }

const int MAX = 1000;
int dp[MAX][MAX];

int lcsDP(string text1, string text2) {
   	int l1 = text1.length();
    int l2 = text2.length();
        
   	if(l1==0 || l2==0){
       return 0;
  	}
    
  	if(dp[l1][l2]!=-1){
  		return dp[l1][l2];
  	}

   	char ch1 = text1[0];
   	char ch2 = text2[0];
        
  	string ros1 = text1.substr(1);
  	string ros2 = text2.substr(1);
        
    int count ;
        
  	if(ch1 == ch2){
    	count =lcsDP(ros1,ros2)+1;
 	}else{
    	int a = lcsDP(text1,ros2);
    	int b = lcsDP(ros1,text2);
      	count = max(a,b);
 	}
 	dp[l1][l2]=count;
 	return count;
}


int Change(int n){
	
	if(n==0){
		return 0;
	}

	int p =0;
	int p1,p2,p3;

	p1 = n/2;
	p2 = n/3;
	p3 = n/4;

	p1 = max(p1,Change(p1));
	p2 = max(p2,Change(p2));
	p3 = max(p3,Change(p3));

	p = p1+p2+p3;

	return p;
}


int lcsPureDP(string s1,string s2){
	int l1 = s1.length();
	int l2 = s2.length();

	int dp[l1+1][l2+1];

	memset(dp,0,sizeof(dp));

	for(int i=0;i<=l1;i++){
		for(int j=0;j<=l2;j++){
			if (i == 0 || j == 0)  
            	dp[i][j] = 0;  
      
			else if(s1[i-1]==s2[j-1]){
				dp[i][j] = dp[i-1][j-1]+1;
			}else{
				dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
			}
		}
	}

	// for(int i=0;i<=l1;i++){
	// 	for(int j=0;j<=l2;j++){
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	cout<<dp[l1][l2];
}


int TargetSum(int arr[],int n,int si,int s,int countedSum){
	if(si==n){
		if(countedSum == s)
			return 1;
		else
			return 0; 
	}

	int num = arr[si];

	int count = 0;

	count += TargetSum(arr,n,si+1,s,countedSum+1);
	count += TargetSum(arr,n,si+1,s,countedSum-1);

	return count;
}

int EmptySubsequence(string str){

	unordered_map<char,int > h; //store key value pair

	int dp[str.length()+1];
	memset(dp,-1,sizeof(dp));
	dp[0]=1;

	for(int i =1;i<=str.length();i++){

		dp[i] = 2*dp[i-1];

		if(h.count(str[i-1])){
			dp[i] = dp[i] - dp[h[str[i-1]]];
		}

		h[str[i-1]] = i-1;

		//cout<<dp[i]<<" ";
	}

	return dp[str.length()]-1;

}

int distinctDP[6][4];

int helper(string s,string t){

	int sl = s.length();
	int tl = t.length();

	distinctDP[sl-1][tl-1] = 1;
	distinctDP[sl-2][tl] = 0;


	for(int i = sl;i>=0;i--){

		for(int j = tl;j>=0;j--){

			if(sl==0||tl==0)
				dp[i][j] = 0;

			if(s[i-1]==s[j-1]){
				dp[i][j] = dp[i+1][j+1] + dp[i+1][j];
			}else{
				dp[i][j] =dp[i+1][j];
			}
		}

	}


	return dp[0][0];
}

int maxV  = INT_MIN;
unordered_map<string,int> h;

int maxValue(int value[],int weights[],int n,int si,int addvalue,int maxweight,int tweight){

	string key = to_string(si)+" "+to_string(tweight);

	if(h.count(key)){
		return h[key];
	}

	if(tweight==maxweight){
		maxV = max(maxV,addvalue);
		return maxV;
	}

	if(tweight>maxweight or si>=n){
	 	return 0;
	 }

	int a = maxValue(value,weights,n,si+1,addvalue +value[si],maxweight,tweight+weights[si]);
	int b = maxValue(value,weights,n,si+1,addvalue,maxweight,tweight);

	h[key] = max(a,b);

	// for(int i=0;i<5;i++){
	// 	for(int j=0;j<9;j++){
	// 		string key1 = to_string(i)+" "+to_string(j);
	// 		cout<<h[key1]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	return h[key];
}


int main()
{	

	// int n = 12;
	// int dp[n+1];
	// memset(dp,-1,sizeof(dp));
	// //cout<<ReduceToOne(10)<<endl;

	// cout<<perfectSquare(n,dp);

// 	memset(dp,-1,sizeof(dp));
// //	cout<<longestCommonSubsequence("abcde","ace")<<endl;
// //	longestCommonSubsequence("adc","abe","");
// // 	lcsDP("fcvafurqjylclorwfoladwfqzkbebslwnmpmlkbezkxoncvwhstwzwpqxqtyxozkpgtgtsjobujezgrkvevklmludgtyrmjaxyputqbyxqvupojutsjwlwluzsbmvyxifqtglwvcnkfsfglwjwrmtyxmdgjifyjwrsnenuvsdedsbqdovwzsdghclcdexmtsbexwrszihcpibwpidixmpmxshwzmjgtadmtkxqfkrsdqjcrmxkbkfoncrcvoxuvcdytajgfwrcxivixanuzerebuzklyhezevonqdsrkzetsrgfgxibqpmfuxcrinetyzkvudghgrytsvwzkjulmhanankxqfihenuhmfsfkfepibkjmzybmlkzozmluvybyzsleludsxkpinizoraxonmhwtkfkhudizepyzijafqlepcbihofepmjqtgrsxorunshgpazovuhktatmlcfklafivivefyfubunszyvarcrkpsnglkduzaxqrerkvcnmrurkhkpargvcxefovwtapedaluhclmzynebczodwropwdenqxmrutuhehadyfspcpuxyzodifqdqzgbwhodcjonypyjwbwxepcpujerkrelunstebopkncdazexsbezmhynizsvarafwfmnclerafejgnizcbsrcvcnwrolofyzulcxaxqjqzunedidulspslebifinqrchyvapkzmzwbwjgbyrqhqpolwjijmzyduzerqnadapudmrazmzadstozytonuzarizszubkzkhenaxivytmjqjgvgzwpgxefatetoncjgjsdilmvgtgpgbibexwnexstipkjylalqnupexytkradwxmlmhsnmzuxcdkfkxyfgrmfqtajatgjctenqhkvyrgvapctqtyrufcdobibizihuhsrsterozotytubefutaxcjarknynetipehoduxyjstufwvkvwvwnuletybmrczgtmxctuny",
// // 		"nohgdazargvalupetizezqpklktojqtqdivcpsfgjopaxwbkvujilqbclehulatshehmjqhyfkpcfwxovajkvankjkvevgdovazmbgtqfwvejczsnmbchkdibstklkxarwjqbqxwvixavkhylqvghqpifijohudenozotejoxavkfkzcdqnoxydynavwdylwhatslyrwlejwdwrmpevmtwpahatwlaxmjmdgrebmfyngdcbmbgjcvqpcbadujkxaxujudmbejcrevuvcdobolcbstifedcvmngnqhudixgzktcdqngxmruhcxqxypwhahobudelivgvynefkjqdyvalmvudcdivmhghqrelurodwdsvuzmjixgdexonwjczghalsjopixsrwjixuzmjgxydqnipelgrivkzkxgjchibgnqbknstspujwdydszohqjsfuzstyjgnwhsrebmlwzkzijgnmnczmrehspihspyfedabotwvwxwpspypctizyhcxypqzctwlspszonsrmnyvmhsvqtkbyhmhwjmvazaviruzqxmbczaxmtqjexmdudypovkjklynktahupanujylylgrajozobsbwpwtohkfsxeverqxylwdwtojoxydepybavwhgdehafurqtcxqhuhkdwxkdojipolctcvcrsvczcxedglgrejerqdgrsvsxgjodajatsnixutihwpivihadqdotsvyrkxehodybapwlsjexixgponcxifijchejoxgxebmbclczqvkfuzgxsbshqvgfcraxytaxeviryhexmvqjybizivyjanwxmpojgxgbyhcruvqpafwjslkbohqlknkdqjixsfsdurgbsvclmrcrcnulinqvcdqhcvwdaxgvafwravunurqvizqtozuxinytafopmhchmxsxgfanetmdcjalmrolejidylkjktunqhkxchyjmpkvsfgnybsjedmzkrkhwryzan");
	
// 	int n;
// 	cin>>n;

// 	int arr[n];
// 	for(int i=0;i<n;i++)
// 		cin>>arr[i];

// 	maxSum(arr,n);



	// int n;
	// cin>>n;
	// cout<<Change(n)<<endl;


	// lcsPureDP("abcde","ade");

	// int arr[]={1,1,1,1,1};
	// int n = 5;

	// cout<<TargetSum(arr,n,0,3,0)<<endl;

	// cout<<EmptySubsequence("aba")<<endl;

	// memset(dp,-1,sizeof(dp));

	// cout<<helper("bbaag","bag")<<endl;


	// for(int i = 0;i<6;i++){
	// 	for(int j = 0;j<4;j++){
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	int value[] = {50,20,60,30};
	int weights[] = {5,3,8,3};

	maxValue(value,weights,4,0,0,8,0);
	cout<<maxV<<endl;
	return 0;
}
