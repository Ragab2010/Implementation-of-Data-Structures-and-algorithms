/*
 * linkedtree.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */

#ifndef LINKEDTREE_H_
#define LINKEDTREE_H_

#include <string.h>
/*********************************************************/
#define EQ(a, b) ((a)==(b))
#define LT(a, b) ((a)<(b))
#define LE(a, b) ((a)<=(b))
#define GT(a, b) ((a)>(b))
#define GE(a, b) ((a)>=(b))
//#define EQ(a, b) (!strcmp((a), (b)))
//#define LT(a, b) (strcmp((a), (b))<0)
//#define LE(a, b) (strcmp((a), (b))<=0)
//#define GT(a, b) (strcmp((a), (b))>0)
//#define GE(a, b) (strcmp((a), (b))>=0)
/*********************************************************/
typedef int EntryTree  ;

//typedef TreeNode *pl;

typedef struct treeNode{
	EntryTree entry;
	struct  treeNode *right , *left;
}TreeNode;

typedef struct tree{
	 TreeNode * head;
	 int size;
	 int depth;
}Tree;



/*PROTOTYPE*/
void InsertTreeAux(TreeNode *pt , EntryTree *pe , int *pdepth);
void InsertTree(Tree *pt , EntryTree *Pe );
void InorderRec(Tree *pt ,void (*pvisit)(EntryTree));
void ClearTreeRecAux(Tree *pt);
void ClearTreeRec(Tree *pt);
void CreatTree(Tree *pt);
int TreeEmpty(Tree *pt);
int TreeFull(Tree *pt);

#endif /* LINKEDTREE_H_ */
