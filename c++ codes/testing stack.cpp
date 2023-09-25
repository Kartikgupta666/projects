#include <stdio.h>
#include <iostream>
#include <process.h>
void push();
int pop();
void traverse();
int stack[5];
int top = -1 ;
void main() {
    int choice ;
    char ch ;
    do {
        clrscr();
        printf("\n1.push");
        printf("\n2.pop");
        printf("\n3.TRAVERSE");
        printf("\n4.Exit");
        printf("\nEnter your choice");
        scanf("%d" , &choice);
        switch(choice){
            case 1 : push();
            break;
            case 2 : printf("\n the deleted element is %d" , pop());
            break;
            case 3 : traverse();
            break;
            case 4: exit(0);
        }
    }

    while (choice !=4);
    
}

void push() {
    int item;
    if(top == 4) {
        printf("\n The stack is full");
    }
    else {
        printf("Enter the element to be inserted");
        scanf("%d" , &item);
        top = top + 1 ;
        stack[top] = item;
    }
}

int pop()
{
    int item;
    if(top == -1) {
        printf("The stack is Empty");

    }
    else{
        item = stack[top];
        top = top - 1;
    }
    return (item);
}
void traverse(){
    int i;
    if(top == -1) {
        printf("The stack is Empty");
    }
    else {
        for(i = top ; i >= 0 ; i --) {
            printf("\n %d" , stack[i]);
        }
    }
}