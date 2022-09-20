#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

/*int fare(){										//function fare calculate fare btw two station
	int i,;
	
	
}*/


int user_check(char u2[9],char p2[9]){			//function user check it only work when username and password lenth is strictly defined.
	int i,j=0,r=0;								//it will return 0 if username and password match
	char u1[9],p1[9];							//it will return 1 if username and password  not match
	if(strlen(u2)==8&&strlen(p2)==8){
	ifstream uin;
	ifstream pin;
	uin.open("user.txt",ios::out);
	pin.open("pass.txt",ios::out);
	while(! uin.eof())
	{j=0;
	uin.getline(u1,9);
	 pin.getline(p1,9);
		if(i==7)goto A;
	 	for(i=0;u1[i]!='\0';i++)
		{
			if(u1[i]==u2[i]&& p1[i]==p2[i])
			{
				if(i==7){goto A;
				}
			}
			else
			{
			j++;
				break;
			}
		
			}
	}
	A:
		if(j==0){//cout<<"match found"; 
		return r; 
		
		}
		else {//cout<<"not match";
		r++;
		return r;
		}
	}
	else cout<<"invalid username and password!!!";
	
	}
	
	
int user_login(){			//function user login
	int j=0;
	char u2[8],p2[8];
	cout<<"\n enter username:";
	cin>>u2;
	cout<<"\n enter password:";
	cin>>p2;
	j=user_check(u2,p2);
	
	if(j==0){cout<<"login successful";return 0;
	}
	else {cout<<"invalid username and password";return 1;
	}
	}
 void create_user(){
 	char c='y',u[8],p[8];
 	
 	ofstream uout;
	ofstream pout;
	uout.open("user.txt",ios::app);
	pout.open("pass.txt",ios::app);
	while(c=='y'||c=='Y')
	{D: cout<<"Enter New Username:";
	cin>>u;
	cout<<"Enter password:";
	cin>>p;
	if(user_check(u,p)!=0)
	{uout<<'\n'<<u;
	pout<<'\n'<<p;
	cout<<"Enter Next User(y/n)... ";
	cin>>c;
	}
	else {cout<<"username already exist!!!"; goto D;
	}
	
	
	}
 }
 void modify_user(){
 ;}
 void show_user(){
 	char u1[9],p1[9];						
	int i=0;
	ifstream uin;
	ifstream pin;
	uin.open("user.txt",ios::out);
	pin.open("pass.txt",ios::out);
	cout<<"\tusername\tpassword\n";
	while(! uin.eof())
	{i++;
	uin.getline(u1,9);
	pin.getline(p1,9);
	cout<<i<<'\t'<<u1<<'\t'<<p1<<endl;
	
	
 }
 }
							

void del_user(){
	int i=0,j=0;
	char u1[9],p1[9];
	cout<<"to delete.... choose from the list";
	show_user();
	cin>>i;
	ifstream uin;
	ifstream pin;
	uin.open("user.txt",ios::out);
	pin.open("pass.txt",ios::out);
	
	ofstream tempu;
	ofstream tempp;
	tempu.open("tuser.txt",ios::app);
	tempp.open("tpass.txt",ios::app);
	while(! uin.eof())
	{j++;
	uin.getline(u1,9);
	pin.getline(p1,9);
	if(uin.eof())break;
	if(i!=j){
		tempu<<u1<<endl;
		tempp<<p1<<endl;
	}
	
	
 }

	tempu.close();	
	tempp.close();
	uin.close();
	pin.close();
	remove("user.txt");
	rename("tuser.txt","user.txt");
	remove("pass.txt");
	rename("tpass.txt","pass.txt");	
}
void create_new(){
	int tno,j=0,i=0,dist=0,slseat=0,acseat=0,slfare=0,acfare=0;
	char tname[20],src[20],dst[20],station[20],s;
	
	ofstream rout,dout;
	rout.open("train_route.txt",ios::app);
	dout.open("train_details.txt",ios::app);
	
	x:
	cout<<"Enter train no:"<<endl;
	cin>>tno;
	
	cout<<"Enter train name:"<<endl;
	cin>>tname;
	
	
	cout<<"Enter no. of stations";
	cin>>j;
	cout<<"Enter total seat in AC Berth";
	cin>>acseat;
	cout<<"Enter total seat in SL Berth";
	cin>>slseat;
	cout<<"Enter base fare for AC Berth";
	cin>>acfare;
	cout<<"Enter base fare for SL Berth";
	cin>>slfare;
	rout<<tno<<'\t'<<j<<'\t';
	dout<<tno<<'\t'<<tname<<'\t'<<j<<'\t'<<acfare<<'\t'<<slfare<<'\t'<<acseat<<'\t'<<slseat<<endl;
			for(i=0;i<j;i++){
					cout<<"Enter  "<<i+1<<" station code\t:";
						cin>>station;
						rout<<station<<'\t';
		
	
	}
		rout<<';'<<endl;
		
		for(i=0;i<j;i++)	
		{if(i==0);
		else{cout<<"Enter distance from source station (in km) : ";
		cin>>dist;
		}
		rout<<dist<<'\t';
		}
	rout<<';'<<endl;
	cout<<"Another  details (y/n)?...."<<endl;
	cin>>s;
	if(s=='y'||s=='Y'){goto x;
	}

rout.close();
dout.close();

	
 ;}
 void modify_route(){
 ;}
 void show_route(){
 ;}
void del_route(){
;}			
void admin_login(){
		int i,j=0;
	char u1[8],u2[8],p1[8],p2[8];
	cout<<"\n\t\t\t\t\tWELCOME TO ADMIN PORTAL";
	cout<<"\n enter username:";
	cin>>u2;
	cout<<"\n enter password:";
	cin>>p2;
	ifstream uin;
	ifstream pin;
	uin.open("admin.txt",ios::out);
	pin.open("adminpass.txt",ios::out);
	while(! uin.eof())
	{uin.getline(u1,8);
	 pin.getline(p1,8);

	 	for(int i=0;u1[i]!='\0';i++)
		{	if(u1[i]==u2[i]&&p1[i]==p2[i])
			{
			
			}
			else
			{cout<<"username and password not match....\n\t\tACCESS DENIED!!!!!";
			j++;
				break;
			}
			//cout<<"\t i:"<<i<<"\tj:"<<j<<endl;
			}
	}
		//cout<<"\n j:"<<j;
		if(j==0)											//cout<<"login successful";
			{	int c=0;									//for selection
			A:	cout<<"\n\t1-->USERS MENU:-";
				cout<<"\n\t2-->MAIN MENU:-"; 
				cout<<"\n\tChoose 1/2?";
				cin>>c;
				
				if(c==1)		
				{c=0;
				B:	cout<<"\n\t1. CREATE NEW USERS";		//create_user()
					cout<<"\n\t2. MODIFY EXISTING USERS";	//modify_user()
					cout<<"\n\t3. SHOW USERS";				//show_user()
					cout<<"\n\t4. DELETE USER";				//del_user()
					cout<<"\n\t5. PREVIOUS MENU";
					cin>>c;
						switch (c)
							{
   							 case 1:create_user();
      							break;
   							 case 2:modify_user();
        						break;
        					 case 3:show_user();
        						break;
        					 case 4:del_user();
        						break;
        					 case 5:goto A;
        						break;
    						default:cout<<"invalid selection!!!";goto B;
							}
				}	
				
				if(c==2)
				{c=0;
				C:	cout<<"\n\t1. CREATE NEW ROUTE";		//create_new()
					cout<<"\n\t2. MODIFY EXISTING ROUTE";	//modify_route()
					cout<<"\n\t3. SHOW ROUTES";				//show_route()
					cout<<"\n\t4. DELETE ROUTES";			//del_route()
					cout<<"\n\t5. PREVIOUS MENU";	
						cin>>c;
						switch (c)
							{
   							 case 1:create_new();
      							break;
   							 case 2:modify_route();
        						break;
        					 case 3:show_route();
        						break;
        					 case 4:del_route();
        						break;
        					 case 5:goto A;
        						break;
    						default:cout<<"invalid selection!!!";goto C;
							}	
				}	
							
				else 
				{cout<<"invalid selection";
				goto A;
				}
			}
}

	

int main(){
	admin_login();
	//create_user();
	//show_user();
	//del_user();
}
