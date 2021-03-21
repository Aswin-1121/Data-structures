#include<studio.h>
#include<stdlib.h>
void main()
{
  int a[20][20], b=[20][20], c=[20][20], m,n,p,q,i,j,k;
  clrscr();
  printf(" Enter the Order of 1st matrix:");
  scanf("%d,%d",&m,&n);
  printf(" Enter the Order of 2nd matrix:");
  scanf("%d,%d",&p,&q);
  if(n=p)
  {
     printf(" Enter the elements of 1st matrix:");
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
          scanf("%d", &a[i][j]);
        }
     }
     printf(" Enter the elements of 2nd matrix:");
     for(i=0;i<p;i++)
     {
        for(j=0;j<q;j++)
        {
          scanf("%d", &b[i][j]);
        }
     }
for(i=0;i<m;i++)
{
     printf("\n\n");
    for(j=0;j<q;j++)
     {
         c[i][j]=0;
         for(k=0;k<n;k++)
          {
              c[i][j]=c[i][j]+a[i][k]*b[k][j];
          }
              printf("%d\t",c[i][j]);
      }
}
}
else
{
 printf(" Matrix cannot be multiplied");
}
return 0;
}


