#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
struct course
{
	string name;
	course *next;
};
struct book
{
	string title,author;
	int copies;
	book *next;
};
struct student
{
	string name,cms,pass,marks;
	int mob;
	student *next;
	course *c_head;
	book *b_head;
	course *srch;
	void insertCourse()
	{
		int co_opt;
		course *c_cur=c_head;
		int count=0;
		//system("cls");
		while(count<5)
		{
		cout<<"Select course"<<endl;
		cout<<"1. Data Structures\n2. Object Oriented Analysis and Design\n3. Digital Logic Design\n4. Technical Writing\n5. Multivariate Calculus"<<endl;
		cin>>co_opt; 
			switch (co_opt)
			{
				bool check;
			char copt;
			case 1:
				check= searchCourse("Data Structures");
				if(check==false) break;
				cout<<"Have You Passed Programming Fundamentals?? Press Y/y or N/n"<<endl;
				cin>>copt;
				if(copt=='Y' || copt=='y')
				{
				course *co=new course;
				co->name="Data Structures";
				co->next=NULL;
				if(c_head==NULL)
					{
						c_head=co;
						co->next=NULL;
						c_cur=c_head;
						cout<<"Enroll Successful"<<endl;
						count++;
						showCources();
					}
				else
					{
						c_cur->next=co;
						c_cur=co;
						c_cur->next=NULL;
						cout<<"Enroll Successful"<<endl;
						count++;
						showCources();
					}
				}
				else if(copt=='N' || copt=='n')
					cout<<"Cannot be Enrolled.. You should pass Programming Fundamentals First"<<endl;
				break;
			case 2:
				check= searchCourse("Object Oriented Analysis and Design");
				if(check==false) break;
				cout<<"Have You Passed Object Oriented Programming?? Press Y/y or N/n";
				cin>>copt;
				if(copt=='Y' || copt=='y')
				{
				course *co=new course;
				co->name="Object Oriented Analysis and Design";
				co->next=NULL;
				if(c_head==NULL)
					{
						c_head=co;
						c_head->next=NULL;
						c_cur=c_head;
						cout<<"Enroll Successful"<<endl;
						count++;
						showCources();
					}
				else
					{
					c_cur->next=co;
					c_cur=co;
					c_cur->next=NULL;
					cout<<"Enroll Successful"<<endl;
					count++;
					showCources();
					}
				}
				else if(copt=='N' || copt=='n')
					cout<<"Cannot be Enrolled.. You should pass Object Oriented Programming First"<<endl;
				break;
			case 3:
				check= searchCourse("Digital Logic Design");
				if(check==false) break;
					cout<<"Have You Passed Applied Physics?? Press Y/y or N/n";
				cin>>copt;
				if(copt=='Y' || copt=='y')
				{
				course *co=new course;
				co->name="Digital Logic Design";
				co->next=NULL;
				if(c_head==NULL)
					{
						c_head=co;
						c_head->next=NULL;
						c_cur=c_head;
						cout<<"Enroll Successful";
						count++;
						showCources();
					}
				else
					{
					c_cur->next=co;
					c_cur=co;
					c_cur->next=NULL;
					cout<<"Enroll Successful"<<endl;
					count++;
					showCources();
					}
				}
				else if(copt=='N' || copt=='n')
					cout<<"Cannot be Enrolled.. You should pass Applied Physics First"<<endl;
				break;
			case 4:
				check= searchCourse("Technical Writing");
				if(check==false) break;
				cout<<"Have You Passed Functional English?? Press Y/y or N/n";
				cin>>copt;
				if(copt=='Y' || copt=='y')
				{
				course *co=new course;
				co->name="Technical Writing";
				co->next=NULL;
				if(c_head==NULL)
					{
						c_head=co;
						c_head->next=NULL;
						c_cur=c_head;
						cout<<"Enroll Successful"<<endl;
						count++;
						showCources();
					}
				else
					{
					c_cur->next=co;
					c_cur=co;
					c_cur->next=NULL;
					cout<<"Enroll Successful"<<endl;
					count++;
					showCources();
					}
				}
				else if(copt=='N' || copt=='n')
					cout<<"Cannot be Enrolled.. You should pass Functional English First"<<endl;
				break;
			case 5:
				check= searchCourse("Multivariate Calculus");
				if(check==false) break;
				cout<<"Have You Passed Calculus and Analytical Geometry?? Press Y/y or N/n";
				cin>>copt;
				if(copt=='Y' || copt=='y')
				{
				course *co=new course;
				co->name="Multivariate Calculus";
				co->next=NULL;
				if(c_head==NULL)
					{
						c_head=co;
						c_head->next=NULL;
						c_cur=c_head;
						cout<<"Enroll Successful"<<endl;
						count++;
						showCources();
					}
				else
					{
					c_cur->next=co;
					c_cur=co;
					c_cur->next=NULL;
					cout<<"Enroll Successful"<<endl;
					count++;
					showCources();
					}
				}
				else if(copt=='N' || copt=='n')
					cout<<"Cannot be Enrolled.. You should pass Calculus and Analytical Geometry First"<<endl;
				break;
			default:
				cout<<"Invalid Input";
				break;
				}
			}
	}
	bool searchCourse(string name)
	{
		srch=c_head;
		while(srch)
		{
			if(name==srch->name)
			{
			cout<<"Already Enrolled"<<endl;	
			return false;
			}
			srch=srch->next;
		}
		return true;
	}
	void checkAttendance()
	{
		string ID,Pass;
		cout<<"Enter CMS ID:"<<endl;
		cin.ignore();
		getline(cin,ID);
		cout<<"Enter Password:"<<endl;
		cin.ignore();
		getline(cin,Pass);
		cout<<"Attendance Shown"<<endl;
	}
	void checkGrades()
	{
		string ID,Pass;
		cout<<"Enter CMS ID:"<<endl;
		cin.ignore();
		getline(cin,ID);
		cout<<"Enter Password:"<<endl;
		cin.ignore();
		getline(cin,Pass);
		cout<<"Grades Shown"<<endl;
	}
	void applyWithdraw()
	{
		string ID,Pass; int opt;
		cout<<"Enter CMS ID:"<<endl;
		cin.ignore();
		getline(cin,ID);
		cout<<"Enter Password:"<<endl;
		cin.ignore();
		getline(cin,Pass);
		cout<<"Select a Subject"<<endl;
		cout<<"1. Data Structures\n2.Object Oriented Analysis and Design\n3. Digital Logic Design\n4.Technical Writing\n5.Multivariate Calculus"<<endl;
		cin>>opt;
		
		//cout<<"Outside Switch"<<endl;
		switch (opt)
		{ 
			int mid1,mid2;
			case 1:
				{
				cout<<"Enter Mid-I Marks"<<endl;
				cin>>mid1;
				cout<<"Enter Mid-II Marks"<<endl;
				cin>>mid2;
				if((mid1+mid2)>30)
				{
				cout<<"Application Rejected..!!!";
				showCources();
				}
				else 
					{
						course *c_tc=c_head, *temp;
						course *c_cur=c_head;
						cout<<"Application Accepted..!!!"<<endl;
						while(c_cur && c_cur->name!="Data Structures")
						{
							c_cur=c_cur->next;
							c_tc=c_cur;
						}
						if (c_cur) 
						{
							if (c_tc) 
							{
								c_tc->next	=	c_cur->next;
								delete c_cur;
							}
							else 
							{
								c_head		=	c_cur->next;
								delete c_cur;
							}
						}
						showCources();
					}
				}
				break;
			case 2:
				{
				cout<<"Enter Mid-I Marks"<<endl;
				cin>>mid1;
				cout<<"Enter Mid-II Marks"<<endl;
				cin>>mid2;
				if((mid1+mid2)>30)
				{
				cout<<"Application Rejected..!!!";
				showCources();
				}
				else 
					{
						course *c_tc=c_head, *temp;
						course *c_cur=c_head;
						cout<<"Application Accepted..!!!"<<endl;
						while(c_cur && c_cur->name!="Object Oriented Analysis and Design")
						{
							c_cur=c_cur->next;
							c_tc=c_cur;
						}
						if (c_cur) 
						{
							if (c_tc) 
							{
								c_tc->next	=	c_cur->next;
								delete c_cur;
							}
							else 
							{
								c_head		=	c_cur->next;
								delete c_cur;
							}
						}
						showCources();
					}
				}
				break;
			case 3:
				{	
				cout<<"Enter Mid-I Marks"<<endl;
				cin>>mid1;
				cout<<"Enter Mid-II Marks"<<endl;
				cin>>mid2;
				if((mid1+mid2)>30)
				{
				cout<<"Application Rejected..!!!";
				showCources();
				}
				else 
					{
						course *c_tc=c_head, *temp;
						course *c_cur=c_head;
						cout<<"Application Accepted..!!!"<<endl;
						while(c_cur && c_cur->name!="Digital Logic Design")
						{
							c_cur=c_cur->next;
							c_tc=c_cur;
						}
						if (c_cur) 
						{
							if (c_tc) 
							{
								c_tc->next	=	c_cur->next;
								delete c_cur;
							}
							else 
							{
								c_head		=	c_cur->next;
								delete c_cur;
							}
						}
						showCources();
					}
				}
				break;
			case 4:
				{
				cout<<"Enter Mid-I Marks"<<endl;
				cin>>mid1;
				cout<<"Enter Mid-II Marks"<<endl;
				cin>>mid2;
				if((mid1+mid2)>30)
				{
				cout<<"Application Rejected..!!!";
				showCources();
				}
				else 
					{
						course *c_tc=c_head, *temp;
						course *c_cur=c_head;
						cout<<"Application Accepted..!!!"<<endl;
						while(c_cur && c_cur->name!="Technical Writing")
						{
							c_cur=c_cur->next;
							c_tc=c_cur;
						}
						if (c_cur) 
						{
							if (c_tc) 
							{
								c_tc->next	=	c_cur->next;
								delete c_cur;
							}
							else 
							{
								c_head		=	c_cur->next;
								delete c_cur;
							}
						}
						showCources();
					}
				}
				break;
				case 5:
				{
				cout<<"Enter Mid-I Marks"<<endl;
				cin>>mid1;
				cout<<"Enter Mid-II Marks"<<endl;
				cin>>mid2;
				if((mid1+mid2)>30)
				{
				cout<<"Application Rejected..!!!";
				showCources();
				}
				else 
					{
						course *c_tc=NULL, *temp;
						course *c_cur=c_head;
						cout<<"Application Accepted..!!!"<<endl;
						while(c_cur && c_cur->name!="Multivariate Calculus")
						{
							c_cur=c_cur->next;
							c_tc=c_cur;
						}
						if (c_cur) 
						{
							if (c_tc) 
							{
								c_tc->next	=	c_cur->next;
								delete c_cur;
							}
							else 
							{
								c_head		=	c_cur->next;
								delete c_cur;
							}
						}
						showCources();

					}
				}
				break;
			default:
				{cout<<"Invalid Input";}
				break;
			}
	}
	void showCources()
	{
		course *c_cur=c_head;
		int i=1;
		cout<<"You are now enrolled in Following Subjects:"<<endl;
		while(c_cur)
		{
			cout<<i<<". "<<c_cur->name<<endl;
			++i;
			c_cur=c_cur->next;
		}
	
	}
	void issueBook()
	{
		book *b_cur;
	book *bo=new book();
	cout<<"Enter Book Name"<<endl;
	cin>>bo->title;
	cout<<"Enter Book Author"<<endl;
	cin>>bo->author;
	if(b_head==NULL)
		{
			b_head=bo;
			bo->next=NULL;
			b_cur=b_head;
			cout<<"Book Issued Successfully"<<endl;
		}
		else
		{
			b_cur->next=bo;
			b_cur=bo;
			b_cur->next=NULL;
			cout<<"Book Issued Successfully"<<endl;
		}
	}
	student()
	{
	c_head=NULL;
	b_head=NULL;
	}
};
struct faculty
{
	string name,cms;
	faculty *next;
	void markAttendance()
	{
	cout<<"Marking Attendance";
	}
	void markGrades()
	{
	cout<<"Marking Grades";
	}
};
struct admin
{
	string name,cms;
	admin *next;
	student *s_head;
	void manageCMS()
	{
	cout<<"Managing CMS"<<endl;
	}
	void addStudent()
	{
		student *s_cur;
		student *st=new student();
	cout<<"Enter Student Name\n";
	cin.ignore();
	getline(cin,st->name);
	cout<<"Enter Student Mobile no\n";
	cin>>st->mob;
	cout<<"Enter Student New CMS ID no\n";
	cin.ignore();
	getline(cin,st->cms);
	cout<<"Enter Student New CMS Password\n";
	cin.ignore();
	getline(cin,st->pass);
		if(s_head==NULL)
		{
			s_head=st;
			st->next=NULL;
			s_cur=s_head;
			cout<<"Student Added Successfully"<<endl;
		}
		else
		{
			s_cur->next=st;
			s_cur=st;
			s_cur->next=NULL;
			cout<<"Student Added Successfully"<<endl;
		}

	}
	admin()
	{
	s_head=NULL;
	}
};

struct list
{
	student *s_head;
	faculty *f_head;
	admin *a_head;
	list()
	{
	 s_head=NULL;
	 f_head=NULL;
	 a_head=NULL;
	}
};
void main()
{
	int option, select;
	bool check=true;
	char che;
	bool repeat=true;
	cout<<"   Peoplesoft CMS"<<endl;
	cout<<"*********************"<<endl;
	while(check==true)
	{
	cout<<"Your Identity Please??"<<endl;
	cout<<"1.Student\n2.Faculty\n3.Admin"<<endl;
	cin>>option;

	switch (option)
	{
	case 1:
		{
		student *st=new student();
		char rep;
		while(repeat==true)
		{
			//system("cls");
		cout<<"  1.Enroll\n  2.Check Attendance\n  3.Check Grades\n  4.Apply for Withdraw\n  5. Issue Book"<<endl;
		cin>>select;
			switch (select)
			{
			case 1:
				st->insertCourse();
				break;
			case 2:
				st->checkAttendance();
				break;
			case 3:
				st->checkGrades();
				break;
			case 4:
				st->applyWithdraw();
				break;
			case 5:
				st->issueBook();
				break;
			default:
				cout<<"Invalid Input"<<endl;
				break;
			}
			//system("cls");
			cout<<"Press Y/y for Student Menu and any other key For main menu"<<endl;
			cin>>rep;
			if(rep=='Y' || rep=='y') repeat=true;
			else repeat=false;
		}

		}
		break;
	case 2:
		{
		faculty *fa=new faculty();
		cout<<"  1.Mark Attendance\n  2.Mark Grades\n"<<endl;
		cin>>select;
			switch (select)
			{
			case 1:
				fa->markAttendance();
				break;
			case 2:
				fa->markGrades();
				break;
			default:
				cout<<"Invalid Input"<<endl;
				break;
			}
		}
		break;
	case 3:
		{
			admin *ad=new admin();
		cout<<"  1.Manage CMS\n2.Add new Students"<<endl;
		cin>>select;
			switch (select)
			{
			case 1:
				ad->manageCMS();
				break;
			case 2:
				ad->addStudent();
				break;
			default:
				cout<<"Invalid Input"<<endl;
				break;
			}
		}
		break;
	default:
		{
		cout<<"Invalid Input"<<endl;
		break;
		}
	}
	cout<<"Press Y/y for Main Menu and any other key to Close"<<endl;
	cin>>che;
	if(che=='Y' || che=='y') check=true;
			else check=false;
	}
	getch();
}