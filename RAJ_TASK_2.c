#include <stdio.h>
#include <stdlib.h>

struct Element {
    int value;
    struct Element* nextNode;
};

void addNode(struct Element** start, int number) {
    struct Element* node = (struct Element*)malloc(sizeof(struct Element));
    node->value = number;
    node->nextNode = NULL;

    if (*start == NULL) {
        *start = node;
        return;
    }

    struct Element* current = *start;
    while (current->nextNode)
        current = current->nextNode;

    current->nextNode = node;
}

void removeNode(struct Element** start, int number) {
    struct Element *current = *start, *previous = NULL;

    if (current && current->value == number) {
        *start = current->nextNode;
        free(current);
        printf("Item %d removed.\n", number);
        return;
    }

    while (current && current->value != number) {
        previous = current;
        current = current->nextNode;
    }

    if (!current) {
        printf("Item %d not found in the list.\n", number);
        return;
    }

    previous->nextNode = current->nextNode;
    free(current);
    printf("Item %d removed.\n", number);
}

void showList(struct Element* start) {
    if (!start) {
        printf("Nothing to display. List is empty.\n");
        return;
    }

    printf("Current List: ");
    while (start) {
        printf("%d ", start->value);
        start = start->nextNode;
    }
    printf("\n");
}

int main() {
    struct Element* startNode = NULL;
    int action, item;

    while (1) {
        printf("\n1. Add  2. Remove  3. View  4. Exit\nChoose an option: ");
        scanf("%d", &action);

        if (action == 1) {
            printf("Enter number to add: ");
            scanf("%d", &item);
            addNode(&startNode, item);
        }
        else if (action == 2) {
            printf("Enter number to remove: ");
            scanf("%d", &item);
            removeNode(&startNode, item);
        }
        else if (action == 3) {
            showList(startNode);
        }
        else if (action == 4) {
            printf("Exiting program.\n");
            break;
        }
        else {
            printf("Invalid selection. Try again.\n");
        }
    }

    return 0;
}