#include<stdio.h>
#include<conio.h>
int main()
{

  int i, marks[5], n, sum = 0;
  float avg;
  printf("Enter the no.of subjects:\n");
  scanf("%d",&n);
  printf("Enter the marks obtained in your %d subjects\n", n);
  for(i=0;i<n;i++)
  {
    scanf("%d", &marks[i]);
  }
  for(i=0;i<n;i++)
  {
  sum = sum + marks[i];
  }
  avg = (sum / n);
  printf("Average of marks is : %.2f \n", avg);
}


