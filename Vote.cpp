#include <iostream>

using namespace std;

int main()
{
    int age;
cout<<"Enter your Age:"<<endl;
cin>>age;
if(age>150)
{
    cout<<"It's Invalid Age, how are you alive?";
}
else if (age>=18){
    cout<<"You can VOTE!"<<endl;

}

else {
    cout<<"You cannot vote because you are underage.";
}

    return 0;
}

