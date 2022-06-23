typedef int BITREE_TYPE; /* 格納データの型 */

struct node
{
	BITREE_TYPE value;	/* ノードの値 */
	struct node *left;	/* 左ノードのアドレス */
	struct node *right; /* 右ノードのアドレス */
};
typedef struct node BITREE_NODE;

void error(char *msg);
BITREE_NODE *createNode(BITREE_TYPE x);
void destroyBITree(BITREE_NODE *p);
int isLeafNode(BITREE_NODE *p);
void printBITree(BITREE_NODE *p, int tabs, int brief);
BITREE_NODE *inputBITree(char *str[], int len, int *end);
BITREE_TYPE sumValue(BITREE_NODE *p);