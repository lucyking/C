#include <iostream>
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    Node *next = NULL;
};

int revViewNode(Node *node);

int revFreeNode(Node *node);

int prSplite();

int genInt(int count, Node *node) {
    Node tmp;
//    tmp.val = ++count;
//    node->next = &tmp;
    while(count<10){
        node->next = (Node *) malloc(sizeof(Node));
        node->next->val = ++count;
        node->next->next = NULL;
        node = node->next;
    }
    return count;
}

int main() {
    int count = 1;
    std::cout << "Hello, World!" << std::endl;

    Node root;
    printf(">>>size of Node:%ld\n",sizeof(Node));
    //Node *tmp = (Node *) malloc(sizeof(Node));
    //tmp->val= 0;

    root.val = ++count;
    int retVal = genInt(count, &root);
    printf("retVal %d\n", retVal);
    prSplite();
    revViewNode(&root);
    revFreeNode(&root);
    //delete root;


    return 0;
}

int revViewNode(Node *node) {
    printf(">>>:%d\n", node->val);
    if (node->next != NULL)
        revViewNode(node->next);

    return 0;
};

int revFreeNode(Node *node) {
    printf(">>>Free node: %d\n",node->val);
    if (node->next != NULL)
        revFreeNode(node->next);
    free(node->next);
    node->next = NULL;
    return 0;
};


int prSplite() {
    printf("----------------\n");
}