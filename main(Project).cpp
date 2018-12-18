#include"plag.h"
void credits();
main()
{
    plag a,b;

    bool flag="false";
    int len1,len2,l=0;
    std::string result[n],file1[n],file2[n],name1,name2,*f1,*f2;
    credits();
    std::cout<<"Enter the Name of First File : ";
    std::cin>>name1;
    std::cout<<"Enter the Name of Second File : ";
    std::cin>>name2;
    a.get_file(name1);
    b.get_file(name2);
    a.del_char();
    b.del_char();
    a.del_keywords();
    b.del_keywords();
    a.copy_final();
    b.copy_final();
    len1=a.get_len();
    len2=b.get_len();
    f1=a.getFinal();
    f2=b.getFinal();

    for(int i=0;i<len1;i++)
    {
        file1[i] = *f1;
        f1++;
    }

    for(int i=0;i<len1;i++)
    {
        file2[i] = *f2;
        f2++;
    }

for(int i=0;i<len1;i++)
{
    for(int j=0;j<len2;j++)
    {
        if(file1[i]==file2[j])
        {
           result[l]=file1[i];
           l++;
           flag=true;
        }
    }
}


std::cout<<"\n\n\t\t:: Result ::";
if(flag==true)
    {

std::cout<<"\n\nPlagiarism is detected in "<<l<<" lines : \nwhich are :\n\n";
for(int i=0;i<l;i++)
{
std::cout<<"\t\t"<<result[i]<<std::endl<<std::endl;
}

    }
else{

    std::cout<<"\nNo Plagiarism Detected";
}


return 0;
}

void credits()
{
    for(int i=0;i<38;i++)
    {
        std::cout<<"*";
    }

    std::cout<<"\nName  : \tUmer Shaikh"<<std::endl<<std::endl;
    std::cout<<"Reg No. : \tCS152009"<<std::endl<<std::endl;
    std::cout<<"Title : \tPlagiarism Detector"<<std::endl<<std::endl;
    for(int i=0;i<38;i++)
    {
        std::cout<<"*";
    }
    std::cout<<std::endl<<std::endl;

}





