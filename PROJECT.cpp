#include<iostream>
#include<fstream>
#include <iomanip>
#include <cstring> //to use strlen so that user should set pass of no more than 10 char  and without space
using namespace std;
class display
{
	public:
	void accountMenu()
	{
		cout<<" ***********************************************************************\n";
		cout<<"|                                                                       |\n";
        cout<<"|                    Welcome to Fumigation system                       |\n";
        cout<<"|                                                                       |\n";
        cout<<" *******************    Home Page MENU   ********************************\n\n";
        cout<<"1)Login\n";
        cout<<"2)Sign up\n";
        cout<<"3)Forgot Password\n";
        cout<<"4)Contact Us\n";
        cout<<"5)Disclaimer\n";
		cout<<"6)Exit\n";
        cout<<"\nEnter your choice: ";
	}
	void disclaimer()
	{
		system("CLS");
		cout<<" ***************************************************************************************************\n";
		cout<<"|                                                                                                  |\n";
        cout<<"|                                         DISCLAIMER                                               |\n";
        cout<<"|                                                                                                  |\n";
        cout<<" ***************************************************************************************************\n\n";
        cout<<"1. Dengue season has arrived in Pakistan, and it's the time to get prepared to keep yourself,\nand people around you protected from Dengue fever.\n"<<endl;
		cout<<"2. The best course of action to exterminate dengue mosquitoes from indoor and outdoor areas\n of yard.to call in a reliable and trusted pest control service before they target you.\n"<<endl;
		cout<<"3.Service Square takes great pride in offering highly effective\n yet incredibly affordable dengue spray services in Multan.\n"<<endl;
		cout<<"4.We have monthly and one-time treatment options for various \nproperty types – from single-family homes to commercial buildings.\n"<<endl;
		cout<<"5.All of our dengue spray services are provided by our extensively experienced technicians \nwho always come up with unique solutions to help you get rid of mosquitos from your yard.\n"<<endl;
		cout<<"6.Our anti-dengue spray service begins with a thorough inspection of your home or office \nspace to inspect the mosquitos and identify the places where they breed.\n"<<endl;
		cout<<"7.Since dengue mosquitoes thrive in a humid and tropical environment, our technicians \nwill look for any stagnant water in your yard during the survey.\n"<<endl;
		cout<<"8.They will then fumigate all corners of your facility to \nexterminate each and every dengue mosquitoes in your yard.\n"<<endl;
		cout<<"9.Our experts will not only tackle current infestations but also eradicate mosquito larvae before \nthey breed and grow as disease-carrying adults to reduce the likelihood of an infestation relapse.\n"<<endl;
		cout<<"10.Our technicians strictly adhere to professional fumigation standards to make sure that \nthe treatment does not have any adverse impact on human health and the environment.\n"<<endl;
	}
/*******************************************/
	void loginMenu()
	{
		cout<<" ***********************************************************************\n";
		cout<<"|                                                                       |\n";
        cout<<"|                         Login Page                                    |\n";
        cout<<"|                                                                       |\n";
        cout<<" *******************       Login MENU   ********************************\n\n";
        cout<<"1)Login as Admin\n";
        cout<<"2)Login as Moderator\n";
        cout<<"3)Login as user\n";
        cout<<"4)Back to Home Menu\n";
        cout<<"5)Exit\n";
        cout<<"\nEnter your choice: ";
	}
/*******************************************/
	void signUpMenu()
	{
		cout<<" ***********************************************************************\n";
		cout<<"|                                                                       |\n";
        cout<<"|                         Sign Up Page                                  |\n";
        cout<<"|                                                                       |\n";
        cout<<" *******************     Sign Up MENU   ********************************\n\n";
        cout<<"1)Sign Up as executive\n";
        cout<<"2)Sign Up as user\n";
        cout<<"3)Back to Home Menu\n";
        cout<<"4)Exit\n";
        cout<<"\nEnter your choice: ";
	}
/*******************************************/
	void exectiveSignUpMenu()
	{
		cout<<" ***********************************************************************\n";
		cout<<"|                                                                       |\n";
        cout<<"|                      Exective Sign Up Page                            |\n";
        cout<<"|                                                                       |\n";
        cout<<" *******************        MENU        ********************************\n\n";
        cout<<"1)Sign Up as Administrator\n";
	    cout<<"2)Sign Up as Moderator\n";
	    cout<<"3)Back to Home menu\n";
	    cout<<"4)Exit\n";
	    cout<<"\nEnter your choice: ";
	}
/*******************************************/
	void forgotMenu()
	{
		cout<<" ***********************************************************************\n";
		cout<<"|                                                                       |\n";
        cout<<"|                   Forgot Password Page                                |\n";
        cout<<"|                                                                       |\n";
        cout<<" *******************     Forgot MENU    ********************************\n\n";
        cout<<"Don't Worry we are here To help you'\n";
        cout<<"1)Find your account\n";
        cout<<"2)Back to Home Menu\n";
        cout<<"3)Exit\n";
        cout<<"\nEnter your choice: ";
	}
/*******************************************/	
	void forgotPageDisp()
	{
		cout<<" ***********************************************************************\n";
		cout<<"|                                                                       |\n";
        cout<<"|                   Forgot Password Page                                |\n";
    	cout<<"|                                                                       |\n";
    	cout<<" ***********************************************************************\n\n";
	}
/*******************************************/
	void exitDisp()
	{
		system("CLS");
		cout<<"\n___________________________________________________________________________________\n| |\t\t\t\t\t\t\t\t\t\t| |\n|*|\t\t\t\t T h a n k s\t\t\t\t\t|*|\n|*|\t\t\t\t\t\t\t\t\t\t|*|\n|*|\t\t\t\t f o r\t\t\t\t\t\t|*|\n|*|\t\t\t\t\t\t\t\t\t\t|*|\n|*|\t\t\t\t u s i n g\t\t\t\t\t|*|\n|*|\t\t\t\t\t\t\t\t\t\t|*|\n|*|\t\t\t\t t h i s\t\t\t\t\t|*|\n|*|\t\t\t\t\t\t\t\t\t\t|*|\n|*|\t\t\t\t p r o g r am\t\t\t\t\t|*|\n   ___________________________________________________________________________";
		cin.ignore();
		cin.ignore();
		system("CLS");
	}
/*******************************************/
	void dispPressEnter()
	{
		cout<<"\n\n\nPress Enter to continue.......";
		cin.ignore();
		cin.ignore();
		system("CLS");
	}
/*******************************************/
	void defaultDisp()
	{
		system("CLS");
		cout<<"\n\nInvalid choice";
		cout<<"\n\n Please enter right choice !\n\n";
	}	
/*******************************************/
	void signUpDisp()
	{
		cout<<" ***********************************************************************\n";
		cout<<"|                                                                       |\n";
        cout<<"|                         Sign Up Page                                  |\n";
        cout<<"|                                                                       |\n";
        cout<<"| Note: Enter Username and Password without space                       |\n";
        cout<<"| Password should be minimum 8 character  and maximum 10 characters long|\n";
        cout<<"| While Username should be minimum 2 and maximum 15 characters long     |\n";
        cout<<" ***********************************************************************\n\n";
	}
/*******************************************/
	void aboutAdministrator()
	{
		system("CLS");
		cout<<"\n\n\t| Administrator  is  the  one  who have  control on other admins as  well      |\n";
		cout<<"\t| such that  owner  admin  can  approve or  reject  someone's   request   who  |\n";
		cout<<"\t| who can request to  become an admin or administrator can remove any moderator|\n";
		cout<<"\t| so  that, moderator have  no more  access to its functions  and work so in a |\n";
		cout<<"\t| nutshell Administrator have these two extra important function of accepting  |\n";
		cout<<"\t| moderator request and delete their account                                   |\n";
		dispPressEnter();
	}
/*******************************************/		
	void successfullAccount()
	{
		cout<<" ***********************************************************************\n";
		cout<<"|    	A c c o u n t 	c r e a t e d	s u c c e s s f u l l y         |\n";
        cout<<"|                                                                       |\n";
        cout<<" ***********************************************************************\n\n";
	}
/*******************************************/	
	void fumigationreqdisp()
	{
		cout<<" ***********************************************************************\n";
		cout<<"|      	        F U M I G A T I O N    R E Q U E S T                   |\n";
        cout<<"|                      Enter Following Details                         |\n";
        cout<<" ***********************************************************************\n\n";
	}
/*******************************************/	
	void choeckForInputPassName(int size1,int size2)
	{
		if(size1<2 )
		{
			cout<<"\n\nYour entered username is less than 2 charecters. Make sure to enter Valid Username\n";
		}
		if(size1>15)
		{
			cout<<"\n\nYour entered username is greater than 15 charecters. Make sure to enter Valid Username\n";
		}
		if(size2<8)
		{
			cout<<"\n\nYour entered Password is less than 8 charecters. Make sure to enter Valid Password\n";
		}
		if(size2>10)
		{
			cout<<"\n\nYour entered Password is greater than 10 charecters. Make sure to enter Valid Password\n";
		}					
	}	
/*******************************************/
	void knowAboutAdministrator()
	{
		int n;
		do
		{
			cout<<"\n1)Know more about Administrator\n";
			cout<<"2)Back to menue\n";
			cin>>n;
			if(n==1)
			{
				aboutAdministrator();
			}
			else if(n==2)
			{
				//just do this for not to display as invalid when user enter 2 
			}
			else 
			{
				defaultDisp();
			}
		}while(n!=2 && n!=1);
	}	
/*******************************************/
	void successfullRequest()
	{
		cout<<" ***********************************************************************\n";
		cout<<"|     R e q u e s t  	g e n r a t e d   	s u c c e s s f u l l y |\n";
        cout<<"|                                                                       |\n";
        cout<<" ***********************************************************************\n\n";
	}		
/*******************************************/
	void noteDisplayAdmin()
	{
		cout<<"\n\n";
		cout<<"\t\t|Its all upto \"Administrator\" to approve your  moderator  account|\n";
		cout<<"\t\t|if administrator \"approve\" your account than you can  access all|\n";
		cout<<"\t\t|function of moderator You can check the \"status\" of your request|\n";
		cout<<"\t\t|by log in by your moderator account if it displayed as \"pending\"|\n";
		cout<<"\t\t|its mean \"your request is still pending\". If it  displayed  as  |\n";
		cout<<"\t\t|\"no user found\" its mean your  request  has been  \"rejected\"    |\n";
		cout<<"\t\t|or the third possibility is you simply gain access its mean your|\n";
		cout<<"\t\t|                request has been approved                       |\n\n";
		knowAboutAdministrator();
	}
/*******************************************/
	void securityQuestionDisplay()
	{
		cout<<" *************************************************************************\n";
		cout<<"|                         Security Question                               |\n";
        cout<<"|Note:Security Question will help you to reset your password if you forgot|\n";
        cout<<"|Please Enter name as: \"abcd xyz\" where abcd is first name and xyz  is    |\n";
        cout<<"|last name  or  just press enter after each name (first and last)  if you |\n";
        cout<<"|Enter any other name with as well like\"abcd xyz lmn\" than \"lmn\" will     |\n";
        cout<<"|be neglected .                                                           |\n";
        cout<<" *************************************************************************\n\n";
		cout<<"Q: What is your mother \"First Name\" and \"Last name\" ?\n";
		cout<<"Ans: ";
	}
/*******************************************/
	void UserAlreadyExist()
	{
		cout<<"There is already an account of the same name. Try to sign up with different name";
		cout<<"For example if you are trying to sign up with \"abcd\" name try out\"abcd_1\" or";
		cout<<"\"abcd1\" etc";
		dispPressEnter();
	}
/*******************************************/
	void signInPageDisplay()
	{
		cout<<" ***********************************************************************\n";
		cout<<"|                                                                       |\n";
        cout<<"|                         Sign In Page                                  |\n";
        cout<<"|                                                                       |\n";
        cout<<" ***********************************************************************\n\n";
	}
/*******************************************/
	void FumigationSysDefaultAfterLogin()
	{
		cout<<" ***********************************************************************\n";
		cout<<"|                                                                       |\n";
        cout<<"|                         Fumigation System                             |\n";
        cout<<"|                                                                       |\n";
        cout<<" ***********************************************************************\n\n";
	}
/*******************************************/
	void SuccessfullySignIn()
	{
		cout<<" ***********************************************************************\n";
		cout<<"|     A c c o u n t  	S i g n  I N      	s u c c e s s f u l l y |\n";
        cout<<"|                                                                       |\n";
        cout<<" ***********************************************************************\n\n";
    	dispPressEnter();
    	system("CLS");
	}
/*******************************************/
	void signinuserDisplay()
	{	
		system("CLS");
		cout<<" ***********************************************************\n";
		cout<<"|    A c c o u n t   S i g n I N   s u c c e s s f u l l y  |\n";
        cout<<"|                                                           |\n";
        cout<<" **********************    MENU    *************************\n\n";
        cout<<"1)Send Fumigation Request\n";
	    cout<<"2)Check Request Status\n";
	    cout<<"3)Fumigation Record.\n";
	    cout<<"4)Exit\n";
	    cout<<"\nEnter your choice: ";
	}
};
/*********************************************
one class ends here
*********************************************/
class Node
{
	private:
		string username;
		string password;
		string motherFirstName;
		string motherSecoundName;
		Node *nextNode;
	public:
		void setName(string userN)
		{
			username=userN;
		}
		string getName()
		{
			return username;
		}
		void setPas(string pas)
		{
			password=pas;
		}
		string getpas()
		{
			return password;
		}
		void setMotherFN(string MFN)
		{
			motherFirstName=MFN;
		}
		string getMotherFN()
		{
			return motherFirstName;
		}
		void setMotherSN(string MSN)
		{
			motherSecoundName=MSN;
		}
		string getMotherSN()
		{
			return motherSecoundName;
		}
		void setNextNode(Node *next)
		{
			nextNode=next;
		}
		Node* getNextNode()
		{
			return nextNode;
		}
};
class List
{
	private:
		Node *head;
		Node *current;
		int size;
		display disp;
	public:
		List()
		{
			head=NULL;
			current=head;
			size=0;
		}
		void destructor (Node *dest)
		{
			if(dest==NULL)
			{
				return;
			}
			Node *tempDest;
			tempDest=dest->getNextNode();
			dest=NULL;
			delete dest;
			size=0;
			destructor(tempDest);
		}
		void fetchUserData() 
		{
			ifstream users("users.txt");
			string userN,pass,MFN,MLN;
    		while(users>>userN>>pass>>MFN>>MLN  )
			{			
			Node *temp= new Node();
			temp->setName(userN);
			temp->setPas(pass);
			temp->setMotherFN(MFN);
			temp->setMotherSN(MLN);
			if(size==0)
			{
				head=temp;
				current=head;
				head->setNextNode(NULL);
			}
			else
			{
				temp->setNextNode(current->getNextNode());
				current->setNextNode(temp);
				current=temp;
			}
			size++;
			}
		}
		void fetchModReqData() 
		{
			ifstream users("ModeratorRequests.txt");
			string userN,pass,MFN,MLN;
    		while(users>>userN>>pass>>MFN>>MLN)
			{
				Node *temp= new Node();
				temp->setName(userN);
				temp->setPas(pass);
				temp->setMotherFN(MFN);
				temp->setMotherSN(MLN);
				if(size==0)
				{
					head=temp;
					current=head;
					head->setNextNode(NULL);
				}
				else
				{
					temp->setNextNode(current->getNextNode());
					current->setNextNode(temp);
					current=temp;
				}
				size++;
			}
		}
		Node* GetHead()
		{
			return head;
		}
		void writeAgainModReq() //this will firstly clear all data in file and rewrite new data
		{
			ofstream file("ModeratorRequests.txt"); 
        	file<<"";//this will clear all data in users.txt file
			Node *tee;
			tee=head;
			fstream mods;
			mods.open("ModeratorRequests.txt",ios::app);
			while(tee!=NULL)
			{
    			mods<<tee->getName()<<' '<<tee->getpas()<<' '<<tee->getMotherFN()<<' '<<tee->getMotherSN()<<endl;
    			tee=tee->getNextNode();
			}
			destructor(GetHead());
		}
		void deleteAnModeratorRequest(string UserName,Node *temp,Node *beforeTemp )//it will delete an moderator request from file and rewrite file
		{
			if(UserName==temp->getName() && temp==GetHead()) // n case there is only one node data
			{
				temp->getNextNode()!=NULL;
				head=temp->getNextNode();
				temp=NULL;
				delete temp;
				size--;
				return;
			}
			else if( UserName==temp->getName())
			{
				beforeTemp->setNextNode(temp->getNextNode());
				delete temp;
				size--;
				return;
			}
			beforeTemp =temp;
			deleteAnModeratorRequest(UserName,temp->getNextNode(),beforeTemp);
		}
		void modReqOnebyOne()
		{
			fstream mods;
			mods.open("moderators.txt",ios::app);
			int ask,i=0;
			Node *temp=head;
			Node *beforeTemp;
			while(ask!=4 && temp!=NULL)
			{
				i++;
				system("CLS");
				cout<<i<<") "<<temp->getName();
				cout<<"\n\n1)Accept   2)Reject    3)Skip    4)Back to menue\n";
				cout<<"Enter Your choice: ";
				cin>>ask;
				if(ask==1)
				{
					mods<<temp->getName()<<' '<<temp->getpas()<<' '<<temp->getMotherFN()<<' '<<temp->getMotherSN()<<endl;
					deleteAnModeratorRequest(temp->getName(),GetHead(),beforeTemp);
					cout<<"\n Moderator Successfully Added";
					temp=temp->getNextNode();
					disp.dispPressEnter();
				}
				else if(ask==2)
				{
					deleteAnModeratorRequest(temp->getName(),GetHead(),beforeTemp);
					cout<<"\n\nDeleted Successfully";
					disp.dispPressEnter();
					temp=temp->getNextNode();
				}
				else if(ask==3)
				{
					temp=temp->getNextNode();
				}
				else if(ask==4)
				{
					//just a blank 
				}
				else
				{
					disp.defaultDisp();
					disp.dispPressEnter();
				}
			}
			writeAgainModReq();
		}
		void dispAllRequest()
		{
			fstream mods;
			mods.open("moderators.txt",ios::app);
			Node *temp;
			Node *beforeTemp=head;
			int i=0;
			int actionChoice;
			do
			{
				i=0;
				system("CLS");
				temp=head;
				while( temp!=NULL)
				{	
					i++;
					if(i==6)
					cout<<endl;
					cout<<i<<") "<<temp->getName()<<"        ";
					temp=temp->getNextNode();
				}
				cout<<"\n\nPlease enter Index of Moderator request on which you wanted \n to perfom some action or simply enter -1 to go back to menu: ";
				cin>>actionChoice;
				if(actionChoice>0 && actionChoice<=i )
				{
					Node *newTemp=head;
					for(int j=1;j<actionChoice;j++)
					{
						newTemp=newTemp->getNextNode();
					}
					int ask;
					do
					{
						system("CLS");
						cout<<"Request Name: "<<newTemp->getName();
						cout<<"\n\n1)Accept   2)Reject    3)Skip    4)Back to List\n";
						cout<<"Enter Your choice: ";
						cin>>ask;
						if(ask==1)
						{
							mods<<newTemp->getName()<<' '<<newTemp->getpas()<<' '<<newTemp->getMotherFN()<<' '<<newTemp->getMotherSN()<<endl;			
							deleteAnModeratorRequest(newTemp->getName(),GetHead(),beforeTemp);
							cout<<"\n Moderator Successfully Added";
							newTemp=newTemp->getNextNode();
							disp.dispPressEnter();
						}
						else if(ask==2)
						{
							deleteAnModeratorRequest(newTemp->getName(),GetHead(),beforeTemp);
							cout<<"\n\nDeleted Successfully";
							disp.dispPressEnter();
							newTemp=newTemp->getNextNode();
						}
						else if(ask==3)
						{
							newTemp=newTemp->getNextNode();
						}
						else if(ask==4)
						{
							//just a blank 
						}
						else
						{
							disp.defaultDisp();
							disp.dispPressEnter();
						}
						writeAgainModReq();
					}while(ask>4 && ask<1);
				}
				else if(actionChoice==-1)
				{}
				else
				{
					disp.defaultDisp();
					disp.dispPressEnter();
				}
			}while(actionChoice!=-1);
		}
		void writeAgainToFile() //this will firstly clear all data in file and rewrite new data
		{
			ofstream file("users.txt"); 
        	file<<"";//this will clear all data in users.txt file
			Node *tee;
			tee=head;
			fstream users;
			users.open("users.txt",ios::app);
			while(tee!=NULL)
			{
    			users<<tee->getName()<<' '<<tee->getpas()<<' '<<tee->getMotherFN()<<' '<<tee->getMotherSN()<<endl;
    			tee=tee->getNextNode();
			}
			destructor(GetHead());
		}
		void acceptAll()
		{
			fstream mods;
			mods.open("moderators.txt",ios::app);
			destructor(GetHead());
			fetchModReqData();
			Node *newTemp=head;
			Node *beforeTemp=head;
			while(newTemp!=NULL)
			{
				mods<<newTemp->getName()<<' '<<newTemp->getpas()<<' '<<newTemp->getMotherFN()<<' '<<newTemp->getMotherSN()<<endl;
				deleteAnModeratorRequest(newTemp->getName(),GetHead(),beforeTemp);
				newTemp=newTemp->getNextNode();
			}
			ofstream file("ModeratorRequests.txt"); 
        	file<<"";//this will clear all data in users.txt file
			destructor(GetHead());
		}
		void changePassAndWriteAgainInFile(string UserName,string NewPass,Node *temp,int accountType)
		{
			if(accountType==0)
			{
				fetchModReqData();
				Node *temp=NULL;
				while(temp!=NULL)
				{
					if(UserName==temp->getName() )
					{
						temp->setPas(NewPass);
						ofstream file("moderatorRequests.txt"); 
        				file<<"";//this will clear all data in users.txt file
						Node *tee;
						tee=head;
						fstream users;
						users.open("moderatorRequests.txt",ios::app);
						while(tee!=NULL)
						{
    						users<<tee->getName()<<' '<<tee->getpas()<<' '<<tee->getMotherFN()<<' '<<tee->getMotherSN()<<endl;
    						tee=tee->getNextNode();
						}
						destructor(GetHead());
						destructor(GetHead());
						return;
					}
					temp->getNextNode();
				}
			}
			if(accountType==1)
			{
				ifstream users("ownerAdmin.txt");
				string userN,pass,MFN,MLN;
    			while(users>>userN>>pass>>MFN>>MLN  )
				{
					Node *temp= new Node();
					temp->setName(userN);
					temp->setPas(pass);
					temp->setMotherFN(MFN);
					temp->setMotherSN(MLN);
					if(size==0)
					{
						head=temp;
						current=head;
						head->setNextNode(NULL);
					}
					else
					{
						temp->setNextNode(current->getNextNode());
						current->setNextNode(temp);
						current=temp;
					}
					size++;
				}
				Node *temp=head;
				while(temp!=NULL)
				{
					if(UserName==temp->getName() )
					{
						temp->setPas(NewPass);
						ofstream file("ownerAdmin.txt"); 
        				file<<"";//this will clear all data in users.txt file
						Node *tee;
						tee=head;
						fstream users;
						users.open("ownerAdmin.txt",ios::app);
						while(tee!=NULL)
						{
    						users<<tee->getName()<<' '<<tee->getpas()<<' '<<tee->getMotherFN()<<' '<<tee->getMotherSN()<<endl;
    						tee=tee->getNextNode();
						}
						destructor(GetHead());
						destructor(GetHead());
						return;
					}
					temp->getNextNode();
				}
			}
			if(accountType==2)
			{
				ifstream users("moderators.txt");
				string userN,pass,MFN,MLN;
    			while(users>>userN>>pass>>MFN>>MLN  )
				{		
					Node *temp= new Node();
					temp->setName(userN);
					temp->setPas(pass);
					temp->setMotherFN(MFN);
					temp->setMotherSN(MLN);
					if(size==0)
					{
						head=temp;
						current=head;
						head->setNextNode(NULL);
					}
					else
					{
						temp->setNextNode(current->getNextNode());
						current->setNextNode(temp);
						current=temp;
					}
					size++;
				}
				Node *temp=head;
				while(temp!=NULL)
				{
					if(UserName==temp->getName() )
					{
						temp->setPas(NewPass);
						ofstream file("moderators.txt"); 
        				file<<"";//this will clear all data in users.txt file
						Node *tee;
						tee=head;
						fstream users;
						users.open("moderators.txt",ios::app);
						while(tee!=NULL)
						{
    						users<<tee->getName()<<' '<<tee->getpas()<<' '<<tee->getMotherFN()<<' '<<tee->getMotherSN()<<endl;
    						tee=tee->getNextNode();
						}
						destructor(GetHead());
						destructor(GetHead());
						return;
					}
					temp->getNextNode();
				}
			}
			if(accountType==3)
			{
				fetchUserData();
				Node *temp=head;
				while(temp!=NULL)
				{
					if(UserName==temp->getName() )
					{
						temp->setPas(NewPass);
						writeAgainToFile();
						destructor(GetHead());
						return;
					}
					temp->getNextNode();
				}
			}
		}
		void writeAgainfumiReq() //this will firstly clear all data in file and rewrite new data
		{
			ofstream file("Fumigation_Request.txt"); 
        	file<<"";//this will clear all data in users.txt file
			Node *t;
			t=head;
			fstream fumi;
			fumi.open("Fumigation_Request.txt",ios::app);
			while(t!=NULL)
			{
    			fumi<<t->getName()<<' '<<t->getpas()<<' '<<t->getMotherFN()<<' '<<t->getMotherSN()<<endl;
    			t=t->getNextNode();
			}
			destructor(GetHead());
		}
		void fumigationReqOnebyOne()
		{
			fstream fumi;
			fumi.open("Fumigation.txt",ios::app);
			int ask,i=0;
			Node *temp=head;
			Node *beforeTemp;
			while(ask!=4 && temp!=NULL)
			{
				i++;
				system("CLS");
				cout<<i<<") "<<temp->getName();
				cout<<"\n\n1)Accept   2)Reject    3)Skip    4)Back to menue\n";
				cout<<"Enter Your choice: ";
				cin>>ask;
				if(ask==1)
				{
					fumi<<temp->getName()<<' '<<temp->getpas()<<' '<<temp->getMotherFN()<<' '<<temp->getMotherSN()<<endl;
					deleteAnModeratorRequest(temp->getName(),GetHead(),beforeTemp);
					cout<<"\n Fumigation Request Approved.";
					temp=temp->getNextNode();
					disp.dispPressEnter();
				}
				else if(ask==2)
				{
					deleteAnFumiRequest(temp->getName(),GetHead(),beforeTemp);
					cout<<"\n\nRequest Deleted";
					disp.dispPressEnter();
					temp=temp->getNextNode();
				}
				else if(ask==3)
				{
					temp=temp->getNextNode();
				}
				else if(ask==4)
				{
					//just a blank 
				}
				else
				{
					disp.defaultDisp();
					disp.dispPressEnter();
				}
			}
			writeAgainfumiReq();
		}
		void deleteAnFumiRequest(string UserName,Node *temp,Node *beforeTemp )//it will delete an moderator request from file and rewrite file
		{
			if(UserName==temp->getName() && temp==GetHead()) // n case there is only one node data
			{
				temp->getNextNode()!=NULL;
				head=temp->getNextNode();
				temp=NULL;
				delete temp;
				size--;
				return;	
			}
			else if( UserName==temp->getName())
			{
				beforeTemp->setNextNode(temp->getNextNode());
				delete temp;
				size--;
				return;
			}
			beforeTemp =temp;
			deleteAnFumiRequest(UserName,temp->getNextNode(),beforeTemp);
		}
		void fetchfumiReqData() 
		{
			ifstream users("Fumigation_Request.txt");
			string userN,pass,MFN,MLN;
    		while(users>>userN>>pass>>MFN>>MLN)
			{
				Node *temp= new Node();
				temp->setName(userN);
				temp->setPas(pass);
				temp->setMotherFN(MFN);
				temp->setMotherSN(MLN);
				if(size==0)
				{
					head=temp;
					current=head;
					head->setNextNode(NULL);
				}
				else
				{
					temp->setNextNode(current->getNextNode());
					current->setNextNode(temp);
					current=temp;
				}
				size++;
			}
		}
		Node* GetHeadfumi()
		{
			return head;
		}
		void dispAllRequestfumi()
		{
			fstream fumi;
			fumi.open("Fumigation.txt",ios::app);
			Node *temp;
			Node *beforeTemp=head;
			int i=0;
			int actionChoice;
			do
			{
				i=0;
				system("CLS");
				temp=head;
				while( temp!=NULL)
				{	
					i++;
					if(i==6)
					cout<<endl;
					cout<<i<<") "<<temp->getName()<<"        ";
					temp=temp->getNextNode();
				}
				cout<<"\n\nPlease enter Index of Fumigation request on which you wanted \n to perfom some action or simply enter -1 to go back to menu: ";
				cin>>actionChoice;
				if(actionChoice>0 && actionChoice<=i)
				{
					Node *newTemp=head;
					for(int j=1;j<actionChoice;j++)
					{
						newTemp=newTemp->getNextNode();
					}
					int ask;
					do
					{	
						system("CLS");
						cout<<"Request Name: "<<newTemp->getName();
						cout<<"\n\n1)Accept   2)Reject    3)Skip    4)Back to List\n";
						cout<<"Enter Your choice: ";
						cin>>ask;
						if(ask==1)
						{
							fumi<<newTemp->getName()<<' '<<newTemp->getpas()<<' '<<newTemp->getMotherFN()<<' '<<newTemp->getMotherSN()<<endl;
							deleteAnFumiRequest(newTemp->getName(),GetHead(),beforeTemp);
							cout<<"\n Request Added!";
							newTemp=newTemp->getNextNode();
							disp.dispPressEnter();
						}
						else if(ask==2)
						{
							deleteAnModeratorRequest(newTemp->getName(),GetHead(),beforeTemp);
							cout<<"\n\nDeleted Successfully";
							disp.dispPressEnter();
							newTemp=newTemp->getNextNode();
						}
						else if(ask==3)
						{
							newTemp=newTemp->getNextNode();
						}
						else if(ask==4)
						{
							//just a blank 
						}
						else
						{
							disp.defaultDisp();
							disp.dispPressEnter();
						}
						writeAgainfumiReq();
					}while(ask>4 && ask<1);
				}
				else if(actionChoice==-1)
				{}
				else
				{
					disp.defaultDisp();
					disp.dispPressEnter();
				}
			}while(actionChoice!=-1);
		}
		void acceptAllfumi()
		{
			fstream mods;
			mods.open("Fumigation.txt",ios::app);
			destructor(GetHead());
			fetchfumiReqData();
			Node *newTemp=head;
			Node *beforeTemp=head;
			while(newTemp!=NULL)
			{
				mods<<newTemp->getName()<<' '<<newTemp->getpas()<<' '<<newTemp->getMotherFN()<<' '<<newTemp->getMotherSN()<<endl;
				deleteAnModeratorRequest(newTemp->getName(),GetHead(),beforeTemp);
				newTemp=newTemp->getNextNode();
			}
			ofstream file("Fumigation_Request.txt"); 
    	    file<<"";//this will clear all data in users.txt file
			destructor(GetHead());
		}
};
/*******************************************
secound class ends here
********************************************/
class NodeFM
{
	private:
		string	userName;
		string	FatherFN;
		string  FatherLN;
		string  CNIC;
		string  phoneNum;
		string  age;
		string  email;
		NodeFM *next;
	public:
		void setuserName(string n)
		{
			userName=n;
		}
		string getuserName()
		{
			return userName;
		}
		void setFatherFN(string fn)
		{
			FatherFN=fn;
		}
		string getFatherFN()
		{
			return FatherFN;
		}
		void setFatherLN(string ln)
		{
			FatherLN=ln;
		}
		string getFatherLN()
		{
			return FatherLN;
		}
		void setCNIC(string cn)
		{
			CNIC=cn;
		}
		string getCNIC()
		{
			return CNIC;
		}
		void setphoneNum(string pn)
		{
			phoneNum=pn;
		}
		string getphoneNum()
		{
			return phoneNum;
		}
		void setage(string ag)
		{
			age=ag;
		}
		string getage()
		{
			return age;
		}
		void setemail(string em)
		{
			email=em;
		}
		string getemail()
		{
			return email;
		}
		void setnextNode(NodeFM *nfm)
		{
			next=nfm;
		}
		NodeFM * getnextNode()
		{
			return next;
		}
};
class MList
{
	private:
		NodeFM *headFM;
		NodeFM *currentFM;
		int size;
	public:
		display disp;
		MList()
		{
			headFM=NULL;
			currentFM=headFM;
			size=0;
		}	
		void destructorM (NodeFM *des)
		{
			if(des==NULL)
			{
				return;
			}
			NodeFM *tempDes;
			tempDes=des->getnextNode();
			des=NULL;
			delete des;
			size=0;
			destructorM(tempDes);
		}
		NodeFM* GetHead()
		{
			return headFM;
		}
		void fetchModsData()
		{		
			destructorM (GetHead());
			ifstream users("moderatorsData.txt");
			string userN,FFN,FLN,CNIC,phoneNum,age,email;
    		while(users>>userN>>FFN>>FLN>>CNIC>>phoneNum>>age>>email)
			{				
				NodeFM *temp= new NodeFM();
				temp->setuserName(userN);
				temp->setFatherFN(FFN);
				temp->setFatherLN(FLN);
				temp->setCNIC(CNIC);
				temp->setphoneNum(phoneNum);
				temp->setage(age);
				temp->setemail(email);
				if(size==0)
				{
					headFM=temp;
					currentFM=headFM;
					headFM->setnextNode(NULL);
				}
				else
				{
					temp->setnextNode(currentFM->getnextNode());
					currentFM->setnextNode(temp);
					currentFM=temp;
				}
				size++;
			}
		}
		void writeAginModData() //this will firstly clear all data in file and rewrite new data
		{
			ofstream file("moderatorsData.txt"); 
    	    file<<"";//this will clear all data in users.txt file
			NodeFM *tee;
			tee=headFM;
			fstream mods;
			mods.open("moderatorsData.txt",ios::app);
			while(tee!=NULL)
			{
    			mods<<tee->getuserName()<<' '<<tee->getFatherFN()<<' '<<tee->getFatherLN()<<' '<<tee->getCNIC()<<' '<<tee->getphoneNum()<<' '<<tee->getage()<<' '<<tee->getemail()<<endl;
    			tee=tee->getnextNode();
			}
			destructorM (GetHead());
		}
		void deleteAnModeratorDATA(string UserName,NodeFM *temp,NodeFM *beforeTemp )//it will delete an moderator request from file and rewrite file
		{
			if(UserName==temp->getuserName() && temp==GetHead()) // n case there is only one node data
			{
				temp->getnextNode()!=NULL;
				headFM=temp->getnextNode();
				temp=NULL;
				delete temp;
				size--;
				return;
			}
			else if( UserName==temp->getuserName())
			{
				beforeTemp->setnextNode(temp->getnextNode());
				delete temp;
				size--;
				return;
			}
			beforeTemp =temp;
			deleteAnModeratorDATA(UserName,temp->getnextNode(),beforeTemp);
		}
		void deleteModeratorAlongItsData()
		{
			fetchModsData();
			NodeFM *temp;
			NodeFM *beforeTemp=headFM;
			int i=0;
			int actionChoice;
			do
			{
				i=0;
				system("CLS");
				temp=headFM;
			    cout<<"Index |         UserName                |      CNIC       \n\n";
				while( temp!=NULL)
				{	
					i++;
					cout<<i<<")        \t "<<temp->getuserName()<<"      \t         "<<temp->getCNIC()<<endl;
					temp=temp->getnextNode();
				}
				cout<<"\n\nPlease enter Index of Moderator request on which you wanted \n to perfom some action or simply enter -1 to go back to menu: ";
				cin>>actionChoice;
				if(actionChoice>0 && actionChoice<=i )
				{
					NodeFM *newTemp=headFM;
					for(int j=1;j<actionChoice;j++)
					{
						newTemp=newTemp->getnextNode();
					}
					int ask;
					do
					{
						system("CLS");
						cout<<"Request Name: "<<newTemp->getuserName()<<"\t\t CNIC: "<<newTemp->getCNIC();
						cout<<"\n\n1)Delete Moderator    2)Back to List\n";
						cout<<"Enter Your choice: ";
						cin>>ask;
						if(ask==1)
						{
							deleteAnModeratorDATA(newTemp->getuserName(),GetHead(),beforeTemp);
							cout<<"\n Moderator and its Data deleted  successfully";
							newTemp=newTemp->getnextNode();
							disp.dispPressEnter();
						}
						else if(ask==2)
						{}
						else
						{
							disp.defaultDisp();
							disp.dispPressEnter();
						}
					}while(ask>2 && ask<1);
					writeAginModData();
				}
				else if(actionChoice==-1)
				{}
				else
				{
					disp.defaultDisp();
					disp.dispPressEnter();
				}
			}while(actionChoice!=-1);
		}
};
/*******************************************/
class account
{
	public:
		bool checkIfUserAlreadyExist(char username[15] , int switchChoice)
		{
			display di;
			string j;
			ifstream modereq("ModeratorRequests.txt");
			ifstream users("users.txt");
			ifstream moderators("moderators.txt");
			if(switchChoice==1)
			{
				while(modereq>>j)
				{
					if(username==j)
					{
						di.UserAlreadyExist();
						return 1;
					}
				}
				while(moderators>>j)
				{
					if(username==j)
					{
						di.UserAlreadyExist();
						return 1;
					}
				}
				return 0;
			}
			if(switchChoice==2)
			{
				while(users>>j)
				{
					if(username==j)
					{
						di.UserAlreadyExist();
						return 1;
					}
				}
				return 0;
			}	 	
		}
/*******************************************/
		void signUpAsAdmin(char username[15], char pass[10])
		{
			fstream ownerAdmin;
			display di;
			system("CLS");
			char inputmfirst[15], inputmlast[15];
				int kk=0;
				do{
				
				
				di.securityQuestionDisplay();
				cin>>inputmfirst>>inputmlast;
				
				break;
			}while(kk!=0);
			system("CLS");
			di.successfullAccount();
			cout<<"\n\nCongrtulations your are sign up as Owner Admin. Go to login menu to login to your account..";
			ownerAdmin.open("ownerAdmin.txt",ios::app);
			ownerAdmin<<username<<' '<<pass<<' '<<inputmfirst<<' '<<inputmlast<<endl;
			di.knowAboutAdministrator();
		}
/*******************************************/
		bool signUpAsModerator(char username[15], char pass[10])
		{
			fstream moderatorRequest;
			display di;
			system("CLS");
			int check=0;
			check=checkIfUserAlreadyExist(username,1); //we send 1 as argument because we have check in ower function if we pass 1 asa rgumrnt 
		                                          // then username of moderators can only match if we pass 2 it match username with the username ordinary users
		    if(check==1) 
		    {
		       	return 1;//this will terminate this function after displaying that there is already an user of this name  
			}
			else
			{
				char inputmfirst[15], inputmlast[15];
				int kk=0;
				do{
				
				
				di.securityQuestionDisplay();
				cin>>inputmfirst>>inputmlast;
				break;
			}while(kk!=0);
				system("CLS");
				di.successfullRequest();
				cout<<"\n\nYour request to Become a Moderator hass been genrated.";
				di.noteDisplayAdmin();
				moderatorRequest.open("ModeratorRequests.txt",ios::app);
				moderatorRequest<<username<<' '<<pass<<' '<<inputmfirst<<' '<<inputmlast<<endl;
				return 0;
			}		                    
		}
/*******************************************/
		bool signUpAsUser(char username[15], char pass[10])
		{
			display di;
			system("CLS");
			int check=0;
			check=checkIfUserAlreadyExist(username,2);//we send 1 as argument because we have check in ower function if we pass 1 asa rgumrnt 
		                                          // then username of moderators can only match if we pass 2 it match username with the username ordinary users
			if(check==1) 
		    {
		       	return 1;//this will terminate this function after displaying that there is already an user of this name  
			}
			else
			{
				fstream Users;
				char inputmfirst[15], inputmlast[15];
				int kk=0;
				do{
				
				
				di.securityQuestionDisplay();
				cin>>inputmfirst>>inputmlast;
				break;
			}while(kk!=0);
				system("CLS");
				di.successfullAccount();
				di.dispPressEnter();
				Users.open("users.txt",ios::app);
				Users<<username<<' '<<pass<<' '<<inputmfirst<<' '<<inputmlast<<endl;			
				return 0;
			}
		}
/*******************************************/
    	void forgetAccountFind(char username[15], string motherFirstName,string motherLastName, int accountType)
    	{
    		display disp;
    		List li;
    		string userN,pass,MFN,MLN;
    		int count; // use as a check that user founded
    		switch(accountType)
			{
    			case 1:
    			{
    				ifstream admin("ownerAdmin.txt");
    				while(count!=1 && admin>>userN>>pass>>MFN>>MLN )
					{
						count=0;
						if(MFN==motherFirstName && MLN==motherLastName && userN==username )
						{
							count=1;
						}
					}	
				}
				break;
				case 2:
			    {
			    	ifstream moderators("moderators.txt");
			    	ifstream modereq("ModeratorRequests.txt");
			    	while( count!=1 && moderators>>userN>>pass>>MFN>>MLN  )
					{
						count=0;
						if(MFN==motherFirstName && MLN==motherLastName && userN==username )
						{
							count=1;
						}
					}	
					while(count!=1 && modereq>>userN>>pass>>MFN>>MLN)
					{
						count=0;
						if(MFN==motherFirstName && MLN==motherLastName && userN==username )
						{
							count=1;
							accountType=0; //it will tell our change pass function that person is from mod request file
						}
					}	
				}
				break;
    			case 3:
    			{
    				ifstream users("users.txt");
    				while( count!=1 && users>>userN>>pass>>MFN>>MLN  )
					{
						count=0;
						if(MFN==motherFirstName && MLN==motherLastName && userN==username )
						{
							count=1;
						}
					}	
				}
				break;		
			}
			if(count==1)
			{
				int t;
				int size2;
				int check;
				system("CLS");
				disp.forgotPageDisp();
				cout<<"Your Username is: "<<userN<<endl;
				cout<<"Your Password is: "<<pass<<endl;
				disp.dispPressEnter();
				do
				{
					system("CLS");
					disp.forgotPageDisp();
					cout<<"\n\n would you like to change your password ?\n";
					cout<<"\t\t1) Yes \t2)No\n";
					cin>>t;
					if(t!=2 && t!=1)
					{
						disp.defaultDisp();
						disp.dispPressEnter();
					}
					else if(t==1)
					{
						char newPass[10];
						do
						{
							check=0;
							system("CLS");
							disp.forgotPageDisp();
							cout<<"Note: Password should be minimum 8 character  and maximum 10 characters long\n\n";
							cout<<"Please set a new password: ";
							cin>>newPass;
							size2= strlen(newPass);
							if(size2<8)
							{
								cout<<"\n\nYour entered Password is less than 8 charecters. Make sure to enter Valid Password\n";
								check++;
							}
							if(size2>10)
							{
								cout<<"\n\nYour entered Password is greater than 10 charecters. Make sure to enter Valid Password\n";
								check++;
							}
							if(size2>10 || size2<8)
							disp.dispPressEnter();
						}while(check!=0 );
						li.fetchUserData();
						li.changePassAndWriteAgainInFile(userN,newPass,li.GetHead(),accountType);
						system("CLS");
						disp.forgotPageDisp();
						cout<<"Password Successfully changed\n";
						disp.dispPressEnter();
						t=2;
					}
				}while(t!=2);
			}
			else
			{
				system("CLS");
				disp.forgotPageDisp();
				cout<<"\n\n Account not found ";
				disp.dispPressEnter();
			}
		}
/*******************************************/
		bool checkIfAdminTrue()
		{
			system("CLS");
			display disp;
			fstream ownerAdmin;
			ownerAdmin.open("ownerAdmin.txt");
			if(!ownerAdmin)
			{
				cout<<"\n\n\n EROOR 404 \n\n\t\tNo admin found\n\n";
				disp.dispPressEnter();
				return 0;
			}
			else 
			return 1;					
		}
/*******************************************/
    	int loinAccount(char username[15], char userPass[10], int accountType)
    	{
    		display disp;
    		string userN,pass,MFN,MLN;
    		int count; // use as a check that user founded
    		switch(accountType)
			{
    			case 1:
    			{
    				ifstream admin("ownerAdmin.txt");
    				while(admin>>userN>>pass>>MFN>>MLN)
					{	
						if(pass==userPass && userN==username)
						{
								return 1;
						}
					}
					return 0;	
				}
				break;
				case 2:
			    {
			    	ifstream moderators("moderators.txt");
			    	ifstream modereq("ModeratorRequests.txt");
			    	while(moderators>>userN>>pass>>MFN>>MLN )
					{
						if(pass==userPass && userN==username)
						{
							return 1;
						}
					}	
					while(modereq>>userN>>pass>>MFN>>MLN)
					{
						if(pass==userPass && userN==username)
						{
							return 2;
						}
					}
					return 0;	
				}
				break;
    			case 3:
    			{
    				ifstream users("users.txt");
    				while(users>>userN>>pass>>MFN>>MLN)
					{
						if( pass==userPass && userN==username)
						{
							return 1;
						}
					}
					return 0;	
				}
				break;		
			}

		}
};
/////////////////////////////                    main                ///////////////////////////////////////////////////// 
int main()
{
	display disp;
	account acc;
	List li;
	int choice1,choice2,choice3,choice4,choice5; //we use diff choice for every case because if we use the same choice in nested case it might gives us wrong results at the end
	int req=0,error=0;
	do
	{
		system("CLS");
		disp.accountMenu();
		cin>>choice1;
		switch (choice1)
		{
/************   SIGN IN CASE   *******************************/
		case 1: 
		{
			char inputUN[15], inputPAS[10];//to take input of account password and usename we declear here so that it can be used for all (user, admin,moderator)
			do
			{
				system("CLS");
				disp.loginMenu();
				cin>>choice2;
				switch(choice2) //on sign in menu
				{
					case 1:
					{
						int c=acc.checkIfAdminTrue();
						if(c==1)
						{
							system("CLS");
							disp.signInPageDisplay();
							cout<<"Please Enter your Username :";
							cin>>inputUN;
							cout<<"\nPlease Enter Your Password:";
							cin>>inputPAS;
							int boolFlag=acc.loinAccount(inputUN,inputPAS,choice2);
							system("CLS");
							if(boolFlag==1)
							{
								disp.SuccessfullySignIn();
								int AdminChoice;
								do
								{
									system("CLS");
									disp.FumigationSysDefaultAfterLogin();
									cout<<"\n1)Moderator Requests\n";
									cout<<"2)Delete All Moderator Requests\n";
									cout<<"3)Accept All Moderator Requests\n";
									cout<<"4)All Moderators Data\n";
									cout<<"5)Delete Moderator\n";
									cout<<"6)Fumigated Users Data\n";
									cout<<"7)Sign Out\n";
									cout<<"8)Exit\n";
									cin>>AdminChoice;
									system("CLS");
									switch(AdminChoice)
									{
										case 1:
										{
											int AdminChoiceCase1;
											do
											{
												system("CLS");
												disp.FumigationSysDefaultAfterLogin();
												cout<<"Note: In option \"1)Display One by one\" every request displayed to\n";
												cout<<"you one with three option \"1)Accept\" , \"2)Reject\" , \"3)Skip\" , \n";
												cout<<"\"4)Back to Menu\" \n";
												cout<<"         While in option \"2)Display All request at once\" all pending\n";
												cout<<"Moderator requests will be displayed to you at once with index numbering\n";
												cout<<"along them so you have to enter an index to slect request number and then\n";
												cout<<"you can chose either you have to \"Accept\" that or \"Reject\" that or \n";
												cout<<"simply go back to menu\n";
												cout<<"\n\n\nInwhich way would you like to check for Requests:\n";
												cout<<"1)Display One by one\n";
												cout<<"2)Display All request at once\n";
												cout<<"3)Go back\n";
												cout<<"Enter Your Choice: ";
												cin>>AdminChoiceCase1;
												if(AdminChoiceCase1==1)
												{
													li.fetchModReqData();
													li.modReqOnebyOne();
												}
												else if(AdminChoiceCase1==2)
												{
													li.destructor(li.GetHead());
													li.fetchModReqData();
													li.dispAllRequest();
													li.destructor(li.GetHead());
												}
												else if(AdminChoiceCase1==3)
												{}
												else
												{
													disp.defaultDisp();
							        				disp.dispPressEnter();
												}
												disp.dispPressEnter();
											}while(AdminChoiceCase1!=3);
										}
										break;
										case 2:
										{
											system("CLS");
											disp.FumigationSysDefaultAfterLogin();
											cout<<"All Requests Deleted Successfully";
											ofstream file("ModeratorRequests.txt"); 
        									file<<"";//this will clear all data in users.txt file
											disp.dispPressEnter();
										}
										break;
										case 3:
										{
											system("CLS");
											disp.FumigationSysDefaultAfterLogin();
											li.acceptAll();
											cout<<"All Requests Approved Successfully";
											disp.dispPressEnter();
										}
										break;
										case 4:
										{
											system("CLS");
											disp.FumigationSysDefaultAfterLogin();
											ifstream users("moderatorsData.txt");
											int j=0;
											string userN,FFN,FLN,CNIC,phoneNum,age,email;
											cout<<"\nNote: Ths is the format of displaying data\n";
											cout<<"Index   | Username    |     Father Name      |     CNIC      |    Phone Number  |    Age    |  Email\n\n"<<endl<<endl;
    										while(users>>userN>>FFN>>FLN>>CNIC>>phoneNum>>age>>email)
											{
												j++;
												cout<<j<<")  "<<userN<<"   ,   "<<FFN<<" "<<FLN<<"   ,   "<<CNIC<<"   ,   "<<phoneNum<<"   ,   "<<age<<"   ,   "<<email<<endl<<endl;
											}
											disp.dispPressEnter();
										}
										break;
										case 5:
										{
											MList liM;
											system("CLS");
											disp.FumigationSysDefaultAfterLogin();
											liM.deleteModeratorAlongItsData();
										}
										break;
										case 6:
										{
											system("CLS");
											disp.FumigationSysDefaultAfterLogin();
											ifstream users("userData.txt");
											int j=0;
											string userN,FFN,FLN,CNIC,phoneNum,age,email;
											cout<<"\nNote: Ths is the format of displaying data\n";
											cout<<"Index   | Username    |     Father Name      |     CNIC      |    Phone Number  |    Age    |  Email\n\n"<<endl<<endl;
    										while(users>>userN>>FFN>>FLN>>CNIC>>phoneNum>>age>>email)
											{
												j++;
												cout<<j<<")  "<<userN<<"   ,   "<<FFN<<" "<<FLN<<"   ,   "<<CNIC<<"   ,   "<<phoneNum<<"   ,   "<<age<<"   ,   "<<email<<endl<<endl;
											}
											disp.dispPressEnter();
										}
										break;
										case 7:
										{
											system("CLS");
											cout<<"\n\n\nSign Out Successfully\n";
											disp.dispPressEnter();
										}
										break;
										case 8:
										{
											//done nothing just to avoid from default display
										}
										break;
										default:
										{
											disp.defaultDisp();
											disp.dispPressEnter();
										}
									}
								}while(AdminChoice!=7 && AdminChoice!=8);
								li.fetchUserData();	
							}
							else
								cout<<"\nInvalid Username or Password\n\n\t\t Please Enter Correct Ussername or Password\n";
						}
						disp.dispPressEnter();	
					}
					break;
					case 2:
					{
						int c=acc.checkIfAdminTrue();
						string email,fatherfirst,fatherlast,username,num;
						char number[11],cnic[13];
						int size1,size2,age,flag=0;
						if(c==1)
						{
							system("CLS");
							disp.signInPageDisplay();
							cout<<"Please Enter your Username :";
							cin>>inputUN;
							cout<<"\nPlease Enter Your Password:";
							cin>>inputPAS;
							int boolFlag=acc.loinAccount(inputUN,inputPAS,choice2);
							if(boolFlag==1)
							{
								req=0;
								ifstream moderator;
								moderator.open("moderatorsData.txt");
    							while(moderator>>username>>num)
								{
									if( username==inputUN)
									{
										cout<<"Your Request is already Submitted."<<endl;
										req=-1;
									}
								}
								if(req==0)
								{
									do
									{
										system("CLS");
										disp.SuccessfullySignIn();
										cout<<"Enter Father First Name: ";
										cin>>fatherfirst;
										cout<<"Enter Father Last Name: ";
										cin>>fatherlast;
										cout<<"Enter Age: ";
										cin>>age;
										cout<<"Enter Your Email: ";
										cin>>email;
										cout<<"Enter Your Phone Number: ";
										cin>>number;
										size1=strlen(number);
										if(size1==11)
										{
											flag++;
										}
										else
										{
											flag=0;
											cout<<"You Entered Wrong Number! Your Number Should be Like: 03123456789"<<endl;
										}
										cout<<"Enter Your CNIC: ";
										cin>>cnic;
										size2=strlen(cnic);
										if(size2==13)
										{
											flag++;
										}
										else
										{
											cout<<"You Entered Wrong CNIC! Your CNIC Should be Like: 0302345678987"<<endl;
											cout<<"Enter it without Spaces!"<<endl;
										}
											disp.dispPressEnter();
									}while(flag==0 || flag==1);
									disp.successfullRequest();
									fstream moderatorsData;
									moderatorsData.open("moderatorsData.txt",ios::app);
									moderatorsData<<inputUN<<' '<<fatherfirst<<' '<<fatherlast<<' '<<cnic<<' '<<number<<' '<<age<<' '<<email<<endl;
									moderatorsData.close();
								}
								int moderatorChoice;
								do
								{
									system("CLS");
									disp.FumigationSysDefaultAfterLogin();
									cout<<"\n1)Fumigation Requests\n";
									cout<<"2)Delete All Fumigation Requests\n";
									cout<<"3)Accept All Fumigation Requests\n";
									cout<<"4)All USER Data\n";
									cout<<"5)Sign Out\n";
									cout<<"6)Exit\n";
									cin>>moderatorChoice;
									system("CLS");
									switch(moderatorChoice)
									{
										case 1:
										{
											int ModeratorChoiceCase1;
											do
											{
												system("CLS");
												disp.FumigationSysDefaultAfterLogin();
												cout<<"Note: In option \"1)Display One by one\" every request displayed to\n";
												cout<<"you one with three option \"1)Accept\" , \"2)Reject\" , \"3)Skip\" , \n";
												cout<<"\"4)Back to Menu\" \n";
												cout<<"         While in option \"2)Display All request at once\" all pending\n";
												cout<<"Moderator requests will be displayed to you at once with index numbering\n";
												cout<<"along them so you have to enter an index to slect request number and then\n";
												cout<<"you can chose either you have to \"Accept\" that or \"Reject\" that or \n";
												cout<<"simply go back to menu\n";
												cout<<"\n\n\nInwhich way would you like to check for Requests:\n";
												cout<<"1)Display One by one\n";
												cout<<"2)Display All request at once\n";
												cout<<"3)Go back\n";
												cout<<"Enter Your Choice: ";
												cin>>ModeratorChoiceCase1;
												if(ModeratorChoiceCase1==1)
												{
													li.fetchfumiReqData();
												 	li.fumigationReqOnebyOne();
												}
												else if(ModeratorChoiceCase1==2)
												{
													li.destructor(li.GetHead());
													li.fetchfumiReqData();
													li.dispAllRequestfumi();
												 	li.destructor(li.GetHead());
												}
												else if(ModeratorChoiceCase1==3)
												{}
												else
												{
													disp.defaultDisp();
							        				disp.dispPressEnter();
												}
												disp.dispPressEnter();
											}while(ModeratorChoiceCase1!=3);
										}
										break;
										case 2:
										{
											system("CLS");
											disp.FumigationSysDefaultAfterLogin();
											cout<<"All Requests Deleted Successfully";
											ofstream file("Fumigation_Request.txt"); 
        									file<<"";//this will clear all data in users.txt file
											disp.dispPressEnter();
										}
										break;
										case 3:
										{
											system("CLS");
											disp.FumigationSysDefaultAfterLogin();
											li.acceptAllfumi();
											cout<<"All Requests Approved Successfully";
											disp.dispPressEnter();
										}
										break;
										case 4:
										{
											system("CLS");
											disp.FumigationSysDefaultAfterLogin();
											ifstream users("userData.txt");
											int j=0;
											string userN,FFN,FLN,CNIC,phoneNum,age,email;
											cout<<"\nNote: Ths is the format of displaying data\n";
											cout<<"Index |    Username     |     Father Name    |       CNIC      |  Phone Number  |    Age    |  Email"<<endl<<endl;
    										while(users>>userN>>FFN>>FLN>>CNIC>>phoneNum>>age>>email)
											{
												j++;
												cout<<j<<setw(8)<<" "<<userN<<setw(8)<<" "<<FFN<<FLN<<setw(5)<<" "<<CNIC<<setw(5)<<"  "<<phoneNum<<setw(9)<<" "<<age<<setw(8)<<"   "<<email<<endl;
											}
											disp.dispPressEnter();
										}
										break;
										case 5:
										{
											system("CLS");
											cout<<"\n\n\nSign Out Successfully\n";
											disp.dispPressEnter();
										}
										break;
										case 6:
										{
											//done nothing just to avoid from default display
										}
										break;
										default:
										{
											disp.defaultDisp();
											disp.dispPressEnter();
										}		
									}
								}while(moderatorChoice!=5 && moderatorChoice!=6);
								li.fetchUserData();
							}
							else if(boolFlag==2)
								cout<<"\n Your Moderator request Is Still pending \n\n \t\tPlease Try again latter\n";
							else
								cout<<"\nInvalid Username or Password\n\n\t\t Please Enter Correct Ussername or Password\n";
						}
						
						disp.dispPressEnter();
					}
					break;
					disp.dispPressEnter();
					case 3:
					{
						int c=acc.checkIfAdminTrue();
						if(c==1)
						{
							system("CLS");
							disp.signInPageDisplay(); 
							string email,fatherfirst,fatherlast,username,num;
							char number[11],cnic[13];
							int size1,size2,age,flag=0;
							cout<<"Please Enter your Username :";
							cin>>inputUN;
							cout<<"\nPlease Enter Your Password:";
							cin>>inputPAS;
							int boolFlag=acc.loinAccount(inputUN,inputPAS,choice2);
							if(boolFlag==1)
							{
								disp.signinuserDisplay();
								cin>>choice5;
								switch(choice5)
								{
								case 1:
									{
										req=0;
										ifstream fumigation;
										fumigation.open("Fumigation_Request.txt");
    									while(fumigation>>username>>num)
										{
											if( username==inputUN )
											{
												cout<<"Your Request is already Submitted."<<endl;
												req=-1;
											}
										}
										if(req==0)
										{
										do
										{
											system("CLS");
											disp.fumigationreqdisp();
											cout<<"Enter Father First Name: ";
											cin>>fatherfirst;
											cout<<"Enter Father Last Name: ";
											cin>>fatherlast;
											cout<<"Enter Age: ";
											cin>>age;
											cout<<"Enter Your Email: ";
											cin>>email;
											cout<<"Enter Your Phone Number: ";
											cin>>number;
											size1=strlen(number);
											if(size1==11)
											{
												flag++;
											}
											else
											{
												flag=0;
												cout<<"You Entered Wrong Number! Your Number Should be Like: 03123456789"<<endl;
											}
											cout<<"Enter Your CNIC: ";
											cin>>cnic;
											size2=strlen(cnic);
											if(size2==13)
											{
												flag++;
											}
											else
											{
												cout<<"You Entered Wrong CNIC! Your CNIC Should be Like: 0302345678987"<<endl;
												cout<<"Enter it without Spaces!"<<endl;
											}
											disp.dispPressEnter();
										}while(flag==0 || flag==1);
										disp.successfullRequest();
										fstream userData;
										userData.open("userData.txt",ios::app);
										userData<<inputUN<<' '<<fatherfirst<<' '<<fatherlast<<' '<<cnic<<' '<<number<<' '<<age<<' '<<email<<endl;
										userData.close();
										userData.open("Fumigation_Request.txt",ios::app);
										userData<<inputUN<<' '<<inputPAS<<' '<<fatherfirst<<' '<<fatherlast<<endl;
											}
									}
								
									break;
									case 2:
									{
										ifstream fumigation;
										fumigation.open("Fumigation_Request.txt");
    									while(fumigation>>username>>num)
										{
											if( username==inputUN )
											{
												cout<<"Your Request is on waiting List."<<endl;
											}
											else
											{
												error++;
											}
										}
										fumigation.close();
										fumigation.open("Fumigation.txt");
											while(fumigation>>username>>num)
										{
											if( username==inputUN )
											{
												cout<<"Your Request is Approved."<<endl;
											}
											else
											{
												error++;
											}
										}
										if(error==1||error==2)
										{
											cout<<"You Have Not Requested Yet!"<<endl;
										}
									disp.dispPressEnter();	
									}
									break;
								case 3:
									{
										string ff,fl;
										ifstream fumigation;
										fumigation.open("Fumigation.txt");
    									while(fumigation>>username>>num>>ff>>fl)
										{
											if( username==inputUN )
											{
												cout<<"Fumigation has been done."<<endl;
											}
											else
											{
												cout<<"Fumigation has not been done!"<<endl;
											}
										}
										fumigation.close();
									}
								break;
								case 4:
								{
									disp.exitDisp();
									return 0;
								}
							break;
							default:
							{
								disp.defaultDisp();
								disp.dispPressEnter();
							}
						}
							//we dont write anything in case 4 as it just call first menue which directely done when we came out of do while loop
						//but we have to mention it here as otherwise it would display as invalid choice
				
							}
							else
							cout<<"\nInvalid Username or Password\n\n\t\t Please Enter Correct Ussername or Password\n";
							disp.dispPressEnter();
					}

					}
					case 5:
						{
							disp.exitDisp();
							return 0;
						}
	}		
	}while( choice2!=4);
				
			
	
	}
		break;
//****************************************************************************************************************************
//****************************************************************************************************************************
		case 2://sign Up case 
			{
					do{
						
				system("CLS");
				disp.signUpMenu();
				cin>>choice3;
				switch(choice3) //on sign up muenu
				{
					case 1:
						{
							char inputUN[15], inputPAS[10];
							int sizeFlag=0;
							int size1,size2;//to check input charecters
							int chose;//we make a backup variable so that after coming out of do-while loop we can precisely choose that to which function we have to send data
							do{
							sizeFlag=0;
							system("CLS");
							disp.exectiveSignUpMenu();
							cin>>chose;
							if(chose==1)
							{
								fstream ownerAdmin;
								ownerAdmin.open("ownerAdmin.txt");
								if(!ownerAdmin)
								{
								system("CLS");
								}
								else
								{
									system("CLS");
									cout<<"\t\t\t*******************************************";
									cout<<"\n\t\t\t| There is already an Administrator account |\n";
									cout<<"\t\t\t*******************************************";
									cout<<"\n\nNote:Administrator can no more than one person You may\n";
									cout<<"creat an moderator account \n";
									disp.noteDisplayAdmin();
									chose=-1;
								}
							}
							if(chose==1)
							{	bool flag=true;
							int key=203078,key1;
								do
								{
								system("CLS");
								disp.signUpDisp();
							cout<<"Please set a Username :";
							cin>>inputUN;
							cout<<"\nPlease set a Strong Password:";
							cin>>inputPAS;
							cout<<"Please Enter Key: ";
							cin>>key1;
							if(key1==key)
							{
								flag=false;
							}
							else
							cout<<"You Enter Wrong Key!"<<endl;
							size1= strlen(inputUN);
							size2= strlen(inputPAS);
							disp.choeckForInputPassName(size1,size2);
							disp.dispPressEnter();
								}while(flag==true);
							}
							if(chose==2)
							{
								system("CLS");
								disp.signUpDisp();
							cout<<"Please set a Username :";
							cin>>inputUN;
							cout<<"\nPlease set a Strong Password:";
							cin>>inputPAS;
							size1= strlen(inputUN);
							size2= strlen(inputPAS);
							disp.choeckForInputPassName(size1,size2);
							disp.dispPressEnter();
							}
							else if(chose==4)
							{
								disp.exitDisp();
								return 0;
							}
						  
							
							else{
								cout<<"\n\n Invalid choice! ";
							}
							
							
							if(chose==-1)
							{
						//just make to prevent from else condition
							}
							if(size1<2 || size1>15 )
							{
								 sizeFlag++;
							}
							if(size2<8 || size2>10 )
							{
								 sizeFlag++;
							}
							//****************************
							if(sizeFlag==0 && chose==1 )
							{
								acc.signUpAsAdmin(inputUN,inputPAS);
							}
							else if(sizeFlag==0 && chose==2)
							{
								int c=acc.checkIfAdminTrue();
								if(c==1)
								{
									
									sizeFlag=acc.signUpAsModerator(inputUN,inputPAS);
									
								}
								
							}
							//*****************************
							}while(sizeFlag!=0 && chose!=3);
							
						}
					    break;
					case 2:
						{
								int c=acc.checkIfAdminTrue();
								if(c==1)
								{
							char inputUN[15], inputPAS[10];
							int sizeFlag;
							int size1,size2;//to check input charecters
							int choice;
							do{
								sizeFlag=0;
								system("CLS");
								disp.signUpDisp();
							cout<<"Please set a Username :";
							cin>>inputUN;
							cout<<"\nPlease set a Strong Password:";
							cin>>inputPAS;
							size1= strlen(inputUN);
							size2= strlen(inputPAS);
							disp.choeckForInputPassName(size1,size2);
							disp.dispPressEnter();
								if(size1<2 || size1>15 )
							{
								 sizeFlag++;
							}
							if(size2<8 || size2>10 )
							{
								 sizeFlag++;
							}
							
							if(sizeFlag==0)
							{
								sizeFlag=acc.signUpAsUser(inputUN,inputPAS);
							}
							
						   if(sizeFlag!=0)
							{
								do{
								cout<<"\n\n\nDo you want to try again ? \n\n";
								cout<<"1)Yes\n";
								cout<<"2)Back to menu\n";
								cout<<"3)Exit\n";
								cout<<"Enter your choice: ";
								cin>>choice;
								if(choice==3)
								{
							disp.exitDisp();
							return 0;
								}
								else if(choice<1 || choice>3)
								{
						disp.defaultDisp();
						disp.dispPressEnter();
								}
								
								}while(choice<1 || choice>3);
							
							}
							
								}while(sizeFlag!=0 &&choice!=2);
								
							
							
							}
							
						}
						break;
					//we dont write anything in case 3 as it just call first menue which directely done when we came out of do while loop
					//but we have to mention it here as otherwise it would display as invalid choice
					case 3:
						{
							
						}
						break;
					case 4:
						{
							disp.exitDisp();
							return 0;
						}
						break;
					default: 
					{
						disp.defaultDisp();
						disp.dispPressEnter();
					}
					
				}
				
				}while(choice3!=4 && choice3!=3);
				
			}
			break;
//****************************************************************************************************************************
//****************************************************************************************************************************
		case 3: //forgot password case 
			{
					do{
				system("CLS");
				disp.forgotMenu();
				cin>>choice4;
				switch(choice4)
				{
				case 1: //find your account take input of username and security question
				{
				
					char inputUN[15];
					string motherFirstName,motherLastName;
					int inp;
					do{
						system("CLS");
					disp.forgotPageDisp();
					cout<<"\n What type of your account was ?\n";
					cout<<"1)Admin Account\n";
					cout<<"2)Moderator Account\n";
					cout<<"3)User Account\n";
					cout<<"\nEnter your choice: ";
					
					cin>>inp;
					if(inp<1 || inp>3 )
					{
						disp.defaultDisp();
						disp.dispPressEnter();
					}
					}while(inp<1 || inp>3 );
					
					system("CLS");
					disp.forgotPageDisp();
					cout<<"\n\n Please Enter your user name: ";
					cin>>inputUN;
					system("CLS");
					disp.forgotPageDisp();
		cout<<"|Please Enter name as: \"abcd xyz\" where abcd is first name and xyz  is  |\n";
        cout<<"|last name or  just press enter after each name (first and last)  if you|\n";
        cout<<"|Enter any other name with as well like\"abcd xyz lmn\" than \"lmn\" will   |\n";
        cout<<"|be neglected .                                                         |\n";
        cout<<" ***********************************************************************\n";
					cout<<"\n\n\t|~~~~~~~~~~~| Security Question |~~~~~~~~~~~|\n\n";
					cout<<"Note: Make sure it will be the same name as you provided us erliar\n\n";
		
					cout<<"\n\n Please Enter your Mother First and Last Name: ";
					cin>>motherFirstName>>motherLastName;	
					acc.forgetAccountFind(inputUN, motherFirstName,motherLastName,inp);
					
				}
				break;
				//we dont writeanything in case 2 as it just call first home menue which directely done when we came out of do while loop
				//but we have to mention it here as otherwise it would display as invalid choice
				case 2:
					{
						
					}
					break;
					
				case 3:
				{
					disp.exitDisp();
					return 0;
				}
				break;
				default: 
					{
						disp.defaultDisp();
						disp.dispPressEnter();
					}
				}
				
				}while(choice4!=2);
			}
			break;
//****************************************************************************************************************************
//****************************************************************************************************************************
			case 4:
				{
					cout<<"Phone:   03000001214"<<endl;
					cout<<"Email:   infoFumigation.com.pk"<<endl;
					cout<<"Address: Khan Center, Sp Chok, Cantt, Multan"<<endl;
					disp.dispPressEnter();
				}
				break;
			case 5:
				{
				disp.disclaimer();
				disp.dispPressEnter();
				}
				break;
			case 6:
				{
				
				disp.exitDisp();
				return 0;
				}
//****************************************************************************************************************************
//****************************************************************************************************************************
				default:
					{
					disp.defaultDisp();
					disp.dispPressEnter();
					}
	
}
        }while(choice1!=6);
        	
}
