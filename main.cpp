/*
Rohan Kakade
19/10/23
Program to display a tree of desired height
Assuming the width of tree is twice that of its height
*/
#include "mbed.h"

// main() runs in its own thread in the OS
int main()
{
    //initialise variables to store user entered values of tree height and number of stars
    int height, starcount, trunkheight = 0;
    printf("Enter height of tree where we have leaves: ");
    scanf("%d", &height);    //read user value (length of tree containing stars)
    printf(" %d \n", height);
    
    printf("Enter height of tree trunk (bottom part where we have no leaves): ");
    scanf("%d", &trunkheight);   //read user value (length of tree without stars)
    printf(" %d \n", trunkheight);
    
    //display the leafy part of the tree
    for(int i = 1;i<=height;++i)  //for each row
    {
        int starcount = (i*2)-1;       //number of star bearing places starting from top of tree 
        int spacecount = height - i +1;//number of star-free places starting from top of tree
        for (int j = 0;j< spacecount; ++j)  //for each cursor location along the row
            printf(" ");               //print the required number of spaces
        for (int j = 0;j<starcount;++j)
            printf("*");   //printf the required number of stars
        printf("\n");      //move cursor to new line

    }

    //display the trunk of the tree
    for(int i = 0;i<trunkheight;++i)
    {
        for (int j =0;j<height;++j)  
            printf(" ");             //print a space character till the centre of the tree
      printf("*\n");          //print * at the centre of the tree

    }

}

