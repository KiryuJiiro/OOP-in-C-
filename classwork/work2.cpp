// #include<iostream>
// using namespace std;

// class student
// {
// public:
//     int marks;

//     student(int m)
//     {
//         marks=m;
//     }

//     student operator++()
//     {
//        int incr=marks++;
//        return student(incr);
//     }
// };


// int main()
// {
//     student x(40);
//     ++x;
//     cout<<"Marks = "<<x.marks;
//     return 0;

// }


// #include<iostream>
// using namespace std;

// class student{
// public:
//     int marks;

//     student(int m)
//     {
//         marks=m;
//     }

//     friend student operator++(student s);
// };


//     student operator++(student s)
//     {
//         int incr=s.marks++;
//         return student(s.marks);
//     }

//     int main()
//     {
//         student x(40);
//         student y=++x;
//         cout<<"Marks:"<<y.marks;
//         return 0;   
//     }


//BINARY OVERLOAD

// #include<iostream>
// using namespace std;

// class student{
// public:
//     int marks;

//     student(int m)
//     {
//         marks=m;
//     }

//     bool operator<(student s)
//     {
//         if(marks<s.marks)
//             return true;
//         else
//             return false;
//     }
// };

// int main()
// {
//     student x(70),zero(60);
//     if(x<zero)
//         cout<<"x has less marks";
//     else
//         cout<<"Zero has less marks";
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class student
// {
// public:
//     int marks;

//     student(int m)
//     {
//         marks=m;
//     }

//     friend student operator+(student s1,student s2);
// };

// student operator+(student s1,student s2)
// {
//     student totalmarks=s1.marks+s2.marks;
//     return totalmarks; 
// }

// int main()
// {
//     student x(50),zero(69);
//     student sum=x+zero;
//     cout<<"Marks is:"<<sum.marks;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class random
// {
//     public:
//     int ran;

//     random(int r)
//     {
//         ran=r;
//     }

//     bool operator!()
//     {
//         if(!ran==40)
//             return true;
//         else
//             return false;
//     }
// };

// int main()
// {
//     random x(40);
//     if(!x)
//         cout<<"not fourty";
//     else
//         cout<<"Fourty";
// }



// #include<iostream>
// using namespace std;

// class student
// {
// public:
//     int marks;

//     student(int m)
//     {
//         marks=m;
//     }

//     bool operator>(student s)
//     {
//         if(marks>s.marks)
//             return true;
//         else
//             return false;
//     }
// };

// int main()
// {
//     student s1(80),s2(60);
//     if(s1>s2)
//         cout<<"S1 has more marks";
//     else
//         cout<<"S2 has more marks";
// return 0;
// }




// #include<iostream>
// using namespace std;

// class ranking
// {
// public:
//     int rank;

//     ranking(int r)
//     {
//         rank=r;
//     }

//     friend ranking operator-(ranking r1,ranking r2);
// };

// ranking operator-(ranking r1, ranking r2)
// {
//     int reducedrank;
//     reducedrank=r1.rank-r2.rank;
//     return ranking(reducedrank);
// }

// int main()
// {
//     ranking Zero(6),X(9);
//     ranking reduced=Zero-X;
//     cout<<"Reduced ranking ="<<reduced.rank;
//     return 0;
// }

