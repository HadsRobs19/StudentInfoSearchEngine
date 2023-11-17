
/*
COP3223 Fall 2023 Assignment 3.2
Copyright 2023 Roberts Hadassah
*/

#include <stdio.h>
#include <string.h>

//start with creating struct for student information; used as a set of global varibales 
struct Student{
    char firstName[20];
    char lastName[20];
    int ID;
    char grade;
};
// type def for struct Student to avoid writing out "struct Student <student info>"; creates more readable code
typedef struct Student student;

int searchFirstName(student *a);
int searchLastName(student *a);
int searchID(student *a);
int main(void){
    //initializing student information to struct variables
    //Student John Johnson
    student john;
    strcpy(john.firstName, "John"); //using strcpy to assign string variables to student arrays defined in struct Student
    strcpy(john.lastName, "Johnson");
    john.ID = 895645;
    john.grade = 'A';

    //Student Jake Michaelson
    student jake;
    strcpy(jake.firstName, "Jake");
    strcpy(jake.lastName, "Michaelson");
    jake.ID = 236598;
    jake.grade = 'A';

    //Student Sally Weber 
    student sally;
    strcpy(sally.firstName, "Sally");
    strcpy(sally.lastName, "Weber");
    sally.ID = 225584;
    sally.grade = 'C';

    //Student Tou Xiong
    student tou;
    strcpy(tou.firstName, "Tou");
    strcpy(tou.lastName, "Xiong");
    tou.ID = 364875;
    tou.grade = 'B';

    //Student Jacquelyn Jackson
    student jacquelyn;
    strcpy(jacquelyn.firstName, "Jacquelyn");
    strcpy(jacquelyn.lastName, "Jackson");
    jacquelyn.ID = 984587;
    jacquelyn.grade = 'D';

    //Student John White
    student john2;
    strcpy(john2.firstName, "John");
    strcpy(john2.lastName, "White");
    john2.ID = 560258;
    john2.grade = 'C';

    //User prompter for search type; each number entered as a search  type correlates to one search type function
    int searchType;
    printf("%s\n", "Please enter your search type: ");
    scanf("%d", &searchType);
    if(searchType == 0){
        searchFirstName(&john);
        printf("Find the record name %s %s, id %d, grade %c\n", john.firstName, john.lastName, john.ID, john.grade);

        searchFirstName(&jake);
        printf("Find the record name %s %s, id %d, grade %c\n", jake.firstName, jake.lastName, jake.ID, jake.grade);

        searchFirstName(&sally);
        printf("Find the record name %s %s, id %d, grade %c\n", sally.firstName, sally.lastName, sally.ID, sally.grade);

        searchFirstName(&tou);
        printf("Find the record name %s %s, id %d, grade %c\n", tou.firstName, tou.lastName, tou.ID, tou.grade);

        searchFirstName(&jacquelyn);
        printf("Find the record name %s %s, id %d, grade %c\n", jacquelyn.firstName, jacquelyn.lastName, jacquelyn.ID, jacquelyn.grade);

        searchFirstName(&john2);
        printf("Find the record name %s %s, id %d, grade %c\n", john2.firstName, john2.lastName, john2.ID, john2.grade);
    }else if(searchType == 1){
        searchLastName(&john);
        printf("Find the record name %s %s, id %d, grade %c\n", john.firstName, john.lastName, john.ID, john.grade);

        searchLastName(&jake);
        printf("Find the record name %s %s, id %d, grade %c\n", jake.firstName, jake.lastName, jake.ID, jake.grade);

        searchLastName(&sally);
        printf("Find the record name %s %s, id %d, grade %c\n", sally.firstName, sally.lastName, sally.ID, sally.grade);

        searchLastName(&tou);
        printf("Find the record name %s %s, id %d, grade %c\n", tou.firstName, tou.lastName, tou.ID, tou.grade);

        searchLastName(&jacquelyn);
        printf("Find the record name %s %s, id %d, grade %c\n", jacquelyn.firstName, jacquelyn.lastName, jacquelyn.ID, jacquelyn.grade);
        
        searchLastName(&john2);
        printf("Find the record name %s %s, id %d, grade %c\n", john2.firstName, john2.lastName, john2.ID, john2.grade);
    }else if(searchType == 2){
        searchID(&john);
        printf("Find the record name %s %s, id %d, grade %c\n", john.firstName, john.lastName, john.ID, john.grade);

        searchID(&jake);
        printf("Find the record name %s %s, id %d, grade %c\n", jake.firstName, jake.lastName, jake.ID, jake.grade);

        searchID(&sally);
        printf("Find the record name %s %s, id %d, grade %c\n", sally.firstName, sally.lastName, sally.ID, sally.grade);

        searchID(&tou);
        printf("Find the record name %s %s, id %d, grade %c\n", tou.firstName, tou.lastName, tou.ID, tou.grade);

        searchID(&jacquelyn);
        printf("Find the record name %s %s, id %d, grade %c\n", jacquelyn.firstName, jacquelyn.lastName, jacquelyn.ID, jacquelyn.grade);
        
        searchID(&john2);
        printf("Find the record name %s %s, id %d, grade %c\n", john2.firstName, john2.lastName, john2.ID, john2.grade);
    }  

}

//create print functions that run depending on search type number; tried using pointer function method but ran into problem with assigning a struct to an int variable searchType with struct parameters for search functions
//maybe try creating functions first  and running them seperately corresponding to an initilaize variable(?)
int searchFirstName(student *a){
    printf("%s\n", "Please enter the first name you want to search: ");
    scanf("%s", &a->firstName);

    return 0;
}

int searchLastName(student *a){
    printf("%s\n", "Please enter the last name you want to search: ");
    scanf("%s", &a->lastName);

    return 0;
}

 int searchID(student *a){
    printf("%s\n", "Please enter the ID you want to search: ");
    scanf("%d", &a->ID);

    return 0;
}