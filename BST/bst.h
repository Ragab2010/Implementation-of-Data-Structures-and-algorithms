/*
 * bst.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */

#ifndef BST_H_
#define BST_H_

#include <stdio.h>

typedef int ENTRY;

typedef struct bstnode{
	ENTRY data;
	struct bstnode *left;
	struct bstnode *right;
}bstNode;

typedef struct tree{
	bstNode * root;
	int size=0;
	int depth=0;
}Tree;


#endif /* BST_H_ */
