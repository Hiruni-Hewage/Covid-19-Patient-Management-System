#include<stdio.h>
#include<string.h>
struct ad
{
    char name[30];
    char gender[30];
    int age,date;
    long number;
} x[100];
int n,i,j=0,a=0,sum=0,g,flag,num;
void add();
void view();
void search();
void edit();
void del();
int main()
{

    int user_option,i,q,m;
    for (m=1;m<=50;m++)
        printf("-");
    printf("\n");
    printf("COVID-19 PATIENT MANAGEMENT SYSTEM\n");
    for (m=1;m<=50;m++)
        printf("-");
    printf("\n");
    while(user_option!=6)
    {

        printf("Enter option[0-6]\n\n1. Add a patient Record\n2. Print all Patient Records\n3. Search and Print\n4. Edit Information\n5. Delete a patient Record\n6. Exit\n\nOption=");
        scanf("%d",&user_option);
        fflush(stdin);
        if(user_option==1)
        {
            system("cls");
            add();
        }
        else if(user_option==2)
        {
            system("cls");
            view();
        }
        else if(user_option==3)
        {
            system("cls");
            search();
        }
        else if(user_option==4)
        {
            system("cls");
            edit();
        }
        else if(user_option==5)
        {
            system("cls");
            del();
        }
        else if(user_option==6)
        {
            printf("----Thank you for using COVID 19 PATIENT MANAGEMENT SYSTEM----");
            return 0;
        }
        else
        {
            system("cls");
            printf("\n\nInvalid input , try again by using valid options");
        }
        printf("\n\n");
    }
}
//adding data to the system
void add()
{
    printf("\n\n");
    printf("Already data inputed into the database =%d\n\n",num);
    printf("How many entries do you want to add to the database=\n");
    scanf("%d",&n);
    sum=n+num;

    for(i=num,j=0; i<sum; i++)
    {
        printf("\n");
        fflush(stdin);
        printf("Enter patient's Name = ");
        gets(x[i].name);
        fflush(stdin);
        printf("Enter the gender [Male/Female] =  ");
        gets(x[i].gender);
        fflush(stdin);
        printf("Enter the age = ");
        scanf("%d",&x[i].age);
        fflush(stdin);
        printf("Enter the Admission date [ddmmyear] = ");
        scanf("%d",&x[i].date);
        fflush(stdin);
        printf("Enter the NIC number = ");
        scanf("%ld",&x[i].number);

        fflush(stdin);
        printf("\n");
        j++;
        a++;
        num++;
    }
}
//Function to print all the data of every patients
void view()
{
    for(int i=0; i<num; i++)
    {
        printf("\n");
        printf("Serial Number=%d\n",i);
        printf("Name = ");
        puts(x[i].name);
        printf("Gender = ");
        puts(x[i].gender);
        printf("Age = %d\nAdmission Date = %d\nNIC number=%d",x[i].age,x[i].date,x[i].number);
        printf("\n\n");
    }
}
//Function to edit the patient's data
void edit()
{
    int user_input,serial_number;
    fflush(stdin);
    printf("What do you want to edit ?\n Enter your option\n");
    printf("1.Name\n2.Gender\n3.Age\n4.Admission Date\n5.NIC Number\n");
    printf("Option=");
    scanf("%d",&user_input);
    if(user_input<=5)
    {
        printf("Enter the serial number of that patient= (0 - %d)=",num-1);
        scanf("%d",&serial_number);
        if(serial_number<num)
        {
            if(user_input==1)
            {
                fflush(stdin);
                printf("Enter the new name=");
                gets(x[serial_number].name);

            }
            else if(user_input==2)
            {
                fflush(stdin);
                printf("Enter the gender =");
                gets(x[serial_number].gender);
            }
            else if(user_input==3)
            {
                fflush(stdin);
                printf("Enter the new Age=");
                scanf("%d",&x[serial_number].age);
            }

            else if(user_input==4)
            {
                fflush(stdin);
                printf("Enter the new Admission Date=");
                scanf("%d",&x[serial_number].date);
            }

            else if(user_input==5)
            {
                fflush(stdin);
                printf("Enter the new NIC Number =");
                scanf("%ld",&x[serial_number].number);
            }
        }
        else
        {
            printf("\n\nInvalid Serial Number \nTry Again !!\n\n");
        }
    }
    else
    {
        printf("\n\nInvalid option\nTry Again!!\n\n");
    }
}

//Function to search patient by adding name , age , NIC or Gender
void search()
{
    int s,choice,f;
    char u[100];
    printf("By what do you want to search ?\n");
    printf("1.Serial no.\n2.Name\n3.Gender\n4.Age.\n5.Admission Date.\n6.NIC Number\n\nOption = ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter Serial number of the patient=");
        scanf("%d",&s);
        if(s<num)
        {
            printf("\n");
            printf("Serial Number=%d\n",s);
            printf("Name = ");
            puts(x[s].name);
            printf("Gender = ");
            puts(x[s].gender);
            printf("Age = %d\nAdmission Date = %d\nNIC number= %ld ",x[s].age,x[s].date,x[s].number);
            printf("\n\n");
        }
        else
            printf("\n\nNot Found\n\n");
    }
    else if(choice==2)
    {
        int f=1;
        fflush(stdin);
        printf("Enter your name=");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].name)==0)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Gender = ");
                puts(x[g].gender);
                printf("Age = %d\nAdmission Date = %d\nNIC number=%ld",x[g].age,x[g].date,x[g].number);
                printf("\n\n");
                f=0;

            }
        }
        if(f==1)
            printf("\nNot Found\n");



    }
    else if(choice==3)
    {
        int f=1;
        fflush(stdin);
        printf("Enter the Gender = ");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].gender)==0)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Gender = ");
                puts(x[g].gender);
                printf("Age = %d\nAdmission Date = %d\nNIC number=%ld",x[g].age,x[g].date,x[g].number);
                printf("\n\n");
                f=0;
            }


        }
        if(f==1)
            printf("\nNot Found\n");


    }
    else if(choice==4)
    {
        int f=1;
        printf("Enter the age = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].age)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Gender = ");
                puts(x[g].gender);
                printf("Age = %d\nAdmission Date = %d\nNIC number=%ld",x[g].age,x[g].date,x[g].number);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found\n\n");

    }
    else if(choice==5)
    {
        int f=1;
        printf("Enter Admission Date = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].date)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Gender = ");
                puts(x[g].gender);
                printf("Age = %d\nAdmission Date = %d\nNIC number=%ld",x[g].age,x[g].date,x[g].number);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found");
    }
    else if(choice==6)
    {
        int f=1;
        printf("Enter the NIC Number = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].number)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Gender = ");
                puts(x[g].gender);
                printf("Age = %d\nAdmission Date = %d\nNIC number=%ld",x[g].age,x[g].date,x[g].number);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found\n\n");

    }
    else
        printf("\n\nInvalid input\n\n");




}
void del()
{
    int s_no,user_choice;
    printf("Enter the serial number of the COVID-19 patient that you want to delete=");
    scanf("%d",&s_no);
    if(s_no<num)
    {
        printf("What do you want ?\n Enter your choice\n");
        printf("1.Remove the whole record\n2.Remove Name\n3.Remove Age\n4.Remove Gender\n5.Remove Admission date\n6.Remove NIC number\nOption = ");
        scanf("%d",&user_choice);
        if(user_choice==1)
        {
            while(s_no<num)
            {
                strcpy(x[s_no].name,x[s_no+1].name);
                strcpy(x[s_no].gender,x[s_no+1].gender);
                x[s_no].age=x[s_no+1].age;
                x[s_no].date=x[s_no+1].date;
                x[s_no].number=x[s_no+1].number;
                s_no++;
            }
            num--;
        }
        else if(user_choice==2)
        {
            strcpy(x[s_no].name,"Cleared");

        }
        else if(user_choice==3)
        {
            strcpy(x[s_no].age,"Cleared");
        }
        else if(user_choice==4)
        {
            strcpy(x[s_no].gender,"Cleared");
        }
        else if(user_choice==5)
        {
            strcpy(x[s_no].date,"Cleared");
        }
        else if(user_choice==6)
        {
            strcpy(x[s_no].date,"Cleared");
        }

    }
    else
        printf("\n\nThe Serial Number you entered is INVALID\n");

}

