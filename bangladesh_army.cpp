#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct bangladesh_army
{
    char name[100];
    char gender[100];
    int age;
    char rank[100];
    char email[30];
    char district[100];
    char thana[100];
    char marital_status[100];
    char mobile_number[100];
    char blood_group[10];
    float salery;
    int son;
    int daughter;
    int job_duration;
    float height;


};
 /***  Admin's Structure  ***/
struct admin
{
    char username[100];
    char password[100];
};

/***    main function     ***/
int main()
{
    system("cls");
    //clrscr();

    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
     cout<<"\n\n\t\t\t Bangladesh Army Database \n\n";
     cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
     cout<<"\n\n\t[Log In]\n\n";

    FILE *fa;
    int x=1;
    admin s[x];
    fa=fopen("admin.txt","r");
    for(int j=0;j<x;j++)
    {
        fscanf(fa,"%[^:]:%s", s[j].username, s[j].password);
    }
//    for(int j=0;j<x;j++)
//    {
//        puts(s[i].username);
//        puts(s[i].password);
//    }




    char username[100];
    char password[100];
    printf("Username: ");
    gets(username);
    if(strcmp(s[0].username,username)==0)
    {
        printf("Password: ");
        gets(password);

        system("cls");    // Clear the screen

        if(strcmp(s[0].password,password)==0)
        {
                cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\tProject Show\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t Queries: \n\n";
            /***  Task 1  ***/
            int n;
            n=50;
            bangladesh_army s[n];
            FILE *fp;
            fp=fopen("bangladesh_army.txt","r");


            for(int i=0;i<n;i++)
            {
                fscanf(fp,"%[^:]:%[^:]:%d:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%f:%d:%d:%d:%f", s[i].name, s[i].gender, &s[i].age, s[i].rank, s[i].email, s[i].district, s[i].thana, s[i].marital_status, s[i].mobile_number, s[i].blood_group, &s[i].salery, &s[i].son, &s[i].daughter, &s[i].job_duration, &s[i].height);
            }

            /***    testing   ***/

//            for(int i=0;i<n;i++)
//            {
//                printf("Name:");
//                puts(s[i].name);
//                printf("Gender:\n");
//                puts(s[i].gender);
//                printf("Age:\n");
//                printf("%d\n", s[i].age);
//                printf("Rank:\n");
//                puts(s[i].rank);
//                printf("Email Address:\n");
//                puts(s[i].email);
//                printf("Home Town:\n");
//                puts(s[i].district);
//                printf("Thana:\n");
//                puts(s[i].thana);
//                printf("Marital Status:\n");
//                puts(s[i].marital_status);
//                printf("Mobile Number:\n");
//                puts(s[i].mobile_number);
//                printf("Blood Group:\n");
//                puts(s[i].blood_group);
//                printf("Salary:\n");
//                printf("%.2f\n", s[i].salery);
//                printf("Number of Sons:\n");
//                printf("%d\n", s[i].son);
//                printf("Number of Daughter:\n");
//                printf("%d\n", s[i].daughter);
//                printf("Job Duration:\n");
//                printf("%d\n", s[i].job_duration);
//                printf("Height Of Army:\n");
//                printf("%.1f\n", s[i].height);
//                printf("\n\n");
//            }




//            cout<<endl;
//            cout<<endl;

            int x, z;
            while(1)
            {

                printf("***Query of Imrul***\n");
                printf("press 1 to count number of male army:\n");
                printf("press 2 to find army having Grameen Phone number:\n");
                printf("press 3 to find out army name having B- blood group:\n");
                printf("press 4 to find unmarried army:\n");
                printf("press 5 to find army live in Dhaka:\n");
                printf("press 6 to find youngest female army:\n");
                printf("press 7 to find married army but no children:\n");
                printf("press 8 to find army having same number of son and daughter:\n");
                printf("press 9 to find name & number of army aged 20 to 30 years old:\n");
                printf("press 10 to find the tallest female army:\n");
                printf("press 0 to exit.\n\n");
                printf("***Query of Zarif***\n");
                printf("press 11 to find out eldest male army's name:\n");
                printf("press 12 to find out army name with rank of Brigadier General:\n");
                printf("press 13 to find out army name getting maximum salery:\n");
                printf("press 14 to find out army name having less job duration:\n");
                printf("press 15 to find out colonel getting minimum salery:\n");
                printf("press 16 to find out Genaral ranked armies Email addresses:\n");
                printf("press 17 to find contact number of Colonel ranked officer:\n");
                printf("press 18 to find major ranked army with highest job duration:\n");
                printf("press 19 to find out Captain name having no sons:\n");
                printf("press 20 to find second lieutenant army name who live outside Dhaka:\n");
                printf("press 21 to exit:\n");



                scanf("%d",&x);
                fflush(stdin);

                /*** male count  ***/
                if(x==1)
                {
                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**Number of Male army**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;

                    int count=0;
                    for(int i=0;i<n;i++)
                    {
                        if(strcmp(s[i].gender, "male")==0)
                        {
                            count++;
                        }
                    }
                    printf("Number of male army = %d\n", count);
                    printf("\n");

                }

                /*** army aving gp number   ***/
                else if(x==2)
                {
                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**Army having Grameen Phone number.**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;

                    printf("Army having Grameen Phone number are:\n");
                    for(int i=0;i<n;i++)
                    {
                        if(s[i].mobile_number[2]=='7')
                        {
                            puts(s[i].name);
                            puts(s[i].mobile_number);
                            printf("\n");
                        }
                    }
                }

                /*** army having B- blood group   ***/
                else if(x==3)
                {
                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**army having B- blood group**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;

                    for(int i=0;i<n;i++)
                    {
                        if(strcmp(s[i].blood_group,"B-")==0)
                        {
                            puts(s[i].name);
                        }
                    }

                }

                /***   unmarried army  ***/

                else if(x==4)
                {
                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**unmarried army**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;

                    for(int i=0;i<n;i++)
                    {
                        if(strcmp(s[i].marital_status,"Unmarried")==0)
                        {
                            puts(s[i].name);
                        }
                    }
                }

                /*** army live in Dhaka  ***/
                else if(x==5)
                {
                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**army live in Dhaka**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;

                    for(int i=0;i<n;i++)
                    {
                        if(strcmp(s[i].district, "Dhaka")==0)
                        {
                            puts(s[i].name);
                        }
                    }
                }

                /*** youngest female army  ***/
                else if(x==6)
                {
                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**youngest female army**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;


                    int min_age=s[0].age;
                    int min_index=0;

                    for(int i=0;i,n;i++)
                    {
                        if(strcmp(s[i].gender,"female")==0)
                        {
                            min_age=s[i].age;
                            min_index=i;
                            break;
                        }
                    }
                    for(int i=0;i<n;i++)
                    {
                        if((s[i].age<min_age) && (strcmp(s[i].gender,"female")==0))
                        {
                            min_age=s[i].age;
                            min_index=i;
                        }
                    }
                    printf("Youngest female army is:");
                    puts(s[min_index].name);
                }

                /***   army married but having no child   ***/
                else if(x==7)
                {
                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**army married but having no child**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;

                    for(int i=0;i<n;i++)
                    {
                        if((strcmp(s[i].marital_status,"Married")==0)&&((s[i].son)==0)&&((s[i].daughter)==0))
                        {
                            puts(s[i].name);
                        }
                    }
                }


                /***  army having same number of son and daughter  ***/
                else if(x==8)
                {

                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**army having same number of son and daughter**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;

                    for(int i=0;i<n;i++)
                    {
                        if((s[i].son)==(s[i].daughter) && (s[i].son!=0) && (s[i].daughter!=0))
                        {
                            puts(s[i].name);
                        }
                    }
                }


                /***   Army name with cell number having age of under 20 to 30   ***/

                else if(x==9)
                {
                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**Army name with cell number having age of under 20 to 30**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;

                    for(int i=0;i<n;i++)
                    {
                        if(s[i].age>=20 && s[i].age<=30)
                        {
                            puts(s[i].name);
                            puts(s[i].mobile_number);
                            printf("\n");
                        }
                    }
                }

                /***   tallest female army   ***/
                else if(x==10)
                {
                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**tallest female army**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;

                    float max_height=s[0].height;
                    int max_index=0;
                    for(int i=0;i<n;i++)
                    {
                        if(strcmp(s[i].gender,"female")==0)
                        {
                            max_height=s[i].height;
                            max_index=i;
                            break;
                        }
                    }

                    for(int i=0;i<n;i++)
                    {
                        if((strcmp(s[i].gender,"female")==0) && (s[i].height>max_height))
                        {
                            max_height=s[i].height;
                            max_index=i;
                        }
                    }
                    printf("The tallest female name is : ");
                    puts(s[max_index].name);
                }
                else if(x==0)
                {
                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**Exit Window**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;

                    exit(0);
                }

                        /*** eldest male army  ***/
                else if(x==11)
                {
                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**eldest male army**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;

                    int max_age=s[0].age;
                    int max_index=0;

                    for(int i=0;i<n;i++)
                    {
                        if(s[i].age>max_age)
                        {
                            max_age=s[i].age;
                            max_index=i;
                        }
                    }
                    printf("Eldest male army name is: ");
                    puts(s[max_index].name);
                }

                /*** army name with rank of Brigadier General  ***/
                else if(x==12)
                {

                system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**army name with rank of Brigadier General**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;
                    for(int i=0;i<n;i++)
                    {
                        if(strcmp(s[i].rank,"Brigadier General")==0)
                        {
                            puts(s[i].name);
                        }
                    }
                }

                /*** army name getting max salary ***/
                else if(x==13)
                {
                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**army name getting max salaryl**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;

                    float max_salery=s[0].salery;
                    int max_index=0;
                    for(int i=0;i<n;i++)
                    {
                        if(s[i].salery>max_salery)
                        {
                            max_salery=s[i].salery;
                            max_index=i;
                        }
                    }
                    puts(s[max_index].name);
                }

                /*** army having less job duration ***/
                else if(x==14)
                {
                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**army having less job duration**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;

                    int less_job_duration=s[0].job_duration;
                    int less_index=0;

                    for(int i=0;i<n;i++)
                    {
                        if(s[i].job_duration<less_job_duration)
                        {
                            less_job_duration=s[i].job_duration;
                            less_index=i;
                        }
                    }
                    puts(s[less_index].name);
                }

                /***   colonel name getting less salery  ***/
                else if(x==15)
                {
                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**colonel name getting less salery**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;

                    float min_salery=s[0].salery;
                    int min_index=0;


                    for(int i=0;i<n;i++)
                    {
                        if(strcmp(s[i].rank, "Colonel")==0)
                        {
                            min_salery=s[i].salery;
                            min_index=i;
                            break;
                        }
                    }
                    for(int i=0;i<n;i++)
                    {
                        if((strcmp(s[i].rank,"Colonel")==0) && (s[i].salery<min_salery))
                        {
                            min_salery=s[i].salery;
                            min_index=i;
                        }
                    }
                    puts(s[min_index].name);
                }


                /***   General ranked armies  Email addresses   ***/
                else if(x==16)
                {

                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**General ranked armies  Email addresses**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;
                    for(int i=0;i<n;i++)
                    {
                        if(strcmp(s[i].rank,"General")==0)
                        {
                            puts(s[i].email);
                        }
                    }
                }

                /***  contact number with name of Colonel ranked officers  ***/
                else if(x==17)
                {
                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**contact number with name of Colonel ranked officers**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;
                    for(int i=0;i<n;i++)
                    {
                        if(strcmp(s[i].rank,"Colonel")==0)
                        {
                            puts(s[i].name);
                            puts(s[i].mobile_number);
                            printf("\n");
                        }
                    }
                }


                /*** Major have minimum job duration  ***/
                else if(x==18)
                {
                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**Major have minimum job duration**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;
                    int max_job_duration=s[0].job_duration;
                    int max_index=0;
                    for(int i=0;i<n;i++)
                    {
                        if(strcmp(s[i].rank, "Major")==0)
                        {
                            max_job_duration=s[i].job_duration;
                            max_index=i;
                            break;
                        }
                    }
                    for(int i=0;i<n;i++)
                    {
                        if((strcmp(s[i].rank,"Major")==0) && (s[i].job_duration>max_job_duration))
                        {
                            max_job_duration=s[i].job_duration;
                            max_index=i;
                        }
                    }
                    puts(s[max_index].name);
                    printf("\n");
                }


                /*** Captain having no son ***/
                else if(x==19)
                {
                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**Captain having no son**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;
                    int i;
                    for(i=0;i<n;i++)
                    {
                        if((strcmp(s[i].rank,"Captain")==0) && (strcmp(s[i].marital_status,"Married")==0) && ((s[i].son)==0))
                        {
                            puts(s[i].name);
                        }
                    }
                }

                /***  Second lieutenant name who live outside Dhaka ****/
                else if(x==20)
                {
                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**Second lieutenant name who live outside Dhaka**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;
                    int i;
                    for(i=0;i<n;i++)
                    {
                        if((strcmp(s[i].rank,"Second lieutenant")==0) && (strcmp(s[i].district,"Dhaka")!=0))
                        {
                            puts(s[i].name);
                        }
                    }
                }

                /*** EXIT ***/
                else if(x==21)
                {
                    system("cls");
                    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<"\n\n\t\t\t**Exit Window**\n\n";
                 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
                 cout<<endl;

                    exit(0);
                }
            }

            fclose(fp);

        }
        fclose(fa);
    }

    else
    {
        printf("Wrong Username.\a\a");
    }

    return 0;
}
