#include <iostream>
#include <string>
#include <fstream>
#include "important_information.h"
using namespace std;
class Log_in
{
public :

    string name;
    string E_mail;
    string type;
    void Setname(string x)
    {
        name=x;
    }

    string Getname()
    {
        return name;
    }
    void SetE_mail(string y)
    {
        E_mail=y;
    }
    string GetE_mail()
    {
        return E_mail;
    }

    void SetType(string x)
    {
        type=x;
    }

    string Gettype()
    {
        return type;
    }
};
class Job_applicant
{
public:
    string job_tiitle;
    string Certification ;
    string experience ;

    void SetJob_Title(string x)
    {
        job_tiitle=x;
    }


    string GetJobTitle()
    {
        return job_tiitle;
    }
    void SetCertification(string x)
    {
        Certification=x;
    }


    string GetCertification()
    {
        return Certification;
    }
    void Setexperience(string x)
    {
        experience=x;
    }


    string Getexperience()
    {
        return experience;
    }
};

int main()
{
    Log_in x;
    Job_applicant x1;
    Important_information y;
    cout<<"welcome in Wuzffuy"<<endl;

    cout<<"enter your name"<<endl;
    string name;
    getline(cin,name);
    x.Setname(name);

    cout<<"enter your email"<<endl;
    string email;
    getline(cin,email);
    x.SetE_mail(email);

    cout<<"please,enter Legal information [ This information is confidential and will not be shared with anyone ]"<<endl;

    cout<<"enter your age"<<endl;
    int age;
    cin>>age;
    y.SetAge(age);

    cout<<"enter your National ID"<<endl;
    int id;
    cin>>id;
    y.SetId(id);

    cout<<"Please enter your information correctly so that we can help you to find the right job"<<endl;

    cout<<"enter your job applicant"<<endl;
    string job;
    cin>>job;
    x1.SetJob_Title(job);

    cout<<"enter your Certification "<<endl;
    string certification;
    cin>>certification;
    x1.SetCertification(certification);

    cout<<"enter your experience "<<endl;
    string experience;
    cin>>experience;
    x1.Setexperience(experience);

    ofstream in;

    in.open("job.txt");

    in<<"Hello "+ x.Getname()<<endl;
    in<<"This is your information you entered :"<<endl;
    in<<"your E_mail : "+x.GetE_mail()<<endl;
    in<<"job title you went : "+x1.GetJobTitle()<<endl;
    in<<"your Certification : "+x1.GetCertification()<<endl;
    in<<"your experience : " + x1.Getexperience()<<endl;
    in<<"Thanks for submitting, we will get back to you within a week"<<endl;
    in<<"Please, if there is any wrong information, contact us via e-mail Job@gmail.com"<<endl;

    in.close();
    ifstream out("job.txt");
    string line;

    while(!out.eof())
    {

        getline(out, line);
        cout << line<<endl;
    }
    out.close();
    return 0;
}
