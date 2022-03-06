#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    char * value; //must use dynamic allocation 
    struct node* next;
} node_t;

node_t * construct_3_strs() {
node_t* x = (node_t*)malloc(sizeof(node_t));
node_t* y = (node_t*)malloc(sizeof(node_t));
node_t* z = (node_t*)malloc(sizeof(node_t));
  
x->value = "CS232";
y->value = "is";
z->value = "awesome";
x->next = y;
y->next = z;
z->next = x;
return x;
}

//You can ignore the following code for testing
int dump_all(node_t*);
int main (int argc, char ** argv) {
    node_t * x = construct_3_strs();
    return dump_all(x);

}

int dump_all(node_t * x) {
    printf("x -> %s", x->value);
    node_t * y = x->next;
    printf(" %s", y->value);
    node_t * z = y->next;
    printf(" %s\n", z->value);
    if(z->next != x) {
    	printf("failed");
	return -1;
    } else {
        return 0;
    }
}
