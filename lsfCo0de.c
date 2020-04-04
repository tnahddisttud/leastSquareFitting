//C Program for Least Square Fitting (Straight Line)
//By-- Siddhant Pandey
//All rights reserved.
//Dated-- 16th Jan 2019

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,B2;
    float x[30],y[30];
    float A1=0.0,B1=0.0,C1=0.0;
    float A2=0.0,C2=0.0,m,c;
        printf("            LEAST SQUARE FITTING(STRAIGHT LINE)             ");
        printf("\n                       By-Siddhant                         ");
        printf("\n------------------------------------------------------------\n");
        printf("Enter the number of co-ordinates(Min-0 Maximum-30): ");
        scanf("%d",&n);
        printf("\nEnter all the x-coordinates: ");

    for(i=0;i<n;i++)
    {
	   scanf("%f",&x[i]);
    }

        printf("\nEnter all the y-coordinates: ");

    for(i=0;i<n;i++)
    {
	   scanf("%f",&y[i]);
    }

    for(i=0;i<n;i++)
    {
	   A1=A1+(x[i]*x[i]);
	   B1=B1+x[i];
	   C1=C1+(x[i]*y[i]);
	   A2=A2+x[i];
	   C2=C2+y[i];
    }

    m= (-((B1*C2)-(n*C1))/((A1*n)-(A2*B1)));
    c= (-((C1*A2)-(C2*A1))/((A1*n)-(A2*B1)));

    printf("\nSlope of the line(m)=%.2f\n",m);
    printf("Intercept(c)=%.2f",c);
    printf("\n\nEquation of the line: y= %.2f x + (%.2f)",m,c);
    printf("\n-------------------------------------------------------------\n");

getch();
}
