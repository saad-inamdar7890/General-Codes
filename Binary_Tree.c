#include<stdio.h>
#include<malloc.h>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node *inOrderPredecessor( struct Node * root)
{
    root = root->left;
    while(root->right !=    NULL)
    {
        root = root->right;
    }
    return root;
}


struct Node *deleteNode(struct Node *root , int value)
{
struct Node* ipre;
if(root == NULL){
    return NULL;
}
if(root->left == NULL && root->right == NULL){
    free(root);
}
if(value < root->data){
    deleteNode(root->left, value);
}
else if(value > root->data)
deleteNode(root->left, value);
else {
    ipre = inOrderPredecessor(root);
    root->data = ipre->data;
    deleteNode(root->left , ipre->data);
}
}




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
     static struct Node *prev = NULL;
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



void insert(struct Node *root , int key)
{
    struct Node *prev = NULL;
    while(root != NULL)
    {
        prev = root;
        if(key == root->data)
        return;
        else if(key < root->data)
        root = root->left;
        else
        root = root->right;
    }
    struct Node* new = createnode(key);
    if(key < prev->data)
    prev->left = new;
    else
    prev->right = new;
}


void transverse(struct Node* root )
{
if(root != NULL)
{
        transverse(root->left);
    printf(" %d", root->data);
        transverse(root->right);


}
};

int main() 
{
    struct Node *p = createnode(4);
        struct Node *p1 = createnode(1);
    struct Node *p2 = createnode(5);
    struct Node *p3 = createnode(0);
    struct Node *p4 = createnode(6);
        struct Node *p5 = createnode(3);

     p->left = p1;
         p->right = p2;
              p1->left = p3;
                   p2->right = p4;
                   p1->right = p5;
 
 printf("\n%d \n",isBST(p));
deleteNode(p,5);
transverse(p);
    
//               0
//          1       2
//        3   5        4
//
return 0 ;

 
}