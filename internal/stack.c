#include <stdio.h>
#include <stdlib.h>
#define M 30
int stack[M];
int top=-1;
int push(int n){
	return stack[++top]=n;
}
void pop(){
	top--;
}
void display(){
	int i;
	if (top==-1){
		printf("stack is empty!!!\n");
		return;
	}
	else {
		printf("Element in the stack are: ");
		for(i=top;i>=0;i--){
			printf("%d ",stack[i]);
		}
	}
}
int main(){
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(3);
	display();
	
}
