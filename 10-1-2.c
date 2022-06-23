#include <stdio.h>
#include <stdlib.h>
// typedef char BITREE_TYPE;
// struct node
// {
//   BITREE_TYPE value;
//   struct node *left;
//   struct node *right;
// };
// typedef struct node BITREE_NODE;

// void printBITree(BITREE_NODE *p, int tabs);

int main(void)
{
  /* ノードの定義 */
  BITREE_NODE a = {1, NULL, NULL};
  BITREE_NODE b = {2, NULL, NULL};
  BITREE_NODE c = {3, NULL, NULL};
  BITREE_NODE d = {4, NULL, NULL};
  /* 2分木の作成 */
  a.left = &b;
  b.left = &c;
  b.right = &d;
  printBITree(&a, 0); /* 2分木の内容を出力する関数 */
  return 0;
}

// void printSubtree(BITREE_NODE *p)
// {
//   if (p == NULL)
//   {
//     printf("_");
//     return;
//   }
//   printf("[ ");
//   printf("%d ", p->value);
//   printSubtree(p->left);
//   printf(" ");
//   printSubtree(p->right);
//   printf(" ]");
// }

// // void printBITree(BITREE_NODE *p, int tabs)
// {
//   int i;
//   for (i = 0; i < tabs; i++)
//     printf("\t");
//   printSubtree(p);
//   printf("\n");
//   fflush(stdout);
// }