#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total;
    float average;
    float science;
    float english;
    float maths;



    printf("Please enter Mathematics score(out of 100):");
    scanf("%f\n",&maths);
    printf("Please enter Science score(out of 100)    :");
    scanf("%f\n",&science);
    printf("Please enter English score(out of 100)    :");
    scanf("%f\n",&english);


    total=science+english+maths;
    average=total/3.0;

    printf("               \n");
    printf("               \n");
    printf("----Results----\n");
    printf("               \n");
    printf("               \n");

    printf("Total Marks  :%.2f\n",total);
    printf("Average Marks:%.2f\n",average);
    if(average>=80){
    printf("      Grade  : A\n");
    }else if (average>=70){
    printf("      Grade  : B\n");
    }else if (average>=60){
    printf("      Grade  : C\n");
    }else if (average>=50){
    printf("      Grade  : D\n");
    }else  {
    printf("      Grade  : F\n");
    }



    if(average>=50){
    printf("  Result     : Pass\n");
    }else {
    printf("  Result     : Fail\n");
    }



    return 0;
}
