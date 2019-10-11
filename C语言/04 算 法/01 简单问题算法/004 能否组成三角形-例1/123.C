#include <stdio.h>
#include <math.h>
main()
{
    float a, b, c;
    float s, area;
    scanf("%f,%f,%f", &a, &b, &c); /*输入三条边*/
    if (a + b > c && b + c > a && a + c > b)							/*判断两边之和是否大于第三边*/
    {
        s = (a + b + c) / 2;
        area = sqrt(s *(s - a)*(s - b)*(s - c)); 							/*计算三角形的面积*/
        printf("the area is:%f\n", area); 							/*输出三角形的面积*/
        if (a == b && a == c)									/*判断三条边是否相等*/
            printf("equilateral triangle\n");
         													/*输出等边三角形*/
        else if (a == b || a == c || b == c)
         /*判断三角形中是否有两边相等*/
            printf("isoceles triangle\n");
         /*输出等腰三角形*/
        else if ((a *a + b * b == c *c) || (a *a + c * c == b *b) || (b *b + c
            * c == a *a))
         /*判断是否有两边的平方和大于第三边的平方*/
            printf("right angled triangle\n");
         /*输出直角三角形*/
        else
            printf("triangle");
         /*普通三角形*/
    }
    else
        printf("can not compose triangle");
     /*如果两边之和小于第三边不能组成三角形*/
}
