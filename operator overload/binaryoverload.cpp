//USING MEMBER FUNCTION

#include<iostream>
using namespace std;

class student{
public:
    int marks;

student(int m)
{
    marks=m;
}

student operator+(student s){
    int totalmarks=marks+s.marks;
    return student(totalmarks);
}
};

int main()
{
    student X(200),Zero(300);
    student total =X+Zero;
    cout<<"total marks:"<<total.marks<<endl;
}



//USING FRIEND FUNCTION

// #include<iostream>
// using namespace std;

// class student{
// public:
//     int marks;
// friend student operator+(student s1,student s2);
// student(int m)
// {
//     marks=m;
// }


// };

// student operator+(student s1,student s2){
//     int totalmarks=s1.marks+s2.marks;
//     return student(totalmarks);
// }

// int main()
// {
//     student X(200),Zero(300);
//     student total =X+Zero;
//     cout<<"total marks:"<<total.marks<<endl;
// }

