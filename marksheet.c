#include<stdio.h>
int main(){
    char grade,name[50];
    int roll_no;
    float marks1,marks2,marks3,sum;
    float average;
    printf("Enter Student Name: ");
    scanf("%49s",name);
    printf("Enter Student Roll Number: ");
    scanf("%d",&roll_no);
    printf("Enter Student Marks in Subject 1: ");
    scanf("%f",&marks1);
    printf("Enter Student Marks in Subject 2: ");
    scanf("%f",&marks2);
    printf("Enter Student Marks in Subject 3: ");
    scanf("%f",&marks3);
    sum=(marks1+marks2+marks3);
    average=sum/3;
    if (average>=90){
        grade='A';
    }
    else if(average>=80){
        grade='B';
    }
    else if(average>=70){
        grade='C';
    }
    else if(average>=60){
        grade='D';
    }
    else if(average>=50){
        grade='E';
    }
    else {
        grade='F';
    }
    printf("\n---------Marksheet-------\n");
    printf("Name of the Student= %s\n", name);
    printf("Roll Number of the Student= %d\n", roll_no);
    printf("Marks of the Student in Subject 1= %.2f\n", marks1);
    printf("Marks of the Student in Subject 2= %.2f\n", marks2);
    printf("Marks of the Student in Subject 3= %.2f\n", marks3);
    printf("Average= %.2f\n",average);
    printf("Grade Obtained= %c\n",grade);
    return 0;
}
