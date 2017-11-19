#include<iostream>
using namespace std;
struct Node{
	int Info; Node *Left, *Right;
};
typedef Node *Tree; 
void KhoiTao(Tree &root){
	root = NULL;
}
Tree MakeNode(int x){
	Tree P = new Node;
	P->Info = x;
	P->Left=NULL;
	P->Right=NULL;
	return P;
}
Tree Tim(Tree root , int x){
	Tree P;
	if(root->Info==x) return root;
	if(root==NULL) return NULL;
	P = Tim(root->Left,x);
	if(P==NULL){
		Tim(root->Right,x);
	}
	return P;
}
void DuyetTruoc(Tree root){
	if(root!=NULL){
		cout<<root->Info;
		DuyetTruoc(root->Left);
		DuyetTruoc(root->Right);
	}
}
int main(){
	Tree root;
	int x,n;
	cout<<"Nhap gia tri cua node goc: "; cin>>x;
	root = MakeNode(x);
	cout<<"nhap so phan tu ban dau cua cay: "; cin>>n;
	for(int i=1;i<n;i++){
		cout<<"nhap gia tri cua node cha   "; cin>>x;
		Tree Q = Tim(root,x);
		if(Q==NULL) cout<<"ko chen duoc ";
		else{
			cout<<"gia tri node can chen: ";
			cin>>x;
			int vitri;
		Tree P = MakeNode(x);
		cout<<"chon 1 neu chon ben trai, 2 neu chen ben phai:  "; cin>>vitri;
		if(vitri==1) Q->Left = P;
		else if(vitri==2) Q->Right = P;
		}
		
	}
	DuyetTruoc(root);
}
