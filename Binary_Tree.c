#include<stdio.h>
#include<malloc.h>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* createnode( int data)
{
    struct Node *n ;
    n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n ;
}


int isBST( struct Node* root)
{
    struct Node *prev = NULL;
    if(root!= NULL )
    {
        if(!isBST(root->left))
        return 0 ;
        if(prev!= NULL && root->data <= prev->data)
        return 0;
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
    
}


struct Node * search(struct Node* root , int key)
{
    if(root!= NULL)
    return NULL;

if(key == root->data){
    return root;
}
else if(key< root->data)
return search(root->left,key);
else
return search(root->right , key);

}


void transverse(struct Node* root )
{
if(root != NULL)
{
        transverse(root->left);
    transverse(root->right);
    printf(" %d", root->data);

}
};

int main() 
{
    struct Node *p = createnode(0);
        struct Node *p1 = createnode(1);
    struct Node *p2 = createnode(2);
    struct Node *p3 = createnode(3);
    struct Node *p4 = createnode(4);
        struct Node *p5 = createnode(5);

     p->left = p1;
         p->right = p2;
              p1->left = p3;
                   p2->right = p4;
                   p1->right = p5;
 transverse(p);

    
//               0
//          1       2
//        3   5        4
//
return 0 ;

 
}