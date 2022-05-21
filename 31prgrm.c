#include<stdio.h>
#include<math.h>
void PrimeBetween(int a , int b);

int main(){
    int a,b;
    printf("Enter No. between which you want Prime No.\n");
    scanf("%d",&a);
    scanf("%d",&b);
    PrimeBetween(a,b);

    return 0;
}

void PrimeBetween(int a , int b)
{
    int i,j,r,x=0,y=0;
    for(i=a;i<=b;i++)
    {
        for(j=2;j<=sqrt(i);j++)
        {
            r=i%j;
            if(r==0)
            {
                x++;
                break;
            }

        }
        if(r!=0)
        {
            y++;
            printf("%d ",i);
        }
    }
    printf("\nTotal No. of Non-Prime No.:%d\n",x);
    printf("Total No. of Prime No.:%d\n",y);

}
