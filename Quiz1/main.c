#include <stdio.h>
#include <stdlib.h>

int main()

{
    int i; // this variable is used for the beggining of our guiz ( Start - Quit )
    int answer1,answer2,answer3,answer4; // (Answer 1 ----> Question N1 , Answer 2 ----------> Question N2 , Answer 3 -------> N3)
    int point1,point2,point3,point4; // we're going to assign the value at the right time (Choices f questions), we use them on the correct!
    int nopoint1,nopoint2,nopoint3,nopoint4; // this variables we're going to use them if the user choose the wrong answer
    int PtTotal =0;


    printf("\t\tWelcome \n\n ");
    printf("Are you ready to start the game \n \n");

    printf("---> press 0 to start your quiz \n");
    printf("---> press 1 to quit \n\n ");
    scanf("%d",&i); // one of the values are accepted and it has a relation with if statement which comme in lines below
    if (i == 0 ){
        printf("Guiz is started ! \n\n");
        printf(" \t\t---------------------------------------------------- \n");

    }else if (i == 1) {

        printf("Quiz is ended !");
        printf(" \t\t---------------------------------------------------- \n");

    }else {
        printf("Can not start the Quiz");
        printf(" \t\t----------------------------------------------------\n");

    }
    printf("\t\tYour Going To Chose The write Answer ! \n \n");

    // First Question (Q1) !

    printf("\tWhat does the word HTML stand for :\n");
    printf(" 1)-HyperText Markup Language \n ");
    printf(" 2)-Language HyperText Markup \n");
    printf(" 3)-HyperText Language Markup \n");

    // The User is going to write his answer
    printf("Please what's your answer : ");
    scanf("%d",&answer1);
    if(answer1==1){
        printf("\tCorrect answer \n\n");
        point1=10;
        printf(" ------------------------------------------------------------------------------------\n");
                                          // now we assign the value of the variable point1
        printf("You Eearned + %d Points. \n\n",point1);
        printf(" ------------------------------------------------------------------------------------\n");
        PtTotal = PtTotal + point1;

    } else {
        printf("\tWrong Answer !! \n\n");
        nopoint1 =0;
        printf("You Eearned + %d Points. \n",nopoint1);
        printf(" ------------------------------------------------------------------------------------\n");
         PtTotal =PtTotal-4;
        printf(" since You Have wrong answer you Lost -4 Points \n");
        printf("Now You Have %d Points \n\n",PtTotal);
        printf(" ------------------------------------------------------------------------------------\n");






    }

    // Question 2
    printf("\twhat does the word CSS stand for :\n ");
    printf("1)-Sheets Cascading \n");
    printf("2)-Cascading Style Sheets \n");
    printf("3)-Style Sheet Cascading \n");

    //// The User is going to write his answer ( secound time)
    printf("Please what's your answer : ");
    scanf("%d",&answer2);
    if(answer2==2){
        printf("\tCorrect answer \n\n");
        point2=5;
        printf(" ------------------------------------------------------------------------------------\n");
        printf("You Earned + %d Points. \n\n",point2);
        printf(" ------------------------------------------------------------------------------------\n");
        PtTotal = PtTotal + point2;
    }else {
        printf("\tWrong Answer !!! \n\n");
        nopoint2=0;
        printf("You Earned + %d Points. \n",nopoint2);
        printf(" ------------------------------------------------------------------------------------\n");
        PtTotal =PtTotal-4;
        printf(" since You Have wrong answer you Lost -4 Points \n");
        printf(" ------------------------------------------------------------------------------------\n");


    }

    // Question N3
    printf("\twho create language C : \n");
    printf("1)- Elon Mask \n");
    printf("2)- alan turing \n");
    printf("3)-Dennis Ritchie \n");
    // The User is going to write his answer (third time)
    printf("Please what's your answer : ");
    scanf("%d",&answer3);
    if(answer3==3){
        printf("Correct answer \n\n");
        point3=15;
        printf(" ------------------------------------------------------------------------------------\n");
        printf("You Earned + %d Points. \n\n",point3);
        printf(" ------------------------------------------------------------------------------------\n");
        PtTotal = PtTotal + point3;
    }else {
        printf("\tWrong Answer !!! \n\n");
        nopoint3=0;
         printf("You Earned + %d Points. \n",nopoint3);
         printf(" ------------------------------------------------------------------------------------\n");
         PtTotal =PtTotal-4;
        printf(" since You Have wrong answer you Lost -4 Points \n");
        printf(" ------------------------------------------------------------------------------------\n");



    }

    // Question N4
    printf("\twhich one is the first browser invented in 1990 : \n");
    printf("1)-Internet Explorer \n");
    printf("2)-WorldWideWeb (Nexus) \n");
    printf("3)- Mozilla FireFox \n");

    // The User IS going to answer for The 4th Question
    printf("Please what's your answer :\n\n ");
    scanf("%d",&answer4);

    if(answer4==2){
        printf("\tCorrect answer \n\n");
        point4=20;
        printf(" ------------------------------------------------------------------------------------\n");
        printf("You Earned + %d Points. \n\n",point4);
        printf(" ------------------------------------------------------------------------------------\n");
        PtTotal = PtTotal + point4;

    }else {
        printf("\tWrong Answer !!! \n\n");
        nopoint4=0;
        printf("You Earned + %d Points. \n",nopoint4);
        printf(" ------------------------------------------------------------------------------------\n");
        PtTotal =PtTotal-4;
        printf(" since You Have wrong answer you Lost -4 Points \n");
        printf(" ------------------------------------------------------------------------------------\n");


    }

    // Score

    printf("\t\tYou Have Scored %d Points .",PtTotal);









    return 0;
}
