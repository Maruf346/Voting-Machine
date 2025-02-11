#include<stdio.h>
int main()
{
    int choice, age, can, c1=0, c2=0, c3=0, c4=0, spoiled=0;
   do
   {
    printf("\n\n*****************************************\n ********** Welcome Sir/Ma'am **********\n*****************************************\n\n Options: \n 1. Cast your vote\n 2. See result\n  0. Exit\n  Enter your choice: ");
    scanf("%d", &choice);
  if (choice==1)
   {
        printf("\n\n Please enter your age to proceed to the next step: ");
    scanf("%d", &age);
    if (age<18)
    {
        printf("\n\nSorry..! You are not eligible to vote.");
    }
    else{
            printf("\n\nCandidate list: \n  1. Steve Bannon \n  2. Stephen Flynn \n  3. Wendy Morton \n  4. Bob Stewart \n Please select your candidate: ");
            scanf("%d", &can);
            if (can==1)
            {
                c1++;
                printf("\n \n Thank you for your vote.\n");
            }
            else if (can==2)
            {
                c2++;
                printf("\n \n Thank you for your vote.\n");
            }
            else if (can==3)
            {
                c3++;
                printf("\n \n Thank you for your vote.\n");
            }
            else if (can==4)
            {
                c4++;
                printf("\n \n Thank you for your vote.\n");
            }
            else
            {
                printf("\n \n!! Invalid choice !!\n \n");
                spoiled++;
            }


        }
   }
   else if (choice==2)
   {
       printf("Steve Bannon= %d \nStephen Flynn= %d\nWendy Morton= %d\nBob Stewart= %d\nSpoiled Votes= %d", c1, c2, c3, c4, spoiled);
   }
   else if (choice==0)
   {
       printf("\n\nThank you for your contribution \n\n");
   }

   else
   {
       printf("\n \nInvalid Choice !!\n \n");
   }


   } while (choice!=0);


    return 0;
}
