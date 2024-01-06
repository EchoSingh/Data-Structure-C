#include <stdio.h>
#include <stdlib.h>
struct emp{
	int empid;
	char name[20];
	int salary;
};
int main(){
	int n,i,choice,search;
	printf("Enter the no. of employee: \n");
	scanf("%d",&n);
	struct emp e[n];
	printf("Enter the employee details: \n");
	for(i=0;i<n;i++){
		printf("Enter %d employee id :",i+1);
		scanf("%d",&e[i].empid);
		printf("Enter %d employee name :",i+1);
		scanf("%s",e[i].name);
		printf("Enter %d employee salary :",i+1);
		scanf("%d",&e[i].salary);	
	}
	printf("\nEnter 1.Display 2.Search 3.High_Salary\n");
	scanf("%d",&choice);
	switch(choice){
		case 1 :{
				 printf("Employee details are :\n");
				 for(i=0;i<n;i++){
				 	printf("Employee %d id %d \n ",i+1,e[i].empid);
				 	printf("Employee %d name %s \n ",i+1,e[i].name);
				 	printf("Employee %d Salary %d \n ",i+1,e[i].salary);
				 }
				 break;
			    }
		case 2 : {
				 printf("Enter the employee id to be found \n");
				 scanf("%d",&search);
				 for(i=0;i<n;i++){
				 	if(search==e[i].empid){
				 		printf("Employee %d Employee id %d :\n ",i+1,e[i].empid);
				 		printf("Employee %d Employee name %s :\n ",i+1,e[i].name);
				 		printf("Employee %d Employee Salary %d :\n ",i+1,e[i].salary);
					 }
				 }
				 break;
			     }
		case 3 : {
			printf("employee with maximum salary :\n");
			int max = e[0].salary;
			for(i=0;i<n;i++){
				if(e[i].salary>max){
					max=e[i].salary;
				}
			}
			for(i=0;i<n;i++){
				if(e[i].salary==max){
					printf("Employee %d Employee id %d :\n ",i+1,e[i].empid);
				 	printf("Employee %d Employee name %s :\n ",i+1,e[i].name);
				 	printf("Employee %d Employee Salary %d :\n ",i+1,e[i].salary);
				}
			}
			break;
		}
		default : exit(0);break;	
		
	}
} 
