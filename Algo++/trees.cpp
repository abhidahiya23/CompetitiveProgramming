#include <bits/stdc++.h>

using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

node* constructTree(){
	int data;
	cin>>data;

	if(data==-1){
		return NULL;
	}

	node*root = NULL;

	if(root==NULL){
		root = new node(data);
	}

	root->left = constructTree();
	root->right = constructTree();

	return root;
}

void preorder(node* root){
	if(root==NULL){
		return;
	}

	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void inOrder(node* root){
	if(root==NULL){
		return;
	}

	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}

void postOrder(node* root){
	if(root==NULL){
		return;
	}

	postOrder(root->left);
	postOrder(root->right);
	cout<<root->data<<" ";
}

bool search(node* root,int data){
	if(root==NULL){
		return false;
	}

	if(root->data == data){
		return true;
	}

	bool l = search(root->left,data);
	bool r = search(root->right,data);
	return l or r;
}

int countNodes(node*root){
	if(root==NULL){
		return 0;
	}


	int leftCount = countNodes(root->left);
	int rightCount = countNodes(root->right);

	return leftCount + rightCount + 1;
}

int sumOfNodes(node*root){
	if(root==NULL){
		return 0;
	}

	int lsum = sumOfNodes(root->left);
	int rsum = sumOfNodes(root->right);

	return lsum+rsum+root->data;
}

int height(node* root){
	if(root==NULL){
		return -1;
	}


	int l = height(root->left);
	int r = height(root->right);	

	return max(l,r)+1;
}

int diameter(node* root,int maxSum){

	if(root==NULL){
		return -1;
	}

	int l=0,r=0;
	l += diameter(root->left,maxSum)+1;
	r += diameter(root->right,maxSum)+1;

	if(l>r)
		maxSum = max(l+r,l);
	else
		maxSum = max(l+r,r);

	return maxSum;

}


// int height(node* root){
// 	if(root==NULL){
// 		return -1;
// 	}

// 	int leftHeight = height(root->left);
// 	int rightHeight = height(root->right);

// 	return max(leftHeight,rightHeight) + 1;
// }

int diameter(node*root){
	if(root==NULL){
		return 0;
	}

	int leftDiameter = diameter(root->left);
	int rightDiameter = diameter(root->right);

	int leftHeight = height(root->left);
	int rightHeight = height(root->right);

	int totalDiamter = max(leftHeight+rightHeight+2,max(leftDiameter,rightDiameter));
	return totalDiamter;
}

bool isBalanced(node*root){
	if(root==NULL){
		return true;
	}

	bool leftBalanced = isBalanced(root->left);
	bool rightBalanced = isBalanced(root->right);

	if(!leftBalanced or !rightBalanced){
		return false;
	}

	int leftHeight = height(root->left);
	int rightHeight = height(root->right);

	int gap = abs(leftHeight - rightHeight);

	if(gap>1){
		return false;
	}else{
		return true;
	}
}

class DiaHeight{
public:
	int height;
	int diameter;
};

class BalHeight{
public:
	int height;
	bool balance;
};

BalHeight isBalancedOptimised(node* root){
	BalHeight bal;
	if(root==NULL){
		bal.height = -1;
		bal.balance = true;
		return bal;
	}

	BalHeight left = isBalancedOptimised(root->left);
	BalHeight right = isBalancedOptimised(root->right);

	bal.height = max(left.height,right.height) + 1;

	if((!left.balance) or (!right.balance)){
		bal.balance = false;
		return bal;
	}

	int gap = abs(left.height - right.height);

	if(gap>1){
		bal.balance = false;
	}else{
		bal.balance = true;
	}

	return bal;

}



DiaHeight diameterOptimized(node*root){
	DiaHeight val;
	if(root==NULL){
		val.diameter = 0;
		val.height = -1;
		return val;
	}

	DiaHeight leftPair = diameterOptimized(root->left);
	DiaHeight rightPair = diameterOptimized(root->right);

	int leftDiameter = leftPair.diameter;
	int rightDiameter = rightPair.diameter;
	int throughRoot = leftPair.height + rightPair.height + 2;

	val.diameter = max(throughRoot,max(leftDiameter,rightDiameter));

	val.height = max(leftPair.height,rightPair.height) + 1;

	return val;
}

void Root2Leaf(node*root,string ans){

	if(root->left == NULL and root->right == NULL){
		ans = ans + to_string(root->data);
		cout<<ans<<endl;
		return ;
	}

	Root2Leaf(root->left,ans+to_string(root->data));
	Root2Leaf(root->right,ans+to_string(root->data));

}

// void Root2Leaf(node*root,int 3,int 6string ans){

// 	if(root->left == NULL || root->right == NULL){
// 		ans = ans + to_string(root->data);
// 		cout<<ans<<endl;
// 		return ;
// 	}

// 	if()

// 	Root2Leaf(root->left,ans+to_string(root->data));
// 	Root2Leaf(root->right,ans+to_string(root->data));

// }

node* lca(node* root,int data1,int data2){
	if(root==NULL){
		return NULL;
	}

	if(root->data == data1 or root->data==data2){
		return root;
	}

	node* leftLCA = lca(root->left,data1,data2);
	node* rightLCA = lca(root->right,data1,data2);

	if(leftLCA!=NULL and rightLCA!=NULL){
		return root;
	}

	if(leftLCA==NULL and rightLCA==NULL){
		return NULL;
	}

	return leftLCA!=NULL ? leftLCA : rightLCA;

}

int distCount(node* root,int data,int si){
	if(root==NULL){
		return 0;
	}

	if(root->data == data){
		return si;
	}

	int ldist = distCount(root->left,data,si+1);
	int rdist = distCount(root->right,data,si+1);

	return ldist+rdist;

}

//unordered_map<int,int> h;
int c=0;
void leftView(node*root,int level){

	if(root==NULL){
		return;
	}

	// if(!h.count(level)){
	// 	cout<<root->data<<" ";
	// 	h[level] = 1;
	// }

	if(c==level){
		cout<<root->data<<" ";
		c++;
	}

	leftView(root->left,level+1);
	leftView(root->right,level+1);

}

void leftBoundary(node* root){

	if(root==NULL){
		return;
	}
	if(root->left == NULL and root->right == NULL){
		return;
	}

	cout<<root->data<<" ";

	leftBoundary(root->left);

	if(root->left ==NULL and root->right != NULL)
		leftBoundary(root->right);
	

}

void Leaf(node*root){

	if(root->left == NULL and root->right == NULL){
		cout<<(root->data)<<" "<<endl;
		return ;
	}

	Leaf(root->left);
	Leaf(root->right);

}

int maxSum =INT_MIN;
int maxSumPath(node*root){

	if(root==NULL){
		return 0;
	}

	int leftsum = maxSumPath(root->left);
	int rightsum = maxSumPath(root->right);

	int a = max(leftsum+root->data,rightsum+root->data);

	maxSum = max(leftsum+rightsum+root->data,a) ;

	return a;

}

// void levelOrder()

int main(){

	node* root = NULL;

	root = constructTree();

	preorder(root);
	cout<<endl;
	// inOrder(root);
	// cout<<endl;
	// postOrder(root);
	// cout<<endl;

	// cout<<countNodes(root)<<endl;

	// cout<<sumOfNodes(root)<<endl;

	// cout<<search(root,7)<<endl;

	// cout<<height(root)<<endl;

	// cout<<diameter(root,0);	
	// BalHeight bal;
	// bal = isBalancedOptimised(root);
	// cout<<bal.balance<<endl;

	//Root2Leaf(root,"");

	// node* val;
	// val = lca(root,2,3);
	// cout<<val->data<<endl;

	// int ans = distCount(val,2,0) + distCount(val,3,0); 

	// cout<<ans<<endl;

	// leftView(root,0);

	// // Leaf(root);

	// int a = maxSumPath(root);
	// cout<<maxSum<<endl;

	return 0;
}

// 4 2 1 -1 -1 3 -1 -1 6 5 -1 -1 7 -1 -1