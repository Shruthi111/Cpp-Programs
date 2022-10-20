#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct node
{
    int data;
    struct node *rchild;
    struct node *lchild;
};
typedef struct node *node;

node createnode(int data)
{
    node temp = (node)malloc(sizeof(struct node));
    temp->data = data;
    temp->lchild = NULL;
    temp->rchild = NULL;
    return temp;
}

int search(int inorder[], int s, int e, int cur)
{
    for (int i = s; i <= e; i++)
    {
        if (inorder[i] == cur)
        {
            return i;
        }
    }
}
node buildtree(int preorder[], int inorder[], int s, int e)
{
    int idx = 0;
    if (s > e)
    {
        return NULL;
    }
    int cur = preorder[idx];
    idx++;
    node node = createnode(cur);
    if (s == e)
    {
        return node;
    }
    int pos = search(inorder, s, e, cur);
    node->lchild = buildtree(preorder, inorder, s, pos - 1);
    node->rchild = buildtree(preorder, inorder, pos + 1, e);
    return node;
}

void inorderprint(node root)
{
    if (root != NULL)
    {
        inorderprint(root->lchild);
        printf("%d ", root->data);
        inorderprint(root->rchild);
    }
}

int main()
{
    int inorder[] = {4, 2, 1, 5, 3};
    int preorder[] = {1, 2, 4, 3, 5};
    node newnode = buildtree(preorder, inorder, 0, 4);
    inorderprint(newnode);
    return 0;
}