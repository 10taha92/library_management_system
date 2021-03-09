
//			HEADER FILES USED

#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<iomanip.h>
#include<dos.h>
#define rw 80
#define cl 66


// 		BORDER FUNCTION


void design()
{
	int i,j;
	for(i=2,j=2;i<rw;j++)
	{
		if(j>15)
		j=2;
		textcolor(j);
		gotoxy(i,2);
		cprintf("%c",15);
		gotoxy(i,cl-1);
		cprintf("%c",15);
		i++;

	}
	for(i=2,j=2;i<cl;i++,j++)
	{
		if(j>15)
		j=2;
		textcolor(j);
		gotoxy(2,i);
		cprintf("%c",15);
		gotoxy(rw-1,i);
		cprintf("%c",15);

	}
}

int k=2;
int Line=10;
char Array[10][25]={ "         Menu:        ", "----------------------",
	"1)BOOK ISSUE","2)BOOK DEPOSIT", "3)ADMINISTRATOR MENU", "4)ADMIN DATABASE", "5)LOG OUT!!  ",
	"6)EXIT","7)Help"};
char Array2[40][40]={    "          Admin database:        ",
			"---------------------------------",
			"1.CREATE ADMIN RECORD",
			"2.DISPLAY ALL ADMIN RECORD",
			"3.DISPLAY SPECIFIC ADMIN RECORD",
			"4.MODIFY ADMIN RECORD",
			"5.DELETE ADMIN RECORD"  ,
			"6.BACK TO MAIN MENU",
			};
char Array3[50][50]={"        ADMINISTRATOR MENU         ",
		     "-----------------------------------",
		     "1.CREATE STUDENT RECORD",
		     "2.DISPLAY ALL STUDENTS RECORD",
		     "3.DISPLAY SPECIFIC STUDENT RECORD ",
		     "4.MODIFY STUDENT RECORD",
		     "5.DELETE STUDENT RECORD",
		     "6.CREATE BOOK ",
		     "7.DISPLAY ALL BOOKS ",
		     "8.DISPLAY SPECIFIC BOOK ",
		     "9.MODIFY BOOK ",
		     "10.DELETE BOOK ",
		     "11.BACK TO MAIN MENU",
		     "Please Enter Your Choice (1-11) "};

void NavMenu3(void)
{
	int i=0;
	textbackground(BLUE);
	clrscr();
	design();
		struct date d;

 getdate(&d);
		gotoxy(55,4);
		textbackground(15);
		printf(" date:-> %d/%d/%d",d.da_day,d.da_mon,d.da_year);

	textcolor(7);
	gotoxy(25 ,8);
	textbackground(RED);
	textcolor(BLUE);
	cprintf("%s" ,Array3[0]);
	gotoxy(25,9);
	textcolor(WHITE);
	cprintf("%s",Array3[1]);

	textbackground(0);
	for(i=10; i<21; i++)
	{

		gotoxy(25,i);
		textbackground(RED);
		textcolor(WHITE);
		cprintf("|");
		gotoxy(26 ,i);
		if(i==Line)
			textbackground(BLUE);
		else
			textbackground(BLUE);
		textcolor(26);
		cprintf("%s" ,Array3[i-8]);
		gotoxy(59,i);
		textcolor(WHITE);
		textbackground(RED);
		cprintf("|");
	}
	gotoxy(25,i);
	textcolor(WHITE);
	textbackground(RED);
	cprintf("|");
	gotoxy(26,i);
	cprintf("     please Enter Your Choice    ");
	gotoxy(59,i);
	cprintf("|");
	gotoxy(25,i+1);
	textcolor(WHITE);
	textbackground(RED);
	cprintf("|");
	gotoxy(26,i+1);
	cprintf("_________________________________");
	gotoxy(59,i+1);
	cprintf("|");
}


void NavMenu2(void)
{
	int i=0;
	textbackground(BLUE);
	clrscr();
	design();
		struct date d;

 getdate(&d);
		gotoxy(55,4);
		textbackground(15);
		printf(" date:-> %d/%d/%d",d.da_day,d.da_mon,d.da_year);

	textcolor(7);
	gotoxy(25 ,8);
	textbackground(RED);
	textcolor(BLUE);
	cprintf("%s" ,Array2[0]);
	gotoxy(25,9);
	textcolor(WHITE);
	cprintf("%s",Array2[1]);

	textbackground(0);
	for(i=10; i<16; i++)
	{

		gotoxy(25,i);
		textbackground(RED);
		textcolor(WHITE);
		cprintf("|");
		gotoxy(26 ,i);
		if(i==Line)
			textbackground(BLUE);
		else
			textbackground(BLUE);
		textcolor(26);
		cprintf("%s" ,Array2[i-8]);
		gotoxy(57,i);
		textcolor(WHITE);
		textbackground(RED);
		cprintf("|");
	}
	gotoxy(25,i);
	textcolor(WHITE);
	textbackground(RED);
	cprintf("|");
	gotoxy(26,i);
	cprintf("    please Enter Your Choice    ");
	gotoxy(57,i);
	cprintf("|");
	gotoxy(25,i+1);
	textcolor(WHITE);
	textbackground(RED);
	cprintf("|");
	gotoxy(26,i+1);
	cprintf("________________________________");
	gotoxy(57,i+1);
	cprintf("|");
}



void NavMenu(void)
{
	int i=0;
	textbackground(BLUE);
	clrscr();
	design();
		struct date d;

 getdate(&d);
		gotoxy(55,4);
		textbackground(15);
		printf(" date:-> %d/%d/%d",d.da_day,d.da_mon,d.da_year);

	textcolor(7);
	gotoxy(29 ,8);
	textbackground(RED);
	textcolor(BLUE);
	cprintf("%s" ,Array[0]);
	gotoxy(29,9);
	textcolor(WHITE);
	cprintf("%s",Array[1]);

	textbackground(0);
	for(i=10; i<17; i++)
	{

		gotoxy(29,i);
		textbackground(RED);
		textcolor(WHITE);
		cprintf("|");
		gotoxy(30 ,i);
		if(i==Line)
			textbackground(BLUE);
		else
			textbackground(BLUE);
		textcolor(26);
		cprintf("%s" ,Array[i-8]);
		gotoxy(50,i);
		textcolor(WHITE);
		textbackground(RED);
		cprintf("|");
	}
	gotoxy(29,i);
	textcolor(WHITE);
	textbackground(RED);
	cprintf("|");
	gotoxy(30,i);
	cprintf("____________________");
	gotoxy(50,i);
	cprintf("|");
}

// Navigating functions
void mainmenu();
void admindatabase();
void admin_menu();


//                   CLASS USED IN PROJECT

class admin
{


	char adname[26];
	char adid[25];
	char adpass[25];
  public:
	void create_admin()
	{       cout<<"\n\n GIVE ADMIN DETAILS \n";
		cout<<"give admin name: ";
		gets(adname);
		cout<<"\n";
		cout<<"give its new id : ";
		gets(adid);
		cout<<"\n";
		cout<<"give your password : ";
		gets(adpass);
	}

	void show_admin()
	{
		cout<<"\nadmin name : "<<adname;
		cout<<"\nAdmin ID: ";
		puts(adid);
		cout<<"\nAdmin password: ";
		puts(adpass);

	}
	void modify_admin()
	{
		cout<<"\nAdmin name. : "<<adname;
		cout<<"\nModify Admin Name : ";
		gets(adname);
		cout<<"\nModify AdminID :  ";
		gets(adid);
		cout<<"\nModify admin password : ";

		gets(adpass);

	}
	char* retadname()
	{
		return adname;

	}
	char* retadpass()
	{
		return adpass;
	}
	char* retadid()
	{
		return adid;
	}


	void report()
	{cout<<" "<<adname<<setw(35)<<adid<<setw(20)<<adpass<<endl;}
};        // class ends here


class book : public admin
{
	char bno[6];
	char bname[50];
	char aname[20];
  public:
	void create_book()
	{
		cout<<"\nNEW BOOK ENTRY...\n";
		cout<<"\nEnter The book no.";
		cin>>bno;
		cout<<"\n\nEnter The Name of The Book : ";
		gets(bname);
		cout<<"\n\nEnter The Author's Name : ";
		gets(aname);
		cout<<"\n\n\nBook Created..\n";
	}

	void show_book()
	{
		cout<<"\nBook no. : "<<bno;
		cout<<"\nBook Name : ";
		puts(bname);
		cout<<"Author Name : ";
		puts(aname);

	}

	void modify_book()
	{
		cout<<"\nBook no. : "<<bno;
		cout<<"\nModify Book Name : ";
		gets(bname);
		cout<<"\nModify Author's Name of Book : ";

		gets(aname);

	}

	char* retbno()
	{
		return bno;

	}

	void report()
	{cout<<" "<<bno<<setw(35)<<bname<<setw(20)<<aname<<endl;}


};         //class ends here




class student :public admin
{
	char admno[6];
	char name[20];
	char stbno[6];
	int token;
public:
	void create_student()
	{
		clrscr();
		cout<<"\nNEW STUDENT ENTRY...\n";
		cout<<"\nEnter The admission no. ";
		cin>>admno;
		cout<<"\n\nEnter The Name of The Student : ";
		gets(name);
		token=0;
		stbno[0]='/0';
		cout<<"\n\nStudent Record Created..";
	}

	void show_student()
	{
		cout<<"\nAdmission no. : "<<admno;
		cout<<"\nStudent Name : ";
		puts(name);
		cout<<"\nNo of Book issued : "<<token;
		if(token>=1)
			cout<<"\nBook No: "<<stbno;
	}

	void modify_student()
	{
		cout<<"\nAdmission no. : "<<admno;
		cout<<"\nModify Student Name : ";
		gets(name);
	}

	char* retadmno()
	{
		return admno;
	}

	char* retstbno()
	{
		return stbno;
	}

	int rettoken()
	{
		return token;
	}

	void addtoken()
	{token=token+1;

	}

	void resettoken()
	{token=token-1;
	}

	void getstbno(char t[])
	{
		strcpy(stbno,t);
	}

	void report()
	{cout<<"\t"<<admno<<setw(30)<<name<<setw(20)<<token<<endl;}

};         //class ends here


//    	global declaration for stream object, object



fstream fp,fp1,fp2;
book bk;
student st;
admin ad;



//    	function to write in file


void write_admin()
{       textbackground(BLUE);
    textcolor(CYAN);
	char ch;
	fp.open("admin.dat",ios::out|ios::app);
	do
	{
		clrscr();
		ad.create_admin();
		fp.write((char*)&ad,sizeof(admin));
		cout<<"\n\nDo you want to add more record..(y/n?)";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	fp.close();
}

void write_book()
{       textbackground(BLUE);
    textcolor(CYAN);
	char ch;
	fp.open("book.dat",ios::out|ios::app);
	do
	{
		clrscr();
		bk.create_book();
		fp.write((char*)&bk,sizeof(book));
		cout<<"\n\nDo you want to add more record..(y/n?)";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	fp.close();
}

void write_student()
{       textbackground(BLUE);
    textcolor(CYAN);
	char ch;
	fp.open("student.dat",ios::out|ios::app);
	do
	{
		st.create_student();
		fp.write((char*)&st,sizeof(student));
		cout<<"\n\ndo you want to add more record..(y/n?)";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	fp.close();
}

//    	function to read specific record from file

void display_spa(char n[])
{       textbackground(BLUE);
    textcolor(CYAN);
	cout<<"\nADMIN DETAILS\n";
	int flag=0;
	fp.open("admin.dat",ios::in);
	while(fp.read((char*)&ad,sizeof(admin)))
	{
		if(strcmpi(ad.retadname(),n)==0)
		{
			ad.show_admin();
			flag=1;
		}
	}

	fp.close();
	if(flag==0)
	cout<<"\n\nAdmin does not exist";
	getch();
}

void display_spb(char n[])
{       textbackground(BLUE);
    textcolor(CYAN);
	cout<<"\nBOOK DETAILS\n";
	int flag=0;
	fp.open("book.dat",ios::in);
	while(fp.read((char*)&bk,sizeof(book)))
	{
		if(strcmpi(bk.retbno(),n)==0)
		{
			bk.show_book();
			flag=1;
		}
	}

	fp.close();
	if(flag==0)
	cout<<"\n\nBook does not exist";
	getch();
}

void display_sps(char n[])
{       textbackground(BLUE);
    textcolor(CYAN);
	cout<<"\nSTUDENT DETAILS\n";
	int flag=0;
	fp.open("student.dat",ios::in);
	while(fp.read((char*)&st,sizeof(student)))
	{
		if((strcmpi(st.retadmno(),n)==0))
		{
			st.show_student();
			flag=1;
		}
	}

	fp.close();
	if(flag==0)
	cout<<"\n\nStudent does not exist";
	getch();
}



//    	function to modify record of file


void modify_admin()
{
	char n[6];
	int found=0;
	clrscr();
	textbackground(BLUE);
    textcolor(CYAN);
	cout<<"\n\n\tMODIFY ADMIN REOCORD.... ";
	cout<<"\n\n\tEnter The admin name. ";
	cin>>n;
	fp.open("admin.dat",ios::in|ios::out);
	while(fp.read((char*)&ad,sizeof(admin)) && found==0)
	{
		if(strcmpi(ad.retadname(),n)==0)
		{
			ad.show_admin();
			cout<<"\nEnter The New Details of admin"<<endl;
			ad.modify_admin();
			int pos=-1*sizeof(ad);
			fp.seekp(pos,ios::cur);
			fp.write((char*)&ad,sizeof(admin));
			cout<<"\n\n\t Record Updated";
			found=1;
		}
	}

	fp.close();
	if(found==0)
	cout<<"\n\n Record Not Found ";
	getch();
}


void modify_book()
{
	char n[6];
	int found=0;
	clrscr();
	textbackground(BLUE);
    textcolor(CYAN);
	cout<<"\n\n\tMODIFY BOOK REOCORD.... ";
	cout<<"\n\n\tEnter The book no. of The book";
	cin>>n;
	fp.open("book.dat",ios::in|ios::out);
	while(fp.read((char*)&bk,sizeof(book)) && found==0)
	{
		if(strcmpi(bk.retbno(),n)==0)
		{
			bk.show_book();
			cout<<"\nEnter The New Details of book"<<endl;
			bk.modify_book();
			int pos=-1*sizeof(bk);
			fp.seekp(pos,ios::cur);
			fp.write((char*)&bk,sizeof(book));
			cout<<"\n\n\t Record Updated";
			found=1;
		}
	}

	fp.close();
	if(found==0)
	cout<<"\n\n Record Not Found ";
	getch();
}


void modify_student()
{
	char n[6];
	int found=0;
	clrscr();
	textbackground(BLUE);
	textcolor(CYAN);
	cout<<"\n\n\tMODIFY STUDENT RECORD... ";
	cout<<"\n\n\tEnter The admission no. of The student";
	cin>>n;
	fp.open("student.dat",ios::in|ios::out);
	while(fp.read((char*)&st,sizeof(student)) && found==0)
	{
		if(strcmpi(st.retadmno(),n)==0)
		{
			st.show_student();
			cout<<"\nEnter The New Details of student"<<endl;
			st.modify_student();
			int pos=-1*sizeof(st);
			fp.seekp(pos,ios::cur);
			fp.write((char*)&st,sizeof(student));
			cout<<"\n\n\t Record Updated";
			found=1;
		}
	}

	fp.close();
	if(found==0)
	cout<<"\n\n Record Not Found ";
	getch();
}


//    	function to delete record of file


void delete_admin()
{
	char n[6];
	int flag=0;
	clrscr();
	textbackground(BLUE);
	textcolor(CYAN);
	cout<<"\n\n\n\tDELETE ADMIN...";
	cout<<"\n\nEnter The admin name. of the admin You Want To Delete : ";
	cin>>n;
	fp.open("admin.dat",ios::in|ios::out);
	fstream fp2;
	fp2.open("Temp.dat",ios::out);
	fp.seekg(0,ios::beg);
	while(fp.read((char*)&ad,sizeof(admin)))
	{
		if(strcmpi(ad.retadname(),n)!=0)
			fp2.write((char*)&ad,sizeof(admin));
		else
			flag=1;
	}

	fp2.close();
	fp.close();
	remove("admin.dat");
	rename("Temp.dat","admin.dat");
	if(flag==1)
		cout<<"\n\n\tRecord Deleted ..";
	else
		cout<<"\n\nRecord not found";
	getch();
}


void delete_student()
{
	char n[6];
	int flag=0;
	clrscr();
	textbackground(BLUE);
    textcolor(CYAN);
	cout<<"\n\n\n\tDELETE STUDENT...";
	cout<<"\n\nEnter The admission no. of the Student You Want To Delete : ";
	cin>>n;
	fp.open("student.dat",ios::in|ios::out);
	fstream fp2;
	fp2.open("Temp.dat",ios::out);
	fp.seekg(0,ios::beg);
	while(fp.read((char*)&st,sizeof(student)))
	{
		if(strcmpi(st.retadmno(),n)!=0)
			fp2.write((char*)&st,sizeof(student));
		else
			flag=1;
	}
	fp2.close();
	fp.close();
	remove("student.dat");
	rename("Temp.dat","student.dat");
	if(flag==1)
		cout<<"\n\n\tRecord Deleted ..";
	else
		cout<<"\n\nRecord not found";
	getch();
}

void delete_book()
{
	char n[6];
	clrscr();
	textbackground(BLUE);
    textcolor(CYAN);
	int flag=0;
	cout<<"\n\n\n\tDELETE BOOK ...";
	cout<<"\n\nEnter The Book no. of the Book You Want To Delete : ";
	cin>>n;
	fp.open("book.dat",ios::in|ios::out);
	fstream fp2;
	fp2.open("Temp.dat",ios::out);
	fp.seekg(0,ios::beg);
	while(fp.read((char*)&bk,sizeof(book)))
	{
		if(strcmpi(bk.retbno(),n)!=0)
		{
			fp2.write((char*)&bk,sizeof(book));
		}
		else
		{
			flag=1;
		}
	}

	fp2.close();
	fp.close();
	remove("book.dat");
	rename("Temp.dat","book.dat");
	if(flag==1)
		cout<<"\n\n\tRecord Deleted ..";
	else
		cout<<"\n\nRecord not found";
	getch();
}

//function to display all students list

void display_allad()
{       char ch;
	clrscr();
	textbackground(BLUE);
    textcolor(CYAN);
	fp.open("admin.dat",ios::in);
	if(!fp)
	{
		cout<<"ERROR!!! FILE COULD NOT BE OPEN ";
		getch();
		return;
	}

	cout<<"\n\n\t\tADMIN LIST\n\n";
	cout<<"============================================================================\n";
	cout<<"\tAdmin Name."<<setw(20)<<"Admin ID"<<setw(25)<<"adpassword\n";
	cout<<"============================================================================\n";

	while(fp.read((char*)&ad,sizeof(admin)))
	{
		ad.report();
	}
	getch();
	fp.close();
}


void display_alls()
{       char ch;
	clrscr();
	textbackground(BLUE);
    textcolor(CYAN);
	fp.open("student.dat",ios::in);
	if(!fp)
	{
		cout<<"ERROR!!! FILE COULD NOT BE OPEN ";
		getch();
		return;
	}

	cout<<"\n\n\t\tSTUDENT LIST\n\n";
	cout<<"============================================================================\n";
	cout<<"\tAdmission No."<<setw(20)<<"Name"<<setw(25)<<"Book Issued\n";
	cout<<"============================================================================\n";

	while(fp.read((char*)&st,sizeof(student)))
	{
		st.report();
	}
	fp.close();
	cout<<"\n\tDo you want to enter more stuent entries press '1' \n";
	cout<<"\n\tOR if you want  to modify some students entries press '2' \n ";
	cout<<"\n\tOR if you want to delete some entries press '3'\n";
	cout<<"\n\tPress any key  for administration menu\n";
	cin>>ch;
	if(ch=='1')
	{
		clrscr();
		write_student();
	}
	else if(ch=='2')
	{
		clrscr();

		modify_student();
	}
	else if(ch=='3')
	{
		clrscr();
		delete_student();
	}
}



//    	function to display Books list


void display_allb()
{       char ch;
	clrscr();
	textbackground(BLUE);
	textcolor(CYAN);
	fp.open("book.dat",ios::in);
	if(!fp)
	{
		cout<<"ERROR!!! FILE COULD NOT BE OPEN ";
		getch();
		return;
	}

	cout<<"\n\n\t\tBook LIST\n\n";
	cout<<"==============================================================================\n";
	cout<<"Book Number"<<setw(25)<<"Book Name"<<setw(25)<<"Author\n";
	cout<<"===============================================================================\n";

	while(fp.read((char*)&bk,sizeof(book)))
	{
		bk.report();
	}
	fp.close();
	cout<<"\nDo you want to enter more book entries press '1' \n";
	cout<<"\nOR if you want  to modify some books entries press '2' \n ";
	cout<<"\nOR if you want to delete some entries press '3'\n";
	cout<<"\nPress 'any key ' for administration menu\n";
	cin>>ch;
	if(ch=='1')
	{
		clrscr();
		write_book();
	}
	else if(ch=='2')
	{
		clrscr();

		modify_book();
	}
	else if(ch=='3')
	{
		clrscr();
		delete_book();
	}

}


//    	function to issue book


void book_issue()
{
	struct date d;
 getdate(&d);
	textbackground(BLUE);
	textcolor(CYAN);
	char sn[6],bn[6];
	int found=0,flag=0;
	clrscr();
	cout<<"\n\nBOOK ISSUE ...";
	cout<<"\n\n\tEnter The student's admission no.";
	cin>>sn;

	fp.open("student.dat",ios::in|ios::out);
	fp1.open("book.dat",ios::in|ios::out);

	while(fp.read((char*)&st,sizeof(student)) && found==0)
	{
		if(strcmpi(st.retadmno(),sn)==0)
		{
			found=1;
			if(st.rettoken()<=2)
			{
				cout<<"\n\n\tEnter the book no. ";
				cin>>bn;
				while(fp1.read((char*)&bk,sizeof(book))&& flag==0)
				{
					if(strcmpi(bk.retbno(),bn)==0)
					{
						bk.show_book();
						flag=1;
						st.addtoken();
						st.getstbno(bk.retbno());
						int pos=-1*sizeof(st);
						fp.seekp(pos,ios::cur);
						fp.write((char*)&st,sizeof(student));
						cout<<"\n\n\t Book issued successfully\n\nPlease Note: Write the current date 						in backside of your book and submit within 15 days fine Rs. 1 for each day 							after 15 days period\n";
						printf("Current date is:-> %d/%d/%d",d.da_day,d.da_mon,d.da_year);
					}
				}
				if(flag==0)
					{
					cout<<"Book no does not exist \n        OR\n";
					cout<<"\nCheck in Administration menu\n";

					}

			}
			else
			cout<<"\nYou have not returned the last three book ";
		}
	}
	if(found==0)
		{cout<<"Student record not exist...\n";
		 cout<<"Check in Administration menu\n";
		}
	getch();
	fp.close();
	fp1.close();
	mainmenu();

}


//    	function to deposit book


void book_deposit()
{   textbackground(BLUE);
    textcolor(CYAN);
    char sn[6],bn[6];
    int found=0,flag=0,day,fine;
    clrscr();
    cout<<"\n\nBOOK DEPOSIT ...";
    cout<<"\n\n\tEnter The students admission no.";
    cin>>sn;
    fp.open("student.dat",ios::in|ios::out);
    fp1.open("book.dat",ios::in|ios::out);
    while(fp.read((char*)&st,sizeof(student)) && found==0)
       {
	    if(strcmpi(st.retadmno(),sn)==0)
	    {
		    found=1;
		    if(st.rettoken()<=3)
		    {
		    cout<<"give book no to be deposited" ;
			   gets(bn);
			   if(strcmpi(bk.retbno(),bn)==0)
			   {
			while(fp1.read((char*)&bk,sizeof(book))&& flag==0)
			{

			   if(strcmpi(bk.retbno(),st.retstbno())==0)
			{
				bk.show_book();
				flag=1;
				cout<<"\n\nBook deposited in no. of days";
				cin>>day;
				if(day>15)
				{
				   fine=(day-15)*1;
				   cout<<"\n\nFine has to deposited Rs. "<<fine;
				}
					st.resettoken();
					int pos=-1*sizeof(st);
					fp.seekp(pos,ios::cur);
					fp.write((char*)&st,sizeof(student));
					cout<<"\n\n\t Book deposited successfully";
			}

		    }
		    }else cout<<"\n This book is not issued \n or\n";

		  if(flag==0)
		    {
		    cout<<"Book no does not exist\n";
		    cout<<"\nCheck all books option in administration" ; }
		    }
		 else
		    cout<<"\nNo book is issued..please check!!";
		}
	   }
      if(found==0)
	{cout<<"Student record not exist...\n";
	cout<<"Check in administration";}
	getch();
  fp.close();
  fp1.close();
  mainmenu();
  }


//    	INTRODUCTION FUNCTION


void intro()
{
	clrscr();
	textcolor(CYAN);
	textbackground(BLUE);
	struct date d;
	design();
	gotoxy(4,3);
	cout<<"\n  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	getdate(&d);
	gotoxy(29,8);
	printf("date:-> %d / %d / %d",d.da_day,d.da_mon,d.da_year);
	gotoxy(35,11);
	cout<<"LIBRARY";
	gotoxy(35,12);
	cout<<"~~~~~~~";
	gotoxy(34,13);
	cout<<"MANAGEMENT";
	gotoxy(34,14);
	cout<<"~~~~~~~~~~";
	gotoxy(36,15);
	cout<<"SYSTEM";
	gotoxy(36,16);
	cout<<"~~~~~~";
	gotoxy(3,18);
	cout<<"\n\n     MADE BY :   TAHA BASRAWALA" ;
	gotoxy(3,19);
	cout<<"\n\n\t  COLLEGE : Medi-caps universityInore";
	gotoxy(2,22);
	cout<<"\n  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	getch();
	mainmenu();
}


//   		FUNCTION FOR LOGIN

void login2()
{       textcolor(CYAN);
	textbackground(BLUE);
	char x[19],y[19];
	char id[19],pass[25];
	int found=0;
	struct date d;
	getdate(&d);


	strcpy(id,"medicaps");

	strcpy(pass,"99999");
	for(int i=5;i>-2;i--)
	{
	if(i>-1){
	clrscr();
	design();
	gotoxy(29,8);
	printf("date:-> %d / %d / %d",d.da_day,d.da_mon,d.da_year);
	gotoxy(35,10);
	cout<<"ADMIN LOGIN\n";
	gotoxy(28,12);
	cout<<"Admin ID:->";
	gets(x);
	gotoxy(28,14);
	cout<<"PASSWORD:->";
	gets(y);
	fp.open("admin.dat",ios::in);
	while(fp.read((char*)&ad,sizeof(admin))&&(id!=NULL)&&(pass!=NULL))
	{
		if((strcmpi(ad.retadid(),x)==0 && strcmpi(ad.retadpass(),y)==0)||(strcmp(x,id)==0 && strcmp(y,pass)==0 ) )
		{

			found=1;
			break;
		}

	}
	fp.close();

		if(found==1)
		{cout<<"  login succesfull";
		getch();
		intro();
		 break;
		}
		else
		{
		cout<<"wrong id or password\n"<<"you have "<<i<<" chances left";
		getch();
		}
	      }
	      else
	      {
			 getch();
			 exit(0);
	      }
	}

}
void Help(void)
{

	clrscr();
	textbackground(BLUE);
	k=9;
	cprintf("         %s\n",Array[k]);
	textcolor(WHITE);
	gotoxy(25,3);
	cprintf("Use up & down keyz to move");
	gotoxy(25,4);
	cprintf("Or press Home to go to the first item");
	gotoxy(25,5);
	cprintf("& End to go to the last item");
	gotoxy(25,6);
	cprintf("Use spacebar to activate the selected item");
	gotoxy(25,8);
	cprintf("Enter any keyz to go back to za menuz...\n");
	getch();
	mainmenu();
}







//  	THE MAIN FUNCTION OF PROGRAM

void main()
{

       char ch;
       clrscr();
       textcolor(CYAN);
       login2();
       intro();
}


//    	ADMINISTRATOR MENU FUNCTION

void admin_menu()
{
	clrscr();
		NavMenu3();
		char Tav;
		Line=10;
	Tav=getch();
	textcolor(2);

	while( Tav!=27)
	{
		textcolor(26);
		switch(Tav)
		{
			case 80:
				gotoxy( 26, Line );
				textbackground(BLUE);
				cprintf("%s", Array3[Line-8] );
				Line++;
				if(Line>20)
					Line=10;
				gotoxy(26 ,Line );
				textbackground(2);
				cprintf( "%s" ,Array3[Line-8] );
				break;

			case 72:
				gotoxy( 26, Line );
				textbackground(BLUE);
				cprintf("%s", Array3[Line-8] );
				Line--;
				if(Line<10)
					Line=20;
				gotoxy(26 ,Line );
				textbackground(2);
				cprintf( "%s" ,Array3[Line-8] );
				break;

			case 79:
				gotoxy( 26, Line );
				textbackground(BLUE);
				cprintf("%s", Array3[Line-8] );
				Line=20;
				gotoxy(26 ,Line );
				textbackground(2);
				cprintf( "%s" ,Array3[Line-8] );
				break;
			case 71:
				gotoxy( 26, Line );
				textbackground(BLUE);
				cprintf("%s", Array3[Line-8] );
				Line=10;
				gotoxy(26 ,Line );
				textbackground(2);
				cprintf( "%s" ,Array3[Line-8] );
				break;
				case 13:
				switch(Line)
				{
			case 10:
				clrscr();
			write_student();
			break;


			case 11:
			display_alls();
			break;


			case 12:

			char num[6];
			clrscr();
			cout<<"\n\n\tPlease Enter The Admission No. ";
			cin>>num;
			display_sps(num);
			break;
			case 13:
			       modify_student();
			break;

			case 14:
				delete_student();
			break;

			case 15:
				clrscr();
			write_book();
			break;

			case 16:
			display_allb();
			break;
			case 17:
			{
			char num[6];
			clrscr();
			cout<<"\n\n\tPlease Enter The book No. ";
			cin>>num;
			display_spb(num);
			break;
			}
			case 18:
			modify_book();
			break;
			case 19:
			delete_book();
			break;
			case 20: mainmenu();
			break;
			 default:cout<<"\a";
				}
				admin_menu();
			   }
		Tav=getch();
	}

}


//AdminData Menu

void admindatabase()
{
	clrscr();


		NavMenu2();
		char Tav;
	Tav=getch();
	textcolor(2);
	Line=10;
	while( Tav!=27)
	{
		textcolor(26);
		switch(Tav)
		{
			case 80:
				gotoxy( 26, Line );
				textbackground(BLUE);
				cprintf("%s", Array2[Line-8] );
				Line++;
				if(Line>15)
					Line=10;
				gotoxy(26 ,Line );
				textbackground(2);
				cprintf( "%s" ,Array2[Line-8] );
				break;

			case 72:
				gotoxy( 26, Line );
				textbackground(BLUE);
				cprintf("%s", Array2[Line-8] );
				Line--;
				if(Line<10)
					Line=15;
				gotoxy(26 ,Line );
				textbackground(2);
				cprintf( "%s" ,Array2[Line-8] );
				break;

			case 79:
				gotoxy( 26, Line );
				textbackground(BLUE);
				cprintf("%s", Array2[Line-8] );
				Line=16;
				gotoxy(26 ,Line );
				textbackground(2);
				cprintf( "%s" ,Array2[Line-8] );
				break;
			case 71:
				gotoxy( 26, Line );
				textbackground(BLUE);
				cprintf("%s", Array2[Line-8] );
				Line=10;
				gotoxy(26 ,Line );
				textbackground(2);
				cprintf( "%s" ,Array2[Line-8] );
				break;
				case 13:
				switch(Line)
				{
			case 10:

				 clrscr();
				write_admin();
				break;
			case 11:
				display_allad();
				break;

			case 12:
				char num[30];
			clrscr();
			cout<<"\n\n\tPlease ENTER The ADNMIN Name. ";
			cin>>num;
			display_spa(num);
			break;
			case 13:
				modify_admin();
			break;

			case 14:
			delete_admin();
			break;

			case 15:mainmenu();
			break;


			 default:cout<<"\a";
				}
				admindatabase();
			   }
		Tav=getch();
	}

}



void mainmenu()
{
		NavMenu();
		char Tav;
	Tav=getch();
	textcolor(2);
	Line=10;
	while( Tav!=27)
	{
		textcolor(26);
		switch(Tav)
		{
			case 80:
				gotoxy( 30, Line );
				textbackground(BLUE);
				cprintf("%s", Array[Line-8] );
				Line++;
				if(Line>16)
					Line=10;
				gotoxy(30 ,Line );
				textbackground(2);
				cprintf( "%s" ,Array[Line-8] );
				break;

			case 72:
				gotoxy( 30, Line );
				textbackground(BLUE);
				cprintf("%s", Array[Line-8] );
				Line--;
				if(Line<10)
					Line=16;
				gotoxy(30 ,Line );
				textbackground(2);
				cprintf( "%s" ,Array[Line-8] );
				break;

			case 79:
				gotoxy( 30, Line );
				textbackground(BLUE);
				cprintf("%s", Array[Line-8] );
				Line=16;
				gotoxy(30 ,Line );
				textbackground(2);
				cprintf( "%s" ,Array[Line-8] );
				break;
			case 71:
				gotoxy( 30, Line );
				textbackground(BLUE);
				cprintf("%s", Array[Line-8] );
				Line=10;
				gotoxy(30 ,Line );
				textbackground(2);
				cprintf( "%s" ,Array[Line-8] );
				break;
				case 13:
				switch(Line)
				{
			case 10:

				 book_issue();
				 break;
			case 11:

				book_deposit();
				 break;
			case 12:
				 admin_menu();
				 break;
			case 13:
				admindatabase();
				break;
			case 14:login2();
				break;
			case 15:exit(0);
			case 16:
				Help();
				break;
			 default:cout<<"\a";
				}
			   }
		Tav=getch();
	}

}


//    			END OF PROJECT
