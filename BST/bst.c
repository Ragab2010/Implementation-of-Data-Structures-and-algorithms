/*
 * bst.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */
#include "bst.h"

void creatTree(Tree * pn){
	pn->root =NULL;
}

int isTreeEmpty(Tree *pn){
	return !(pn->root) ;
}
int isTreefull(Tree *pn){
	return NULL;
}
void getTreeNode(Tree * pn){
	(*pn)->root=(bstNode *)malloc(sizeof(bstNode));
	(*pn)->size++;
	pn->root->left = pn->root->right =NULL;

}

void insert(Tree *pn , int data){
	if(!*pn){
		getTreeNode(&pn->root);
	}
}


