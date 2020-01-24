#include <iostream>

using namespace std;


class TREE{
private:

	struct node{
		int data;
		node * right;
		node * left;		
	}*root;

	void insert(int , node*);
	void display(node *);
	void destroy_tree(node *);
public:

	TREE();
	~TREE();
	bool isEmpty();
	void insert(int);
	void destroy_tree();
	void display();
};

TREE::TREE(){
	root = NULL;
}

TREE::~TREE(){
	cout<<endl<<"[DESTROYING TREE]";
	destroy_tree();
}

void TREE::destroy_tree(){
	destroy_tree(root);
}

bool TREE::isEmpty(){
	if(root==NULL){
		return true;
	}
	return false;
}

void TREE::destroy_tree(node * temp){
	if(temp != NULL){
		destroy_tree(temp->right);
		destroy_tree(temp->left);
		delete temp;
	}
}

void TREE::insert(int key){
	if(root == NULL){
		root = new node;
		root->data = key;
		root->left = NULL;
		root->right = NULL;
	}
	else{
		insert(key , root);
	}
}

void TREE::insert(int key,node* leaf){
	if(key < leaf->data){
		if(leaf->left != NULL){
			insert(key,leaf->left);
		}
		else{
			leaf->left = new node;
			leaf->left->data=key;
			leaf->left->right = NULL;
			leaf->left->left = NULL;
		}
	}
	else{
		if(leaf->right != NULL){
			insert(key , leaf->right);
		}
		else{
			leaf->right = new node;
			leaf->right->data=key;
			leaf->right->right = NULL;
			leaf->right->left = NULL;
		}
	}
}

void TREE::display(){
	if(isEmpty()){
		cout<<"[TREE IS EMPTY]"<<endl;
	}
	else{
		display(root);
	}
}

void TREE::display(node* leaf){
	if(leaf != NULL){
		display(leaf->left);
		cout<<leaf->data<<" ";
		display(leaf->right);
	}
}

int main(){

	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif

	TREE t;
	t.display();
	int x;
	
	for(int i=0;i<7;i++){
		cin>>x;
		t.insert(x);
	}
	t.display();

	return 0;
}