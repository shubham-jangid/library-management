#include<stdio.h>
int password(void);
void first_page(void);
int main()
{
   int i,r;
   printf("*****Welcome to library management*****\n ");
   printf("\nenter password\n");
   r = password();
   if(r==1)
      {
       first_page();
      }
}
int password()
{
   int i;
   char pass[]="shubham",password[20];
   for(i=3;i>=0;i--)
   {

     gets(password);
      if(strcmp(password,pass)==0)
      {

       return(1);
      }
      else
      {

         if(i==0)
         {
            printf("sorry you have 0 chance left \n");
            exit(1);
         }
         printf("you have %d chance left\t",i);
         printf("enter password again\n");
      }
   }

}

void first_page()
{
   printf("\nenter 1 to add book\n");
   printf("enter 2 to search book\n");
   printf("enter 3 to issue book\n");
   printf("enter 4 to  book\n");
   printf("enter 5 to add book\n");


}
