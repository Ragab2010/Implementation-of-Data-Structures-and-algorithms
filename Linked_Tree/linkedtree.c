/*
 * linkedtree.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */


#include "linkedtree.h"

void InsertTreeAux(TreeNode *pt , EntryTree *pe , int *pdepth){

	if(!pt){
		pt=(TreeNode *)malloc(sizeof(TreeNode));
		pt->left=NULL;
		pt->right=NULL;
	}
	else if(LT(pe , pt->entry)){
		InsertTreeAux(pt->left,pe , pdepth);
	}else{
		InsertTreeAux(pt->right,pe , pdepth);
	}
}
void InsertTree(Tree *pt , EntryTree *Pe ){
	int d=0;
	InsertTreeAux(pt->head, pe ,&d);
	if(pt->depth < d){
		pt->depth =d;
	}
	pt->size++;
}

void InorderRec(Tree *pt ,void (*pvisit)(EntryTree)){
	while(pt->head){
		InorderRec(pt->head->left , pvisit);
		(*pvisit)(pt->head->entry);
		InorderRec(pt->head->right , pvisit);
	}
}

void ClearTreeRecAux(Tree *pt){
	if(pt->head){
		ClearTreeRecAux(pt->head->left);
		ClearTreeRecAux(pt->head->right);
		free(pt->head);
	}
}
void ClearTreeRec(Tree *pt){
	ClearTreeRecAux(pt);
	pt->head=NULL;
	pt->size=0;
	pt->depth=0;
}
void CreatTree(Tree *pt){
	pt->head =NULL;
	pt->size =0;
	pt->size=0;
}
int TreeEmpty(Tree *pt){
	return !pt->head;
}

int TreeFull(Tree *pt){
	return 0;
}
