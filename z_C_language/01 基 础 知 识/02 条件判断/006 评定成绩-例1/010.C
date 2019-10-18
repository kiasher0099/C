#include<stdio.h>
main()
{
    int score;
    printf("\nplease enter score(score<=100):");
    scanf("%d", &score); 								/*输入学生成绩*/
    if (score == 100)									/*如果成绩是100则和90是一样的等级*/
        score = 90;
    score = score / 10; 								/*求出成绩的高位数字*/
    switch (score)
    {
        case 9:
            printf("the grade is A"); 						/*等级为A*/
            break;
        case 8:
            printf("the grade is B"); 						/*等级为B*/
            break;
        case 7:
            printf("the grade is C"); 						/*等级为C*/
            break;
        case 6:
            printf("the grade is D"); 						/*等级为D*/
            break;
        default:
            printf("the grade is E"); 						/*等级为E*/
    }
}
