#include<iostream>

using namespace std;

class Log
{
    
    string username = "harsh999";
    string password = "ha12rs3h4";
    public:
        string newusrnm;
        string newpsd;
        string oldpwd;
        int  changeprofile(string n1,string n2,string n3)
        {
            if(password!= n3)
            {
                cout<<"Password Incorrect"<<endl;
                return 0;
            }
            username = n1;
            password = n2;
            cout<<"Login data changed successfully"<<endl;
            cout<<"new username : "<<username<<endl;
            cout<<"new password : "<<password<<endl;
            return 1;

        }
       
};

void Takeinput()
{
	#ifndef a
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int main()
{
    Takeinput();
    Log lg;
    cout<<"Enter the current password : "<<endl;
    cin>>lg.oldpwd;
    if(!lg.changeprofile(lg.newusrnm,lg.newpsd,lg.oldpwd))
    {
        cout<<"Wrong password";
        return 0;
    }
    cout<<"Enter the new username"<<endl;
    cin>>lg.newusrnm;
    cout<<"Enter the new password"<<endl;
    cin>>lg.newpsd;
    int c = lg.changeprofile(lg.newusrnm,lg.newpsd,lg.oldpwd);

    return 0;
}