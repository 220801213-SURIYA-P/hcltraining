#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
int height(struct node* root){
    if(root==NULL) return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    return (lh>rh?lh:rh)+1;
}
int isBalanced(struct node* root){
    if(root==NULL) return 1;
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)>1) return 0;
    return isBalanced(root->left)&&isBalanced(root->right);
}
int main(){
    printf("Check balance logic implemented.\n");
    return 0;
}