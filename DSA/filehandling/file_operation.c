#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

FILE *ptr,*ptr1,*ptr2;
char ch;

void random ()
{

}


struct student
{
    int rollno;
    char name[20];
    float marks;
};

void student_details()
{
    struct student s1;
    int i;

    ptr=fopen("studentdetails.txt","w");

    for (i=1;i<=3;i++)
    {
        printf("Enter Roll number: ");
    scanf("%d",&s1.rollno);
    printf("Enter Name: ");
    scanf("%s",s1.name);
    printf("Enter Marks:");
    scanf("%f",&s1.marks);

    //It sends data to a file instead of the console.
    . //ptrThis is the File Pointer. It tells the computer which file to write to.
   // You would have defined it earlier using something like FILE *ptr = fopen("student.txt", "w");.

    fprintf(ptr,"%d %s %f\n",s1.rollno,s1.name,s1.marks);
    }

    fclose(ptr);
    printf("\n");
}

void print1 ()
{
    struct student s1;
    int i;
    ptr=fopen("studentdetails.txt","r");
    for (i=1;i<=3;i++)
    {
        // It reads data from a file and stores it into a structure so you can display it on the screen.
        fscanf(ptr,"%d %s %f",&s1.rollno,s1.name,&s1.marks);
        printf("------------------------------------------------\n");
        printf("Roll No:%d\nName:%s\nMarks:%f\n",s1.rollno,s1.name,s1.marks);
        printf("------------------------------------------------\n");
    }

    fclose(ptr);

}


void segregate ()
{
    int num;
    ptr=fopen("sample6.txt","r");
    ptr1=fopen("even.txt","w");
    ptr2=fopen("odd.txt","w");

    while((num=getw(ptr))!=EOF)
    {
        if (num%2==0)
        {
           putw(num,ptr1);
        }
        if (num%2!=0)
        {
           putw(num,ptr2);
        }
    }
    fclose(ptr);
    fclose(ptr1);
    fclose(ptr2);

    ptr=fopen("sample6.txt","r");
    ptr1=fopen("even.txt","r");
    ptr2=fopen("odd.txt","r");

    printf("Raw data: \n");
    while((num=getw(ptr))!=EOF)
    {
        printf("%d\n",num);
    }
    printf("Even data:\n");
     while((num=getw(ptr1))!=EOF)
    {
        printf("%d\n",num);
    }
    printf("Odd data:\n");
     while((num=getw(ptr2))!=EOF)
    {
        printf("%d\n",num);
    }
    fclose(ptr);
    fclose(ptr1);
    fclose(ptr2);
}


void integer ()
{
    ptr=fopen("sample6.txt","w");
    int num,i;
      if(ptr==NULL)
    {
        printf("File not created\n");
    }
    else
    {
         printf("Enter integers:\n");
         for(i=0;i<=10;i++)
        {
            scanf("%d",&num);
            putw(num,ptr);
        }
        fclose(ptr);
    }
}

void readint ()
{
    ptr=fopen("sample6.txt","r");
    int num;
      if(ptr==NULL)
    {
        printf("File not created\n");
    }
    else
    {
        printf("File integer content:\n");
         while((num=getw(ptr))!=EOF)
        {
            printf("%d\n",num);
        }
        fclose(ptr);
    }
}

void count ()
{
    int charcount=0,spacecount=0,tabcount=0,linecount=0;
    ptr=fopen("sample2.txt","r");
     if(ptr==NULL)
    {
        printf("File not created\n");
    }
    else
    {
        printf("Count of the file:\n");
         while((ch=getc(ptr))!=EOF)
        {
            charcount++;
            if (ch==' ')
            {
                spacecount++;
            }
            if (ch=='\t')
            {
                tabcount++;
            }
            if (ch=='\n')
            {
                linecount++;
            }
        }
        fclose(ptr);
        printf("Total char:%d\nTotal spaces:%d\nTotal tabs used:%d\nLine:%d\n\n",charcount,spacecount,tabcount,linecount);
    }
}

void insert ()
{
    ptr=fopen("sample5.txt","a");
    printf("Enter data:\n");
      if(ptr==NULL)
    {
        printf("File not created\n");
    }
    else
    {
         while((ch=getchar())!='|')
        {
            putc(ch,ptr);
        }
        fclose(ptr);
    }
}

void copy ()
{
     ptr=fopen("sample2.txt","r");
     ptr1=fopen("copy1.txt","w");
     if(ptr==NULL)
    {
        printf("File not created\n");
    }
    else
    {
         while((ch=getc(ptr))!=EOF)
        {
            putc(ch,ptr1);
        }
        printf("\n");
        fclose(ptr1);
        fclose(ptr);
    }
}

void append ()
{
    ptr=fopen("sample2.txt","a+");
      if(ptr==NULL)
    {
        printf("File not created\n");
    }
    else
    {
        printf("Enter data:\n");
        printf("\nFile pointer position:%1d\n",ftell(ptr));
        while((ch=getc(ptr))!=EOF)
        {
            printf("%c",ch);
        }
        printf("\nFile pointer position:%1d\n",ftell(ptr));
        rewind(ptr);
        printf("\nFile pointer position:%1d\n",ftell(ptr));
        fseek(ptr,7,SEEK_SET);

         while((ch=getchar())!='|')
        {
            putc(ch,ptr);
        }
        fclose(ptr);
    }
}

void read ()
{
    ptr=fopen("sample2.txt","r");
     if(ptr==NULL)
    {
        printf("File not created\n");
    }
    else
    {
        printf("Content of the file:\n");
         while((ch=getc(ptr))!=EOF)
        {
            printf("%c",(ch));
        }
        printf("\n");
        fclose(ptr);
    }
}

void readc ()
{
    ptr=fopen("copy1.txt","r");
     if(ptr==NULL)
    {
        printf("File not created\n");
    }
    else
    {
        printf("Content of the file:\n");
         while((ch=getc(ptr))!=EOF)
        {
            printf("%c",tolower(ch));
        }
        printf("\n");
        fclose(ptr);
    }
}

int main()
{
    int k;
    while(1)
    {
        printf("MENU:\n1.Create\n2.Read\n3.Write\n4.Copy\n5.Read copy\n6.Count\n7.Write Integer\n");
        printf("8.Read Integer\n9.Segregate(Even/odd)\n10.Student details\n11.Print student details\n19.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&k);
        switch (k)
        {
        case 1:
            insert ();
            break;
        case 2:
            read();
            break;
        case 3:
            append();
            break;
        case 4:
            copy ();
            break;
        case 5:
            readc ();
            break;
        case 6:
            count ();
            break;
        case 7:
            integer ();
            break;
        case 8:
            readint ();
            break;
        case 9:
            segregate ();
            break;
        case 10:
            student_details();
            break;
        case 11:
            print1 ();
            break;
        case 19:
            exit (1);
            break;
        default:
            printf("wrong choice");
            break;
        }
    }
    return (0);
}
