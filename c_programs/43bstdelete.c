#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
struct node* minValue(struct node* root){
    while(root->left!=NULL) root=root->left;
    return root;
}
struct node* deleteNode(struct node* root,int val){
    if(root==NULL) return NULL;
    if(val<root->data) root->left=deleteNode(root->left,val);
    else if(val>root->data) root->right=deleteNode(root->right,val);
    else{
        if(root->left==NULL){
            struct node* temp=root->right;
            free(root); return temp;
        }
        else if(root->right==NULL){
            struct node* temp=root->left;
            free(root); return temp;
        }
        struct node* temp=minValue(root->right);
        root->data=temp->data;
        root->right=deleteNode(root->right,temp->data);
    }
    return root;
}