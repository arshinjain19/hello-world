//           %temp%


#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;
class personaldeatils
{
    char name[50];
    char sex[10];
    char address[80];
    char phone[15];
    int age;
    int numpeople; //number of people traveling
public:
    person()
    {
        strcpy(name,"Null");
        strcpy(sex,"Null");
        strcpy(address,"Null");
        strcpy(phone,"Null");
        age= 0;
        numpeople=0;

    }
    person( char nm[], char sx[], char add[], int ph[], int ag, int numppl)
    {
        strcpy(name,"nm");
        strcpy(sex,"sx");
        strcpy(address,"sx");
        strcpy(phone,"ph");
        age=ag;
        numpeople=numppl;

    }
    void enter()
    {
    cout<<"\nENTER NUMBER OF PEOPLE";
    cin>>numpeople;
    if(numpeople>0)
    {
        cout<<"\n ENTER DETAILS OF EACH MEMBER";
        for(int i=1; i<=numpeople; i++)
        {
            cout<<" \n enter the detail of person:-"<<i;
            cout<<"\n ENTER  NAME:";
            cin.getline(name,50);
            cout<<"\n ENTER SEX:";
            cin.getline(sex,10);
            cout<<"\n ENTER ADDRESS:";
            cin.getline(address,80);
            cout<<"\n ENTER PHONE NUMBER:";
            cin.getline(phone,15);
            cout<<"\n ENTER AGE:";
            cin>>age;


        }
    }
}
 void show()
   {
     for(int i=1;i<=numpeople;i++)
     {
     cout<<"\n DETAILS";
     cout<<" \n name:-"<<name;
     cout<<" \n sex:-"<<sex;
     cout<<" \n age:-"<<age;
     cout<<" \n address is:="<<address;
     cout<<" \n phone number"<<phone;
     }
   }

};
class journey

{
    char pickup[50];
    char destination[50];
    char date[20];
    int duration;
public:
    journey()
    {
        strcpy(pickup,"Null");
        strcpy(destination,"Null");
        strcpy(date,"Null");
        duration=0;
    }

    journey(char pick[],char dest[],char dt[],int dur)
    {
        strcpy(pickup,pick);
        strcpy(destination,dest);
        strcpy(date,dt);
        duration=dur;

    }
    void enter()
    {
    cout<<"\n ENTER PICKUP:";
    cin.getline(pickup,50);
    cout<<"\n ENTER DESTINATION:";
    cin.getline(destination,50);
    cout<<"\n ENTER START DATE:";
    cin.getline(date,20);
    cout<<"\n ENTER DURATION (in days)"
    cin>>duration;
    }
 void show()
 {
     cout<<"\n pickup"<<pickup;
     cout<<"\n destination:-"<<destination;
     cout<<"\n starting date:-"<<date;
     cout<<"\n duration:-"<<duration;
 }


};
class food
{

    int chinese;
    int indian;
    int mexican;
    int continental;
    char extra[50];
public:
    food ()
    {
        chinese=0;
        indian=0;
        mexican=0;
        continental=0;
        strcpy(extra,"Null");

    }
    food(int chi,int ind,int,mex,int con,char ext[])
    {
        chinese=chi;
        indian=ind;
        mexican=mex;
        continental=con;
        strcpy(extra,"Null");
    }
    void enter()
{
    cout<<"\n ENTER FOOD CHOICE:";
    cout<<"\n -CHINESE";
    cin>>chinese;
    cout<<"\n -INDIAN";
    cin>>indian;
    cout<<"\n -MEXICAN";
    cin>>mexican;
    cout<<"\n -CONTINENTAL";
    cin>>continental;
    cout<<"\n extra food preferences";
    cin.getline(extra,50);
}
  void show()
  {
      cout<<"\n food choices selected"<<endl;
      cout<<"\n chinese:-"<<chinese<<endl;
      cout<<" \n india:-"<<indian<<endl;
      cout<<"\n mexican:-"<<mexican;
      cout<<"\n continental:-"<<continental;
      cout<<"\n other option:-"<<extra;
  }
  int calcFood()
{
	int sum=0;
	if(chinese==1)
	{
		sum=sum+1250;
	}
	if(indian==1)
	{
		sum=sum+2300;
	}
	if(mexican==1)
	{
		sum=sum+2000;
	}
	if(continental==1)
	{
		sum=sum+2500;
	}
	if(strcmp(extra,"None")!=0)
	{
		sum=sum+5000;
	}
	return sum;
}
};
class activities
{
    int sightseeing;
    int citytour;
public:
    activities()
    {
        int sightseeing=0;
        int citytour=0;

    }
    activities(int sight,int city)
    {
        sightseeing=sight;
        citytour=city;
    }
    void enter();
{
    cout<<"\n ENTER ACTIVITIES";
    cout<<"\n -SIGHTSEEING";
    cin>> sightseeing;
    cout<<"\n -CITYTOUR";
    cin>> citytour;

}
void show()
{
    cout<<"\n YOUR ACTIVITIES"<<endl;
    cout<<" \nsightseeing:-"<<sightseeing<<endl;
    cout<<" \n citytour:-"<<citytour<<endl;
}
int calcAct()
{
	int sum=0;
	if(sightseeing==1)
	{
		sum=sum+5000;
	}
	if(citytour==1)
	{
		sum=sum+4500;
	}
	return sum;
}

};


class access
{
    int pool;
    int casino;
    int theatre;
    int gym;
    int spa;
public:
    access(int pl=0,int cas=0,int theat=0,int gm=0,int sp=0)
    {
        pool=pl;
        casino=cas;
        theatre=theat;
        gym=gm;
        spa=sp;

    }
    void enter();

{
    cout<<"\n ACCESSIBILITY:";
    cout<<"\n -SWIMMING POOL";
    cin>>pool;
    cout<<"\n -CASINO";
    cin>>casino;
    cout<<"\n -THEATRE";
    cin>> theatre;
    cout<<"\n -GYM";
    cin>>gym;
    cout<<"\n -SPA";
    cin>>spa;
}
 void show()
 {
    cout<<"\n ACCESSIBILITIES ARE:-";
    cout<<" \n swimming pool"<<pool;
    cout<<" \n casino"<<casino;
    cout<<" \n theatre"<< theatre;
    cout<<"gym"<<gym;
    cout<<"spa"<<spa;

     }
   int calcAccess()
{
	int sum=0;
	if(pool==1)
	{
		sum=sum+4000;
	}
	if(casino==1)
	{
		sum=sum+5500;
	}
	if(theatre==1)
	{
		sum=sum+6000;
	}
	return sum;
}
};

class package:public person,public journey,public food,public activities,public Access
{
	int totalprice;
	public:
		static long ticketnum;
		package(int tprice=0)
		{
			totalprice=tprice;
		}
		void calcprice();

		void show();

void package::calcprice()
{
	totalprice=0;
	int dur=journey::Duration();
	int meal=food::calcFood();
	totalprice=6000*dur;
	totalprice=totalprice+(dur*meal);
	int activ=activities::calcAct();
	totalprice+=activ;
	int itin=Access::calcAccess();
	totalprice+=itin;
}

void package::show()
{
	cout<<"\ntEstimated Cost of Cruise:\n\n";
	cout<<"\n Basic Cost: "<<journey::Duration()*6000;
	cout<<"\n Meals: "<<food::calcFood()*journey::Duration();
	cout<<"\n tActivities: "<<activities::calcAct();
	cout<<"\n tPrivate Access: "<<Access::calcAccess();
	calcprice();
	cout<<"\n\n Total Bill = "<<totalprice;
}
};
class Manager
{
	 string uid,pass;
	public :
		Manager()
		{
			uid="admin";
			pass="admin";
		}
		void MLogin(string,string);
		void managerPortal();
		void registeredUser();
		void ShipInfo();

	void manager()
{
	Manager m1;
	string uid,pass=" ";
	system("cls");
	cout<<"\n\n\t-------------- Manager Login --------------\n";
	cout<<"\n\t    ......Please Login to continue......";
	cout<<"\n\n\n\n\n\tUser ID :- \t";
	getline(cin,uid);
	cout<<"\n\tPassword :- \t";
	char c;
	c=getch();
	while(c!=13)
	{
		if(c!=8)
		{
			pass+=c;
			cout<<"*";
		}
		else
		{
			cout<<"\b \b";
		}
		c=getch();
	}
	m1.MLogin(uid,pass);
	main();
}

	void MLogin(string id,string password)
{
	if(id==uid&&password==pass)
	{
		managerPortal();
	}
	else
	{
		cout<<"\n\nInvalid Credentials.";
		getch();
		system("cls");
	}
}	void managerPortal()
{
	system("cls");
	int n;
	cout<<"\n\n\t\t\t******* Welcome Manager *******\n\n\n";
	cout<<"\n\t\t1.Ship Information\n\t\t2.Registered Users\n\t\t3.Logout\n\n\n\n\t\tEnter your choice>> ";
	cin>>n;
	switch(n)
	{
		case 1 : system("cls");
				 ShipInfo();
				 getch();
				 managerPortal();
				 break;
		case 2 : registeredUser();
				 break;
		case 3 : system("cls");
				 cout<<"Successfully Logged Out as Manager.\n\n";
				 break;
		default :cout<<"Please Select a Valid Choice.";
				 getch();
				 managerPortal();
	}
}

void ShipInfo()
{
	system("cls");
	cout<<"\n\t    --------------- CONQUEROR ATLANTIS ---------------\t\n\n\n";
	cout<<"\n\tConqueror Atlantis is the Asia's Largest cruise Ship till";
	cout<<"\n\tPresent Date.\n";
	cout<<"\n\tIt has the capacity of 15000 People including All Staff,";
	cout<<"\n\tCaptain and Guests.\n";
	cout<<"\n\tIt has 10 Levels out of which, 5 Levels Comprises of rooms";
	cout<<"\n\tand the rest are For Entertainment, Luxury and Experience.";
	cout<<"\n\n\tThe Staff here Knows multiple Languages, and are very";
	cout<<"\n\tHelping.\n";
	cout<<"\n\tThe Ship Begins its Journey in the 6th month every year.";
	cout<<"\n\n\tRegistrations Starts in 1st Month of the Year.\n\n\nRegister Yourself Fast.\n\n";
}

void registeredUser()
{
	system("cls");
	cout<<"\nRegistered Users\n";
	for(int i=0;i<reg;i++)
	{
		cout<<u[i].returnuser()<<" :-  "<<u[i].returnname()<<endl;
	}
	long n;
	cout<<"\n\nEnter a userid to view full details (enter 0 to exit) :- ";
	cin>>n;
	if(n==0)
	{
		managerPortal();
	}
	else
	{
		int f=0;
		for(int i=0;i<reg;i++)
		{
			if(n==u[i].returnuser())
			{
				n=i;
				f++;
			}
		}
		if(f!=0)
		{
			u[n].display();
			getch();
			managerPortal();
		}
		else
		{
			cout<<"\nUser Not Found.";
			getch();
			registeredUser();
		}
	}
}
};
class Users:public package
{
	long userid;
	public:
		void add(int);
		void edit();
		void display();

}
void add(int reg)
{
	person::enter();
	journey::enter();
	food::enter();
	activities::enter();
	Access::enter();
	userid=(ticketnum)+(1000*(reg+1))+(reg+1);
	ticketnum=userid;
	getch();
	cout<<"\n\nPlease Note Your Registration ID for future References.";
	cout<<"\nYour Registration ID is :- "<<ticketnum<<endl;
}
void Users::edit()
{
	int opt;
	system("cls");
	cout<<"\n1.Personal Details:";
	person::show();
	cout<<"\n2.Journey Details:";
	journey::show();
	cout<<"\n3.Food Details:";
	food::show();
	cout<<"\n4.Activities Opted:";
	activities::show();
	cout<<"\n5.Special Access:";
	Access::show();
	cout<<"\n\n\nSelect the Part You want to Edit (1-5): ";
	cin>>opt;
	switch(opt)
	{
		case 1	:	person::enter();
					break;
		case 2	:	journey::enter();
					break;
		case 3 	:	food::enter();
					break;
		case 4 	:	activities::enter();
					break;
		case 5 	:	Access::enter();
					break;
		default :	cout<<"Enter A Valid Choice.";

	}
}

void Users::display()
{
	cout<<userid<<endl;
	person::show();
	journey::show();
	food::show();
	activities::show();
	Access::show();
}
};
void newuser()
{
	system("cls");
	cout<<"Welcome,\n";
	cout<<"Please Fill in a few details to Register yourself.";
	cout<<"\n\n\n";
	u[reg].add(reg);
	getch();
	reg++;
	StoreData();
	system("cls");
	main();
	main();
}
void customer(int loginid=-1)
{
	long userid;
	int flag=0;
	if(loginid==-1)
	{
		system("cls");
		cout<<"\n\n\t\t\t******* Customer Login *******\n";
		cout<<"\n\n\n\n\tPlease Enter your User ID: ";
		cin>>userid;
		for(int i=0;i<reg;i++)
		{
			if(userid==u[i].returnuser())
			{
				flag++;
				loginid=i;
				customer(loginid);
			}
		}
		if(flag==0)
		{
			cout<<"\n\nSorry, Invalid User ID.";
			getch();
			system("cls");
			main();
		}
	}
	else if(loginid!=-1)
	{
		int opt;
		system("cls");
		cout<<"\n\n\t\t=+=+=+=+=+=+=+ Customer Portal +=+=+=+=+=+=+=\n\n";
		cout<<"\n\n\t\tWelcome "<<u[loginid].returnname()<<",\n";
		cout<<"\n\n\t\t\t\t1.View Details\n\n\t\t\t\t2.Edit Details\n\n\t\t\t\t3.Estimated Cost\n\n\t\t\t\t4.Logout\n\n\n";
		cout<<"\n\t\tEnter your Option:- ";
		cin>>opt;
		switch(opt)
		{
			case 1	:	u[loginid].display();
						getch();
						customer(loginid);
						break;
			case 2 	:	u[loginid].edit();
						customer(loginid);
						break;
			case 3	:	u[loginid].package::show();
						getch();
						customer(loginid);
						break;
			case 4	:	system("cls");
						cout<<"Successfully Logged out.\n";
						main();
						break;
			default	:	system("cls");
						cout<<"\n\nInvalid Choice.";
						customer(loginid);
						break;
		}
	}
}

main()
{
	void LoadData();
	LoadData();
	int opt;
	cout<<"\n\n\t   -+-+-+-+-+-+-+ Cruise Management System +-+-+-+-+-+-+-\n\n\n";
	cout<<"\n\n\t\t1.Manager Login\n\n\t\t2.New User Registration\n\n\t\t3.Existing Customer Login\n\n\t\t4.Exit\n\n";
	cout<<"\n\n\n\tEnter your option>> ";
	cin>>opt;
	switch(opt)
	{
		case 1 :	void manager();
					manager();
					break;
		case 2 :	void newuser();
					newuser();
					break;
		case 3 :	void customer(int);
					customer(-1);
					break;
		case 4 :	void StoreData();
					StoreData();
					exit(0);
					break;
		default:	getch();
					system("cls");
					cout<<"*Enter Again.\n";
					main();
					break;
	}


void StoreData()
{
	fstream file("UsersReport.txt",ios::out);
	file<<reg;
	for(int i=0;i<reg;i++)
	{
		file.write((char*)&u[i],sizeof(u[i]));
	}
	file.close();
}

void LoadData()
{
	fstream filein("UsersReport.txt",ios::in);
	filein>>reg;
	for(int i=0;i<reg;i++)
	{
		filein.read((char*)&u[i],sizeof(u[i]));
	}
	filein.close();
}
};
