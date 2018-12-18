#ifndef PLAG_H
#define PLAG_H
#include<iostream>
#include<algorithm>
#include<string.h>
#include<fstream>
#define n 9999


class plag
{
    private:
    std::string a[n],Final[n];
    int len;

    public:

plag(){};

int get_len()
{
    return len;
}





void get_file(std::string name)
{

    std::fstream temp;
    temp.open(name.c_str());
    int i=0;
    while(!temp.eof())
        {
            getline(temp,a[i]);
            i++;
        }
    temp.close();
    len=i;
}




void del_char()
{

char del[] = " ;(),:'{}[]#\"";
for(int i=0;i<len;i++)
 {
    for(int j=0;j<strlen(del);j++)
   {
      a[i].erase(remove(a[i].begin(),a[i].end(),del[j]),a[i].end());
   }
  }

}




void del_keywords()
{
    for(int i=0;i<len;i++)
    {

        int temp=a[i].find("main");
        if(temp!=-1)
        {
        a[i].erase(temp);
        }

        temp=a[i].find("usingnamespacestd");
        if(temp!=-1)
        {
        a[i].erase(temp);
        }

        temp=a[i].find("include");
        if(temp!=-1)
        {
        a[i].erase(temp);
        }


        temp=a[i].find("class");
        if(temp!=-1)
        {
        a[i].erase(temp);
        }
        temp=a[i].find("public");
        if(temp!=-1)
        {
        a[i].erase(temp);
        }
        temp=a[i].find("private");
        if(temp!=-1)
        {
        a[i].erase(temp);
        }
        temp=a[i].find("struct");
        if(temp!=-1)
        {
        a[i].erase(temp);
        }
        temp=a[i].find("operator");
        if(temp!=-1)
        {
        a[i].erase(temp);
        }

        temp=a[i].find("int");
        if(temp!=-1)
        {
        a[i].erase(temp,temp+3);
        }
        temp=a[i].find("float");
        if(temp!=-1)
        {
        a[i].erase(temp,temp+5);
        }
        temp=a[i].find("char");
        if(temp!=-1)
        {
        a[i].erase(temp,temp+4);
        }

        temp=a[i].find("cout");
        if(temp!=-1)
        {
        a[i].erase(temp,temp+4);
        }

        temp=a[i].find("cin");
        if(temp!=-1)
        {
        a[i].erase(temp,temp+3);
        }

        temp=a[i].find("endl");
        if(temp!=-1)
        {
        a[i].erase(temp,temp+4);
        }



        temp=a[i].find("long");
        if(temp!=-1)
        {
        a[i].erase(temp,temp+4);
        }

        temp=a[i].find("double");
        if(temp!=-1)
        {
        a[i].erase(temp,temp+6);
        }
        temp=a[i].find("unsigned");
        if(temp!=-1)
        {
        a[i].erase(temp,temp+8);
        }
        temp=a[i].find("string");
        if(temp!=-1)
        {
        a[i].erase(temp,temp+6);
        }

        temp=a[i].find("while");
        if(temp!=-1)
        {
            int t=a[i].find("!");
            int q=a[i].find(">");
            int w=a[i].find("<");
            int e=a[i].find("==");
            if(t!=-1)
            {
                a[i].erase(temp,t);
            }
            if(q!=-1)
            {
                a[i].erase(temp,q);
            }
            if(w!=-1)
            {
                a[i].erase(temp,w);
            }
            if(e!=-1)
            {
                a[i].erase(temp,e);
            }

        }

    temp=a[i].find("<<");
    if(temp!=-1)
    {
        a[i].erase(temp,temp+2);
    }
    temp=a[i].find(">>");
    if(temp!=-1)
    {
        a[i].erase(temp,temp+2);
    }



    temp=a[i].find("else");
    if(temp!=-1)
    {
        a[i].erase(temp,temp+4);
    }


        temp=a[i].find("if");
        if(temp!=-1)
        {
            int t=a[i].find("!");
            int q=a[i].find(">");
            int w=a[i].find("<");
            int e=a[i].find("==");
            if(t!=-1)
            {
                a[i].erase(temp,t);
            }
            if(q!=-1)
            {
                a[i].erase(temp,q);
            }
            if(w!=-1)
            {
                a[i].erase(temp,w);
            }
            if(e!=-1)
            {
                a[i].erase(temp,e);
            }
            }

    }

}





void copy_final()
{
    int j=0;
    for(int i=0;i<len;i++)
    {
        if(a[i]!="\0")
        {
            Final[j]=a[i];
            j++;
        }
    }
    len=j;
}

std::string* getFinal()
{
    std::string *ptr=&Final[0];
    return ptr;
}





        ~plag(){};
};




#endif // PLAG_H
