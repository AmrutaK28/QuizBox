#include <stdio.h>
#include <string.h>

struct quiz
{
     int no;
     char question[100];
     char opt1[100];
     char opt2[100];
     char opt3[100];
     char opt4[100];
     char  ans[100];
};

int main(){
    int i;
    char j[1];
    int flag=0;
    int score=0;
    int sum=0;
    struct quiz que[14];
    que[0].no=1;    //1st que
    strcpy(que[0].question,"Why C is called C not D?");
    strcpy(que[0].opt1, "A. C is for code");
    strcpy(que[0].opt2, "B. The inventors name started with a C");
    strcpy(que[0].opt3, "C. Why should I care?");
    strcpy(que[0].opt4, "D. It is developed after B");
    strcpy(que[0].ans,"D");

    //------------------------------------------------------------------------------------

    que[1].no=2;      //2nd que
    strcpy(que[1].question,"How many keywords are there in C language?");
    strcpy(que[1].opt1, "A.Ten");
    strcpy(que[1].opt2, "B.Thirty two");
    strcpy(que[1].opt3, "C.Thirty six");
    strcpy(que[1].opt4, "D.Fifty");
    strcpy(que[1].ans,"B");

    //------------------------------------------------------------------------------------

    que[2].no=3;        //3rd que
    strcpy(que[2].question,"Which of these concepts is NOT supported by C ?");
    strcpy(que[2].opt1, "A.Pointer");
    strcpy(que[2].opt2, "B.String");
    strcpy(que[2].opt3, "C.Functions");
    strcpy(que[2].opt4, "D.Name spaces");
    strcpy(que[2].ans,"D");

    //------------------------------------------------------------------------------------

    que[3].no=4;        //4th que
    strcpy(que[3].question," What is ANSI, btw?");
    strcpy(que[3].opt1, "A. Area of Natural and Scientific Interest");
    strcpy(que[3].opt2, "B. American National Standards Institute");
    strcpy(que[3].opt3, "C. American National Standardization Institute");
    strcpy(que[3].opt4, "D. American National Society Of Intellectuals");
    strcpy(que[3].ans,"B");

    //------------------------------------------------------------------------------------

    que[4].no=5;        //5th  que
    strcpy(que[4].question," C langauage  was developed at?");
    strcpy(que[4].opt1, "A.IBM");
    strcpy(que[4].opt2, "B. Bell Labsn");
    strcpy(que[4].opt3, "C.MIT");
    strcpy(que[4].opt4, "D.Microsoft");
    strcpy(que[4].ans,"B");

    //------------------------------------------------------------------------------------

     que[5].no=6;        //6th  que
     strcpy(que[5].question,"Which of these is not a c keyword as per ANSI?");
     strcpy(que[5].opt1, "A. Extern");
     strcpy(que[5].opt2, "B.volatile");
     strcpy(que[5].opt3, "C. Break");
     strcpy(que[5].opt4, "D. pointer");
     strcpy(que[6].ans,"C");

     //------------------------------------------------------------------------------------

     que[6].no=7;       //7th  que
     strcpy(que[6].question, "Integers,Characters,Strings and Arrays are types of what?");
     strcpy(que[6].opt1, "A.Boolean Variables");
     strcpy(que[6].opt2, "B. Data types");
     strcpy(que[6].opt3, "C. Functions");
     strcpy(que[6].opt4, "D.Threads");
     strcpy(que[6].ans,"B");

     //------------------------------------------------------------------------------------

     que[7].no=8;     //8th  que
     strcpy(que[7].question, "The name for the way that computers manipulate data into information is called:");
     strcpy(que[7].opt1, "A.Programing");
     strcpy(que[7].opt2, "B. Processing");
     strcpy(que[7].opt3, "C.Storing");
     strcpy(que[7].opt4, "D.Organizing");
     strcpy(que[7].ans,"A");

     //------------------------------------------------------------------------------------

     que[8].no=9;     //9th  que
     strcpy(que[8].question, "Which  bitwise operator is suitable for turning off a particular bit in a number?");
     strcpy(que[8].opt1, "A.&& Operator");
     strcpy(que[8].opt2, "B.& operator");
     strcpy(que[8].opt3, "C. || operator");
     strcpy(que[8].opt4, "D. ! Operator");
     strcpy(que[8].ans,"A");


     //------------------------------------------------------------------------------------

     que[9].no=10;      //10th que
     strcpy(que[9].question," Input/output function prototypes and macros are defined in which header file? ");
     strcpy(que[9].opt1, "A. conio.h ");
     strcpy(que[9].opt2, "B. stdlib.h ");
     strcpy(que[9].opt3, "C. stdio.h ");
     strcpy(que[9].opt4, "D. dos.h ");
     strcpy(que[9].ans,"C");

     //------------------------------------------------------------------------------------

     que[10].no=11;        //11th que
     strcpy(que[10].question," Let x be an integer which can take a value of 0 or 1. The statement if(x = =0) x = 1; else x = 0; is equivalent to which one of the following? ");
     strcpy(que[10].opt1, "A. x=1+x ");
     strcpy(que[10].opt2, "B. x=1-x ");
     strcpy(que[10].opt3, "C. x=x-1 ");
     strcpy(que[10].opt4, "D. x=1%x ");
     strcpy(que[10].ans,"B");

     //------------------------------------------------------------------------------------

     que[11].no=12;    //12st que
     strcpy(que[11].question," Which of the strcpy(que[12].question," "A char variable can store either an ASCII character or a Unicode character. ");
     strcpy(que[12].opt1, "A.True ");
     strcpy(que[12].opt2, "B. False");
     strcpy(que[12].opt3, "C.none of them ");
     strcpy(que[12].opt4, "D. Don\’t know ");
     strcpy(que[12].ans," A");

     //------------------------------------------------------------------------------------

     strcpy(que[13].question," A char variable can store either an ASCII character or a Unicode character. ");
     strcpy(que[12].opt1, "A.True ");
     strcpy(que[12].opt2, "B. False");
     strcpy(que[12].opt3, "C.none of them ");
     strcpy(que[12].opt4, "D. Don’t know ");
     strcpy(que[12].ans," A");


    printf("\n\n\t\t\t\t WELCOME to QUIZ GAME \t\t\t\t\n\n");
    printf("------------------------------------------------------------------------------------------------------");
    printf("\n\n\tThe quiz game has 15 very basic question about C Programming Language.");
    printf("\n\tYou get +2 marks for each correct ans and -1 for each wrong answer.");


    while(i<14){
        printf(" \n\n\n%d ", que[i].no);
        printf(" %s ", que[i].question);
        printf(" \n\n%s",que[i].opt1);
        printf(" \n%s",que[i].opt2);
        printf("\n%s",que[i].opt3);
        printf(" \n%s",que[i].opt4);
        printf("\nEnter your answer : ");
        scanf("%s",j);
        if(strcmp(que[i].ans,j)==0){
            printf("Your answer is Correct!!\n\n");
            score=score+2;
            sum=sum+ score;
        }
        else{
            printf("\nYour answer is wrong !! Correct answer in %s\n\n",que[i].ans);
            score=score-1;
            sum=sum+score;
        }
        i++;
        printf("\nYour present score is %d",score);
    }
    printf("\n\nThank You for playing Quiz.Y our total score is %d",sum);

   return 0;
}
