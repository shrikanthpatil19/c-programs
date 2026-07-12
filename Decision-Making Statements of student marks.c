#include <stdio.h>
int main()
{
int i;
float marks,sum=0,avg;
printf("Enter marks of 6 subjects: ");
for(i=0;i<6;i++)
{
scanf("%f", &marks);
sum=sum+marks;
}
avg=sum/6;
printf("\n Grade= ");
if(avg>=91&& avg<=100)
{
printf("Result: Grade: A++\n");
}
else if(avg>=81 && avg<=91)
{
printf("Result:Grade: A\n");
}
else if (avg>=71 && avg<=81)
{
printf("Result: Pass\nGrade: B\n");
}
else if (avg>=61 && avg<=71)
{
printf("Result: Pass\nGrade: C\n");
}
else if (avg>=41 && avg<=61)
{
printf("Result: Pass\nGrade: D\n");
}
else
{
printf("Result: Fail\nGrade: F\n");
}
return 0;}