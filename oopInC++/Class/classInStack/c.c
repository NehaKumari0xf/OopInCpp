/*
Write a C program to perform the following operations:
1. Create three stacks of capacity 5, 10, and 12, respectively, 

2. Push any 3 values in 1st stack, 2 values in 2nd stack, and 3 values in 3rd stack.

3. Display the content of all stack.

4. Pop 1 value from each stack

5. Display the content of all stack

6. Push any two values in each stack.

7. Display the content of all stack

8. Empty all stack

9 Display the content of all stack
*/

#include<stdio.h>

int push(int *stack, int capacity, int *topOfStack, int value)
{
    if (*topOfStack == capacity-1)
    return 0;

    (*topOfStack)++;
    stack[*topOfStack] = value;
    return 1;
}

int pop(int *stack, int *topOfStack, int *poppedValue)
{
    if (*topOfStack ==-1)
    return 0;

    *poppedValue = stack[*topOfStack];
    (*topOfStack)--;
    return 1;   
}

void peep(int *stack, int topOfStack)
{
    int i;
    if (topOfStack ==-1)
    printf("\nStack is empty!");

    for(i=0; i<=topOfStack; i++)
    {
        printf("%d", stack[i]);
        if(i<topOfStack)
        printf(",");
    }
}

int main()
{
    int st1[5], st2[10], st3[12];
    int cap1=5, cap2=10, cap3=12;
    int tos1=-1, tos2=-1, tos3=-1;
    int poppedValue1;

    //push in stcak 1
    push(st1, cap1, &tos1, 1);
    push(st1, cap1, &tos1, 2);
    push(st1, cap1, &tos1, 3);

    //push in stcak 2
    push(st2, cap2, &tos2, 10);
    push(st2, cap2, &tos2, 20);

    //push in stcak 3
    push(st3, cap3, &tos3, 100);
    push(st3, cap3, &tos3, 200);
    push(st3, cap3, &tos3, 300);

    //content of all stack are:
    printf("\nContent of all stack are:");
    printf("\nSt1 status:");
    peep(st1, tos1);

    printf("\nSt2 status:");
    peep(st2, tos2);
    
    printf("\nSt3 status:");
    peep(st3, tos3);

    //pooped value
    printf("\n\nPopped value are:");
    pop(st1, &tos1, &poppedValue1);

    printf("\nPopped value are:");
    pop(st2, &tos2, &poppedValue1);
    
    printf("\nPopped value are:");
    pop(st3, &tos3, &poppedValue1);

    //contents of all stack are
    printf("\n\nSt1 status:");
    peep(st1, tos1);

    printf("\nSt2 staus:");
    peep(st2, tos2);
    
    printf("\nSt3 status:");
    peep(st3, tos3);

    //push in stack 1
    push (st1, cap1, &tos1, 4);
    push (st1, cap1, &tos1, 5);

    //push in stcak 2
    push(st2, cap2, &tos2, 30);
    push(st2, cap2, &tos2, 40);

    //push in stcak 3
    push(st3, cap3, &tos3, 400);
    push(st3, cap3, &tos3, 500);

    //content of all stack are:
    printf("\nContent of all stack are:");
    printf("\nSt1 status:");
    peep(st1, tos1);

    printf("\nSt2 status:");
    peep(st2, tos2);
    
    printf("\nSt3 status:");
    peep(st3, tos3);
    
    //empty the stack 1
    while(tos1!=-1)
    {
        pop(st1, &tos1, &poppedValue1);
    }
    printf("\nSt1 status:");
    peep(st1, tos1);

    //empty the stack 2
    while(pop(st2, &tos2, &poppedValue1));
    printf("\nSt1 status:");
    peep(st2, tos2);
    
    //empty stack 3
    tos3=-1;
    printf("\nSt3 status:");
    peep(st3, tos3);    
}