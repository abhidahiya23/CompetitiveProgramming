#include<iostream>
using namespace std;

class Tree{
public:
	int data;
	Tree* right;
	Tree* left;
	Tree(int data){
		this->data = data;
		this->right = NULL;
		this->left = NULL;
	}
};

Tree* constructTree(){
	int data;
	cin>>data;

	if(data == -1 ){
		return NULL;
	}

	Tree* root=NULL;

	if(root ==NULL){
		root = new Tree(data);
	}

	root->left = constructTree();
	root->right = constructTree();

	return root;
}

int c =0;
void leftview(Tree*root,int level){
	if(root==NULL){
		return;
	}

	if(c==level){
		cout<<root->data<<" ";
		c++;
	}
	leftview(root->left,level+1);
	leftview(root->right,level+1);
}

void preorder(Tree*root){
	if(root==NULL){
		return;
	}

	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(Tree*root){
	if(root==NULL){
		return;
	}

	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main() {
	Tree* root = NULL;

	root = constructTree();

	preorder(root);
	cout<<endl;

	inorder(root);
	cout<<endl;

	leftview(root,0);

	return 0;
}