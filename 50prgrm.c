#include<stdio.h>
void VolumeOfCube(int *ptr);

int main(){
    int side;
    int *ptr;
    ptr=&side;
    printf("Enter the side value (in cm): ");
    scanf("%d",&side);
    VolumeOfCube(ptr);
    printf("\nNow changed side is: %d",side);
    return 0;
}
void VolumeOfCube(int *ptr)
{
    int volume;
    volume=*ptr**ptr**ptr;
    printf("Volume of Cube of side %d cm is = %d cm^3",*ptr,volume);
    *ptr=*ptr+2;
    *ptr+=1;

}