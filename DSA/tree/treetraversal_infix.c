#include <stdio.h>
#include <stdlib.h>

// Define the tree node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void infixTraversal(struct Node* root) {
    if (root == NULL) return;

    // 1. Traverse the left subtree
    infixTraversal(root->left);

    // 2. Visit the root (print data)
    printf("%d ", root->data);

    // 3. Traverse the right subtree
    infixTraversal(root->right);
}

void postfixTraversal(struct Node* root) {
    if (root == NULL) return;

    // 1. Traverse the left subtree
    postfixTraversal(root->left);

    // 3. Traverse the right subtree
    postfixTraversal(root->right);

    // 2. Visit the root (print data)
    printf("%d ", root->data);

}

void prefixTraversal(struct Node* root) {
    if (root == NULL) return;

    // 2. Visit the root (print data)
    printf("%d ", root->data);

    // 1. Traverse the left subtree
    prefixTraversal(root->left);

    // 3. Traverse the right subtree
    prefixTraversal(root->right);

}

int countLeafNodes(struct Node* node) {
    // 1. If tree is empty
    if (node == NULL) {
        return 0;
    }
    
    // 2. If node is a leaf (no children)
    if (node->left == NULL && node->right == NULL) {
        return 1;
    }
    
    // 3. Otherwise, sum leaves from both subtrees
    return countLeafNodes(node->left) + countLeafNodes(node->right);
}

int countTotalNodes(struct Node* root) {
    // If the tree is empty, it has 0 nodes
    if (root == NULL) {
        return 0;
    }

    // 1 (current node) + sum of nodes in left and right subtrees
    return 1 + countTotalNodes(root->left) + countTotalNodes(root->right);
}

int main() {
    // Constructing a sample tree:
    //      1
    //     / \
    //    2   3
    //   / \
    //  4   5
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->left->left->left= createNode(8);
    root->left->left->right= createNode(9);
    
    root->left->right->left= createNode(10);
    root->left->right->right= createNode(11);

    root->right->left = createNode(6);
    root->right->right = createNode(7);
  
    root->right->left->left = createNode(12);
    root->right->left->right = createNode(13);
    

    printf("Infix (In-order) Traversal: ");
    infixTraversal(root); // Expected Output: 4 2 5 1 3
    printf("\n");
    printf("Postfix  Traversal: ");
    postfixTraversal(root); // Expected Output: 4 2 5 1 3
    printf("\n");
    
    printf("prefixTraversal  Traversal: ");
    prefixTraversal(root); // Expected Output: 4 2 5 1 3
    printf("\n");

    int leafNodeCnt = countLeafNodes(root);
    printf("\nleafNodeCnt  : %d",leafNodeCnt);

    int totalNoNodes = countTotalNodes(root);
    printf("\ntotalNoNodes  : %d",totalNoNodes);

    return 0;
}


