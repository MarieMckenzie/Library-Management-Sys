// This Was done by Mark Campbell 1602979 and Marie Mckenzie 1602967

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void books(int size);  // this is the prototype for books
void addmember(); // this is the prototype for members
void DisplayBooks();
void Displaymember();
void deletebook();
void updatebook();
void updatemember();
void deletemember();
void borrowbook();
void returnbook();
void checkmembercharge();
void Displaylatecharge();

struct pbooked
        {
            char status[80];
            char title[80];
            char author[80];
            int ISBN;//hold ISBN # number values
            int accession;//hold accession number values
        };
struct member
    {
         int membernum;
         char fname[10];
         char lname[10];
         char address[30];
         int phonenum;
    };
struct borrowbook
    {
    int mnum;
    int isbn;
    int bdate;
    int rdate;
    };
struct late
{
    int memnum;
    int isbn;
    int charges;
    int date;
};

int main()
{
        int databasesize=1000;
        int membersize=1000;
        int themenu;
        int thebooksmenu;
        int themembersmenu;
        int theborrowmenu;
        int password;
        int passcount=0;
            printf("Please enter password\n");
            scanf("%d", &password);
            for (passcount;passcount<2;passcount++)
                    {
 if (password==123)
{
    menustart:
        printf("===========================================================================================\n");
        printf("*              *              *              *              *              *              *\n");
        printf("                                         MAIN MENU                              \n");
        printf("                           Please choose an option from the menu below \n");
        printf("                                   (1) Books \n");
        printf("                                   (2) Member Accounts\n");
        printf("                                   (3) Borrow, return and balances (not yet set up)\n");
        printf("                                   (4) Exit\n");
        printf("*              *              *              *              *              *              *\n");
        printf("===========================================================================================\n");
        scanf("%d", &themenu);
                system("cls");
    switch (themenu) //this decides what to do with the option use user had input
    {

        case 1:

                        booksmenu:  //using the goto function the program can be borught back to this point
                    printf("*              *              *              *              *              *              *\n");
                    printf("                                         BOOKS MENU                              \n");
                    printf("                           Please choose an option from the menu below \n");
                    printf("                                   (1) Add New Book \n");
                    printf("                                   (2) Update Book \n");
                    printf("                                   (3)  Delete Book\n");
                    printf("                                   (4)  Display Books\n");
                    printf("                                   (5) Exit to main menu\n");
                    printf("*              *              *              *              *              *              *\n");


                    scanf("%d", &thebooksmenu);
                    switch (thebooksmenu) //this decides what to do with the option use user had input
                        {
                            case 1:
                             books(databasesize);// this carries out the books function
                                goto booksmenu; //Takes the user back the the menu
                            break;
                            case 2:
                                updatebook();
                                system("pause");
                                system("cls");
                                goto booksmenu; //Takes the user back the the menu
                                break;
                            case 3:
                                deletebook();
                                system("pause");
                                system("cls");
                                goto booksmenu; //Takes the user back the the menu
                                break;
                            case 4:
                                DisplayBooks();
                                system("pause");
                                system("cls");
                                goto booksmenu; //Takes the user back the the menu
                                break;
                            case 5:
                                printf("\n\t The program will now exit to the main menu[1-4]\n \a ");
                                system("pause");
                                system("cls");
                                goto menustart; //Takes the user back to the main menu
                                break;
                                break;
                            default:   //If the user inputs anything thats not on the menu they will get this msg
                            printf("\n\t The option you selected is not available [1-4]\n \a ");
                            system("pause");
                            system("cls");
                            goto  booksmenu; //Takes the user back to the menu so the they can try to enter another vaild number
                            break;
                        }
            break;

        case 2:
         membersmenu:  //using the goto function the program can be borught back to this point
                    printf("*              *              *              *              *              *              *\n");
                    printf("                                         Members MENU                              \n");
                    printf("                           Please choose an option from the menu below \n");
                    printf("                                   (1) Add New Member \n");
                    printf("                                   (2) Update Member Information \n");
                    printf("                                   (3) Delete Member Information \n");
                    printf("                                   (4) Display Member information\n");
                    printf("                                   (5) Display All Member information\n");
                    printf("                                   (6) Exit to main menu\n");
                    printf("*              *              *              *              *              *              *\n");
                    scanf("%d", &themembersmenu);
                    switch (themembersmenu) //this decides what to do with the option use user had input
                        {
                            case 1:
                                addmember();
                            break;
                            case 2:
                                updatemember();
                                system("pause");
                                system("cls");
                                goto membersmenu; //Takes the user back to the menu so the they can try to enter another vaild number
                            break;
                            case 3:
                                deletemember();
                                system("pause");
                                system("cls");
                                goto membersmenu; //Takes the user back to the menu so the they can try to enter another vaild number
                            break;
                            case 4:
                                Displaymember();
                                system("pause");
                                system("cls");
                                goto membersmenu; //Takes the user back to the menu so the they can try to enter another vaild number
                            break;


                            case 5:
                                printf("This menu opiton is not yet valid... Please check Again at another time and feel free to try another option\n");
                                system("pause");
                                system("cls");
                                goto membersmenu; //Takes the user back to the menu so the they can try to enter another vaild number
                            break;
                            case 6:
                                printf("\n\t The program will now exit to the main meny[1-6]\n \a ");
                                system("pause");
                                system("cls");
                                goto menustart; //Takes the user back to the main menu
                                break;
                            default:   //If the user inputs anything thats not on the menu they will get this msg
                            printf("\n\t The option you selected is not available [1-4]\n \a ");
                            system("pause");
                            system("cls");
                            goto  booksmenu; //Takes the user back to the menu so the they can try to enter another vaild number
                            break;

                        }
            break;
        case 3:
                 borrowmenu: //using the got function the program can be brought back to this point
              printf("*              *              *              *              *              *              *\n");
                    printf("                                         Borrow Return and Balances MENU                              \n");
                    printf("                           Please choose an option from the menu below \n");
                    printf("                                   (1) Borrow Book \n");
                    printf("                                   (2) Display All Books on Loan \n");
                    printf("                                   (3) Return Book \n");
                    printf("                                   (4) Check Member Charges \n");
                    printf("                                   (5) Display Late Charges \n");
                    printf("                                   (6) Make Payment \n");
                    printf("                                   (7) Exit to main menu \n");
               printf("*              *              *              *              *              *              *\n");
               fflush(stdin);
               scanf("%d", &theborrowmenu);

               switch (theborrowmenu)//this decides what to do with the option the user had input
               {
                   case 1:
                      // fflush(stdin);
                       borrowbook();
                       break;
                   case 2:
                       printf("This menu option is not yet valid... Please check again at another time and fell free t try another option\n");
                       system("pause");
                       system("cls");
                       goto borrowmenu; //Takes the user back to the menu so they can try to enter another valid number
                       break;
                   case 3:
                       returnbook();
                       system("pause");
                       system("cls");
                       goto borrowmenu; //Takes the user back to the menu so they can try to enter another valid number
                       break;
                   case 4:
                       checkmembercharge();
                       system("pause");
                       system("cls");
                       goto borrowmenu; //Takes the user back to the menu so they can try to enter another valid number
                       break;
                   case 5:
                       Displaylatecharge();
                       system("pause");
                       system("cls");
                       goto borrowmenu; //Takes the user back to the menu so they can try to enter another valid number
                       break;
                    case 6:
                       printf("This menu option is not yet valid... Please check again at another time and fell free t try another option\n");
                       system("pause");
                       system("cls");
                       goto borrowmenu; //Takes the user back to the menu so they can try to enter another valid number
                       break;
                    case 7:
                             printf("\n\t The program will now exit to the main meny[1-6]\n \a ");
                                system("pause");
                                system("cls");
                                goto menustart; //Takes the user back to the main menu
                                break;

                         default:   //If the user inputs anything thats not on the menu they will get this msg
                            printf("\n\t The option you selected is not available [1-4]\n \a ");
                            system("pause");
                            system("cls");
                            goto  borrowmenu; //Takes the user back to the menu so the they can try to enter another vaild number
                            break;

               }
               system("pause");
              system("cls");
        goto menustart; //Takes the user back to the menu so the they can try to enter another vaild number
            break;

        case 4:
system("cls");
printf("THE PROGRAM WILL NOW CLOSE!\n \a");
system("pause");
exit(0);//This exits the program
break;
default:   //If the user inputs anything thats not on the menu they will get this msg
printf("\n\t The option you selected is not available [1-4]\n \a ");
system("pause");
system("cls");
goto menustart; //Takes the user back to the menu so the they can try to enter another vaild number
break;

}
                            }
                else
                {
                    fflush(stdin);
                    printf("Wrong password please try again.\n");
                    printf("Please enter password\n");
                    fflush(stdin);
                    scanf("%d", &password);
                    fflush(stdin);
                }
        }


system("pause");
return 0;
}

void books(int size)
{

            int a,b;
            char AG[4]="YES",DG[3]="NO";//To decide if another entry is added
            char YorN[4];//To accept the value for choice
            int prcount;//to print from count
            int holder;//to hold the count value before it is resested
            //int ISBN[100];//hold ISBN # number values
           // int accession[100];//hold accession number values
            int fg;//To test if something invalid was entered

            int Sisbn;
            struct pbooked bookreg[100];
            int count;
            //new book
            FILE *fp;
            fp= fopen("book.txt","a");
            if (fp==NULL)


            {
                printf("Book file not found");
            }
            else
            {
                for (count=0;count<size;count++)
                {
                    printf("Enter the title of the book  ");
                                fflush(stdin);
                    scanf("%s",&bookreg[count].title);
                    printf("Enter the status of the book  ");
                    scanf("%s", &bookreg[count].status);
                     fflush(stdin);
                    printf("Enter the authors name  ");
                                fflush(stdin);
                    scanf("%s", &bookreg[count].author);
                            printf("Enter the ISBN#  ");
                                fflush(stdin);
                    scanf("%d", &bookreg[count].ISBN);
                    printf("Enter the Accession#  ");
                                fflush(stdin);
                    scanf("%d", &bookreg[count].accession);

                    fwrite(&bookreg, sizeof(struct pbooked), 1, fp);

                    fg=0;
                    while (fg==0)
                    {
                            system("cls");
                            printf("Would you like to add another yes or no?\n");
                            fflush(stdin);
                            scanf("%3s",YorN);
                                    system("cls");
                            a=strcmpi(YorN,AG);
                            fflush(stdin);
                            b=strcmpi(YorN,DG);
                            if (a==0)
                            {
                                fg=1;
                            }
                            if (b==0)
                            {
                                holder=count;
                                count=size;
                                fg=1;
                            }
                    }
                }//where the for ends
/*for (prcount=0;prcount<=holder;prcount++)
            {
                fprintf(fp ,"Title:  %s\n", bookreg[prcount].title);
                fprintf(fp, "Author:  %s\n", bookreg[prcount].author);
                fprintf(fp, "Accession#:  %d\n", accession[prcount]);
                fprintf(fp, "ISBN#:  %d\n", ISBN[prcount]);
                fprintf(fp, "Status:  %s\n", bookreg[prcount].status);
            }
*/
fclose(fp);
    }

}

void addmember() //this is the function to add members
    {
            struct member listofmembers[1000];
            int count;
            FILE *fptr;
            fptr = fopen ("listofmembers.txt", "a"); // this opens the file for writing
            if (fptr == NULL)
             printf("\n File error student.dat not opened");
            else
            {
                for (count=0;count!=1; count++)
                {
                        printf("\n Please enter member number: ");
                        scanf("%d", &listofmembers[count].membernum);
                        fflush(stdin);
                        printf("\n Please enter first name: ");
                        scanf("%s", listofmembers[count].fname);
                        fflush(stdin);
                        printf("\n Please enter last name: ");
                        scanf("%s", listofmembers[count].lname);
                        fflush(stdin);


                        printf("\n Please enter your address: ");
                        scanf("%s", listofmembers[count].address);
                        fflush(stdin);
                        printf("\n Please enter your phone number: ");
                        scanf("%d", &listofmembers[count].phonenum);
                        fflush(stdin);
                        fwrite(&listofmembers, sizeof(struct member), 1, fptr);
                        system("cls");

                        printf("\n You entered the following information \n");
                        printf("\n Student id number is %d ", listofmembers[count].membernum);
                        printf("\n Student last name is %s ", listofmembers[count].lname);
                        printf("\n Student first name is %s ", listofmembers[count].fname);
                        printf("\n Student address is %s ", listofmembers[count].address);
                        printf("\n Student phone number is %d ", listofmembers[count].phonenum);
                        system("pause");
                        system("cls");
                        //No longer need fprintf because im now using fwrite
                       // fscanf(fptr, "%d %s %s %c %f", listofmembers.membernum, listofmembers.fname,listofmembers.lname, listofmembers.address,listofmembers.phonenum );
                       // fprintf(fptr, "%d %s %s %c %f", listofmembers.membernum, listofmembers.fname, listofmembers.lname, listofmembers.address, listofmembers.phonenum );
                        //
                        printf("Do you wish to enter another member? if not then enter the number 1\n");
                        scanf("%d", &count);
                        fflush(stdin);
                        fclose(fptr);
                }
            }
    }


void DisplayBooks() //function to display books
        {
            int v;
            struct pbooked entry;
            FILE *fp;
            fp = fopen("book.txt", "r");
            if(fp==NULL)
            {
            printf("error not found");
            }
            else
            {
                for(v=1;fread(&entry,sizeof(struct pbooked),1,fp)!=NULL;v++)
                    {
                        printf("%s\t %s\t %d\t %d\n",entry.title,entry.author,entry.ISBN,entry.accession);
                    }
            }
            fclose(fp);
        }
void Displaymember() //function to display books
 {
            int v;
            struct member enter;
            FILE *fptr;
            fptr = fopen("listofmembers.txt", "r");
            if(fptr==NULL)
            {
                 printf("error not found");
            }
            else
            {
                 for(v=1;fread(&enter,sizeof(struct member),1,fptr)!=NULL;v++)
                    {
                        printf("%d\t %s\t %s\t %s\t %d\n",enter.membernum,enter.fname,enter.lname,enter.address,enter.phonenum);
                    }
            }
             fclose(fptr);
 }

void deletebook()
{
        /*struct pbooked
        {
            char status[80];
            char title[80];
            char author[80];
        }; */
int found=0;
char nameoffile [20];
struct pbooked del;
FILE *fp;


FILE *temppointer;
printf("Please enter the name of the book you wish to delete\t");
scanf("%s", nameoffile);
fp=fopen("book.txt", "r");
if (fp==NULL)
    {
        printf("error file not found");
    }
temppointer = fopen("temp.txt","a");
    if (temppointer==NULL)
        {
                printf("error file not found");
        }
    while (fread(&del, sizeof(struct pbooked), 1,fp)!=NULL)
        {
            if (strcmp (nameoffile, del.title)==0)
            {
                printf("A record with the requested name has been deleted\n");
                found=1;
                system("pause");
            }
            else
            {
                fwrite(&del, sizeof(struct pbooked), 1, temppointer);
            }
        }
    if (found==NULL)
    {
        printf("record not found");
        system("pause");
    }
    fclose(fp);
    fclose(temppointer);
    remove ("book.txt");
    rename("temp.txt", "book.txt");
}


void deletemember()
{
int found=0;
char nameoffile [20];
struct member dele;
FILE *fptr;
FILE *temppointer;
printf("Please enter the name of the member you wish to delete\t");
scanf("%s", nameoffile);
fptr=fopen("listofmembers.txt", "r");
if (fptr==NULL)
    {
        printf("error file not found");
    }
temppointer = fopen("tempp.txt","a");
    if (temppointer==NULL)
        {
                printf("error file not found\n");
        }
    while (fread(&dele, sizeof(struct member), 1,fptr)!=NULL)
        {
            if (strcmp (nameoffile, dele.fname)==0)
            {
                printf("A record with the requested name has been deleted\n");
                found=1;
                system("pause");
            }
            else
            {
                fwrite(&dele, sizeof(struct member), 1, temppointer);
            }
        }
    if (found==NULL)
    {
        printf("record not found");
        system("pause");
    }
    fclose(fptr);
    fclose(temppointer);
    remove ("listofmembers.txt");
    rename("tempp.txt", "listofmembers.txt");
}


void updatebook()
{
        /*struct pbooked
        {
            char status[80];
            char title[80];
            char author[80];
        }; */
int found=0;
char nameoffile1 [20];
struct pbooked update;
FILE *fp;
FILE *temppointer1;
printf("Please enter the name of the book you wish to update");
scanf("%s", nameoffile1);
fp=fopen("book.txt", "r");
if (fp==NULL)
    {
        printf("error file not found");
    }
temppointer1 = fopen("temp1.txt","a");
    if (temppointer1==NULL)
        {
                printf("error file not found");
        }
    while (fread(&update, sizeof(struct pbooked), 1,fp)!=NULL)
        {
            if (strcmp (nameoffile1, update.title)==0)
            {
                    printf("Enter the title of the book  ");
                                fflush(stdin);
                    scanf("%s",&update.title);
                    printf("Enter the status of the book  ");
                    scanf("%s", &update.status);
                     fflush(stdin);
                    printf("Enter the authors name  ");
                                fflush(stdin);
                    scanf("%s", &update.author);
                            printf("Enter the ISBN#  ");
                                fflush(stdin);
                    scanf("%d", &update.ISBN);
                    printf("Enter the Accession#  ");
                                fflush(stdin);
                    scanf("%d", &update.accession);
                    fwrite(&update, sizeof(struct pbooked), 1, temppointer1);
                found=1;
            }
            else
            {
                    fwrite(&update, sizeof(struct pbooked), 1, temppointer1);
            }
        }
    if (found==NULL)
    {
        printf(" no records");
        system("pause");
    }
    fclose(fp);
    fclose(temppointer1);
    remove ("book.txt");
    rename("temp1.txt", "book.txt");
}

void updatemember()
{

int found=0;
char nameoffile1 [20];
struct member updatem;
FILE *fptr;
FILE *temppointer2;
printf("Please enter the name of the member you wish to update\t");
scanf("%s", nameoffile1);
fptr=fopen("listofmembers.txt", "r");
if (fptr==NULL)
    {
        printf("error file not found");
    }
temppointer2 = fopen("temp1.txt","a");
    if (temppointer2==NULL)
        {


                printf("error file not found");
        }
    while (fread(&updatem, sizeof(struct member), 1,fptr)!=NULL)
        {
            if (strcmp (nameoffile1, updatem.fname)==0)
            {
                        printf("\n Please enter member number: ");
                        scanf("%d", &updatem.membernum);
                        fflush(stdin);
                        printf("\n Please enter first name: ");
                        scanf("%s", updatem.fname);
                        fflush(stdin);
                        printf("\n Please enter last name: ");
                        scanf("%s", updatem.lname);
                        fflush(stdin);
                        printf("\n Please enter your address: ");
                        scanf("%s", updatem.address);
                        fflush(stdin);
                        printf("\n Please enter your phone number: ");
                        scanf("%d", &updatem.phonenum);
                        fflush(stdin);
                    fwrite(&updatem, sizeof(struct member), 1, temppointer2);
                found=1;
            }
            else
            {
                    fwrite(&updatem, sizeof(struct member), 1, temppointer2);
            }
        }
    if (found==NULL)
    {
        printf(" no records");
        system("pause");
    }
    fclose(fptr);
    fclose(temppointer2);
    remove ("listofmembers.txt");
    rename("temp1.txt", "listofmembers.txt");
}

void borrowbook()
{
  char bookna[20];
  char books[20];
  char memstat[10];
  char bookstat[10];
  int membernumber, isbm,bdate,rdate;
  int memnum, ret,ret1,i,p,count;
  printf("Enter the member number");
  scanf("%d", &memnum);

  FILE *validptr;
  validptr=fopen("listofmembers.txt","r");
  if (validptr==NULL)
  {
      printf("Error opening file");
  }
     else
     {
        for (count=0;count!=1;count++)
        {
          struct member listofmembers[1000];
          ret=strcmp(memnum,listofmembers[count].membernum);
          if (ret=0)
          {
              printf("Member is valid");
              memstat[10]='valid';
          }
              else
              {
                  printf("User not found");
              }

        }

fclose(validptr);
// this fragment of the function is checking if the member is valid

FILE *bookstatptr;
FILE *borrowbptr;
bookstatptr=fopen("book.txt","r");

if (bookstatptr==NULL )
    {
    printf("Error opening file");
    }
    else
            {
        printf("Enter the book you need");
        scanf("%s", bookna);
        for (p=0;p!=bookna;p++)
        {

            struct pbooked bookreg[100];
            ret1=strcmp(bookna,bookreg[count].title);
            if (ret=0)
            {
                bookstat[10]=(bookreg[count].status);
                p=bookna;
            }
        }
        fclose(bookstatptr);

borrowbptr=(fopen("borrow.txt","w"));

struct borrowbook borrow;
    if (bookstat[10]='available' && memstat[10]=='valid')
    {
        if (borrowbptr==NULL)
        {
        printf("Error opening file");
        }
        else
            {
            printf("Enter member number");
            scanf("%d",& borrow.mnum);
            printf("Enter ISBM #");
            scanf("%d",&borrow.isbn);
            printf("Enter Borrow date");
            scanf("%d",&borrow.bdate);
            printf("Enter Return date(14 DAYS)");
            scanf("%d",&borrow.rdate);
            }
    }
    }
            if (ret!=0)
            {
                printf("The book is not available");
            }
        }
    }
    flcose(borrowbptr);
//This fragment of the function is checking the book's status


void returnbook()// this section of the function is updating the borrow file and creating the late file
{
int datereturn,num,latecharge, latememnum, found, lateisbn, latecharges,latedate,rdate;
char nameofbook [20], ans[2];

struct borrowbook dele;
FILE *borrowptr;
FILE *borrowuptr;
FILE *lateptr;
printf("Please enter the name of the book borrowed\t");
scanf("%s", nameofbook);
printf("Enter member number");
scanf("%d", &num);
borrowptr=fopen("borrow.txt", "r");

if (borrowptr==NULL)
    {
        printf("error file not found");
    }
borrowuptr= fopen("tempp.txt","a");
    if (borrowuptr==NULL)
        {
                printf("error file not found\n");
        }
    while (fread(&dele, sizeof(struct borrowbook), 1,borrowptr)!=NULL)
        {
            if (strcmp (num, dele.mnum)==0)
            {
                printf("A record with the requested name has been deleted\n");
                printf("Return date of book: %d", &rdate);
                printf("Was the book return before on the date above? (y/n)");
                if (ans=='n')
                {
                 latecharge=1000;
                 printf("A late charge of %d is to be applied");
                 lateptr=(fopen("Late.txt","w"));
                   if (lateptr==NULL)
                   {
                       printf("Error opening file");
                   }
                   else
                   {
                       printf("Enter member number");
                       scanf("%d",latememnum);
                       fprintf(lateptr,"%d",latememnum);

                       printf("Enter ISBN #");
                       scanf("%d",lateisbn);
                       fprintf(lateptr,"%d",lateisbn);

                       printf("Enter charges");
                       scanf("%d",latecharges);
                       fprintf(lateptr,"%d",latecharges);

                       printf("Enter date");
                       scanf("%d",latedate);
                       fprintf(lateptr,"%d",latedate);
                   }

                }
                else
                {
                    latecharge=0;
                }
                found=1;
                system("pause");
            }
            else
            {
                fwrite(&dele, sizeof(struct borrowbook), 1, borrowuptr);
            }
        }
    if (found==NULL)
    {
        printf("record not found");
        system("pause");
    }
    remove ("borrow.txt");
    rename("temp.txt", "borrow.txt");
    fclose(borrowptr);
    fclose(borrowuptr);
    fclose(lateptr);

}

void checkmembercharge()// displays a particular member with late charges
 {
            int k, number, check,latemembnum;
            struct late latememnum;
            FILE *fptr;
            fptr = fopen("Late.txt", "r");
            if(fptr==NULL)
            {
                 printf("error not found");
            }
            else
            {
                 printf("Enter the name of the member you wish to see charges for");
                 scanf("%s", number);
                 fprintf(fptr,"%d",latememnum);
                 scanf("%d",  &latemembnum);

                 check=(strcmp(number,latemembnum));
                    if (check==0)
                        {
                        printf("%d\t %d\t %d\t %d\t \n",latememnum.memnum,latememnum.isbn,latememnum.charges,latememnum.date);
                        }
                    else
                    {
                        printf("This member has no charge applied");
                    }
            }
             fclose(fptr);
 }

void Displaylatecharge()//displays all numbers with late charges
  {
            int k;
            struct late allmember;
            FILE *fptr;
            fptr = fopen("Late.txt", "r");
            if(fptr==NULL)
            {
                 printf("error not found");
            }
            else
            {
                 for(k=1;fread(&allmember,sizeof(struct late),1,fptr)!=NULL;k++)
                    {
                        printf("%d\t %d\t %d\t %d\t \n",allmember.memnum,allmember.isbn,allmember.charges,allmember.date);
                    }
            }
             fclose(fptr);
 }


