#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Enter the Serial No. from the data given below to calculate the area of.\n1.Circle\n2.Rectangle\n3.Triangle\n4.Volume of Sphere\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        {
            printf("Enter the radius of Circle.\n");
            float r1;
            scanf("%f",&r1);
            printf("Area of Circle of radius %.2f = %.2f\n",r1,3.14*r1*r1);
        break;
        }
        case 2:
        {
            printf("Enter length =\n");
            int l,m;
            scanf("%d",&l);
            printf("Enter the breadth =\n");
            scanf("%d",&m);
            printf("The area of rectangle = %d\n",l*m);
        break;
        }
        case 3:
        {
            printf("Enter first side =\n");
            int s1,s2,s3,s;
            scanf("%d",&s1);
            printf("Enter second side =\n");
            scanf("%d",&s2);
            printf("Enter third side =\n");
            scanf("%d",&s3);
            s=.5*s1+.5*s2+.5*s3;
            printf("Area of triangle is %.2f\n",sqrt(s*(s-s1)*(s-s2)*(s-s3)));
        break;
        }
        case 4:
        {
            printf("Enter the radius = ");
            int r2;
            scanf("%d",&r2);
            printf("Volume of the sphere is = %.2f\n",1.33*3.14*r2*r2*r2);
        break;

        }
        default:
        {printf("Invalid no.\n");}


    }



    return 0;
}