#include <iostream>

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

node* builtBST(node*root,int data){
	if(root==NULL){
		root = new node(data);
		return root;
	}

	if(data>root->data){
		root->right = builtBST(root->right,data);
	}else{
		root->left = builtBST(root->left,data);
	}

	return root;
}

node* insert(){

	int data;
	cin>>data;	

	node*root = NULL;

	while(data!=-1){
		root = builtBST(root,data);
		cin>>data;
	}

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

void inOrder(node*root){
	if(root==NULL){
	}

	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}

// bool search(node*root,int data){

// }

// bool isBST(node*root,int leftRange = INT_MIN,int rightRange=INT_MAX){
// 	if(root==NULL){
// 		return true;
// 	}

// 	bool leftBST = isBST(root->left,leftRange,root->data);
// 	bool rightBST = isBST(root->right,root->data,rightRange);

// 	if(!leftBST or !rightBST or root->data<leftRange or root->data > rightRange){
// 		return false;
// 	}else{
// 		return true;
// 	}
// }

// class checkBST(){
// public:
// 	int size;
// 	bool bst;
// }

// int max =INT_MIN;

// checkBST largestBST(node*root,int s,int leftRange = INT_MIN,int rightRange=INT_MAX){
// 	if(root==NULL){
// 		val.bst = true
// 		return val;
// 	}

// 	checkBST leftBST = isBST(root->left,leftRange,root->data);
// 	checkBST rightBST = isBST(root->right,root->data,rightRange);

// 	if(!leftBST or !rightBST or root->data<leftRange or root->data > rightRange){
// 		val.bst = false;
// 	}else{
// 		val.bst = true;
// 	}

// 	val.size = leftBST.size+rightBST.size+1;

// 	return val;

// }

// int BuildLevelOrder(int arr[],int n){	





// 	BuildLevelOrder(root,n/2,data);
// 	BuildLevelOrder(root,n+n/2,data);

// }

void Root2Leaf(node*&root){

	if(root->left == NULL and root->right == NULL){
		return ;
	}

	Root2Leaf(root->left);
	Root2Leaf(root->right);

	if(root->left != NULL and root->right != NULL){
		root->data = root->right->data + root->left->data;
		return;
	}

	if(root->left != NULL and root->right == NULL){
		root->data = root->left->data;
		return ;
	}

	if(root->left == NULL and root->right != NULL){
		root->data = root->right->data;
		return ;
	}

}

int main(){

	node* root = insert();
	inOrder(root);

	// Root2Leaf(root);

	// inOrder(root);
	cout<<endl;

	// checkBST val;

	//val = checkBST(root,0);

	// int arr[] = {1,2,3,4,5,6,7};
	// int n = 7;

	return 0;
}

// 4 2 1 3 6 5 7 -1