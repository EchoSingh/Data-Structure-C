#include <stdio.h>
#include <stdlib.h>

typedef struct node *NodePtr;

struct node {
    int data;
    NodePtr llink;
    NodePtr rlink;
};

NodePtr createnode(int Data) {
    NodePtr newnode = (NodePtr)malloc(sizeof(struct node));
    newnode->data = Data;
    newnode->llink = NULL;
    newnode->rlink = NULL;
    return newnode;
}

NodePtr Head = NULL;
NodePtr Tail = NULL;

void insert_at_begin() {
    int value;
    printf("Enter the value you want to insert \n");
    scanf("%d", &value);
    NodePtr newnode = createnode(value);
    if (Head == NULL) {
        Head = newnode;
        Tail = newnode;
        return;
    }
    newnode->rlink = Head;
    Head->llink = newnode;
    Head = newnode;
}

void insert_at_end() {
    int value;
    printf("Enter the value you want to insert \n");
    scanf("%d", &value);
    NodePtr newnode = createnode(value);
    if (Head == NULL) {
        Head = newnode;
        Tail = newnode;
        return;
    }
    newnode->llink = Tail;
    Tail->rlink = newnode;
    Tail = newnode;
}

void delete_node(int value) {
    if (Head == NULL) {
        printf("List is Empty!!!\n");
        return;
    }
    NodePtr temp = Head;
    while (temp != NULL) {
        if (temp->data == value) {
            if (temp == Head) {
                Head = temp->rlink;
                if (Head != NULL) {
                    Head->llink = NULL;
                } else {
                    Tail = NULL;
                }
            } else if (temp == Tail) {
                Tail = temp->llink;
                Tail->rlink = NULL;
            } else {
                temp->llink->rlink = temp->rlink;
                temp->rlink->llink = temp->llink;
            }
            free(temp);
            printf("Node with value %d deleted successfully.\n", value);
            return;
        }
        temp = temp->rlink;
    }
    printf("Node with value %d not found in the list.\n", value);
}

void search_value(int value) {
    if (Head == NULL) {
        printf("List is Empty!!!\n");
        return;
    }
    NodePtr temp = Head;
    while (temp != NULL) {
        if (temp->data == value) {
            printf("Value %d found in the list.\n", value);
            return;
        }
        temp = temp->rlink;
    }
    printf("Value %d not found in the list.\n", value);
}

void display() {
    if (Head == NULL) {
        printf("List is Empty!!!!\n");
        return;
    } else {
        printf("The List is :\n");
        NodePtr temp = Head;
        while (temp != NULL) {
            printf("%d <->", temp->data);
            temp = temp->rlink;
        }
        printf(" NULL\n");
    }
}

int main() {
    int choice, value;

    do {
        printf("\nDoubly Linked List Operations:\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Delete a node\n");
        printf("4. Search for a value\n");
        printf("5. Display the list\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert_at_begin();
                break;
            case 2:
                insert_at_end();
                break;
            case 3:
                printf("Enter the value to delete: ");
                scanf("%d", &value);
                delete_node(value);
                break;
            case 4:
                printf("Enter the value to search: ");
                scanf("%d", &value);
                search_value(value);
                break;
            case 5:
                display();
                break;
            case 6:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 6);

    return 0;
}

