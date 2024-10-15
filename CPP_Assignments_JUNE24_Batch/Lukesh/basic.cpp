//#include<iostream>
//
//int main()
//{
//    std::cout<<"Personal Details"<<std::endl;
//    std::cout<<"Name : David Goggins"<<std::endl;
//    std::cout<<"Age : 35"<<std::endl;
//    std::cout<<"Contact Number : +15742868435"<<std::endl;
//    std::cout<<"Email-id : takingsouls@4040gmail.com"<<std::endl;
//    std::cout<<"Address : Williamsville, New York"<<std::endl;
//
//    return 0;
//}
//=============================================================================================================================================================
//#include <iostream>
//using namespace std;
//int main() {
//    cout << "Escape Sequence Characters Demo:\n";
//    cout << "1. Newline: Line 1\nLine 2\nLine 3\n";
//    cout << "2. Horizontal tab: Column 1\tColumn 2\tColumn 3\n";
//    cout << "3. Backspace: 123\b45\n";
//    cout << "4. Carriage return: 1234\rAB\n";
//    cout << "5. Backslash: C:\\path\\to\\file\n";
//    cout << "6. Single quote: It\'s raining.\n";
//    cout << "7. Double quote: She said, \"Hello.\"\n";
//    cout << "8. Null character: Hello\0World\n";
//    cout << "9. Alert (bell): Beep!\a Beep!\a Beep!\a\n";
//    cout << "10. Form feed: Page 1\fPage 2\n";
//    cout << "11. Vertical tab: Line 1\vLine 2\n";
//    cout << "12. Question mark: What\? Why\?\n";
//    cout << "13. Octal representation: \110\145\154\154\157\n";
//    cout << "14. Hexadecimal representation: \x48\x65\x6C\x6C\x6F\n";
//
//    return 0;
//}
//=============================================================================================================================================================

//#include <iostream>
//#include <windows.h>  // For Beep()
//using namespace std;
//
//int main() {
//    cout << "Playing sound with Beep function" << endl;
//    Beep(750, 300);  // Frequency in Hertz, Duration in milliseconds
//    Beep(750, 300);
//    Beep(750, 300);
//    return 0;
//}
//=============================================================================================================================================================
//#include<iostream>
//#include<iomanip>   // for manipulators
//using namespace std;
//
//int main()
//{
//    cout<<setw(20)<<"Name"<<setw(10)<<"Age"<<setw(15)<<"Salary"<<endl;
//    cout<<setw(20)<<"Jonthan"<<setw(10)<<"4875"<<setw(15)<<"1845334"<<endl;
//
//    double pi=3.14159265359;
//
//    cout<<setprecision(3)<<fixed<<"Pi :"<<pi<<endl;
//
//    double num=123456.789;
//    cout<<"Number :"<<num<<endl;
//
//    //right and left
//    cout<<setw(10)<<left<<"Left"<<setw(10)<<right<<"Right"<<endl;
//
//    //boolalpha
//
//    bool flag=false;
//    cout<<boolalpha<<"flag : "<<flag<<endl;
//
//    //hex,oct and dec
//    int value=255;
//
//    cout<<"Hex : "<<hex<<value<<endl;
//    cout<<"Oct : "<<oct<<value<<endl;
//    cout<<"Dec : "<<dec<<value<<endl;
//
//    return 0;
//}
//=============================================================================================================================================================
/// Constant and Literals (C++98)

//#include<iostream>
//
//int main()
//{
//    // declaring integer constant
//
//    const int MAX_VALUE=100;
//    const int MIN_VALUE=0;
//
//    //declaring floating point constatnt
//    const double PI=3.14159;
//    const float GRAVITY=9.81;
//
//    //declaring character constant
//    const char NEWLINE='\n';
//    const char TAB='\t';
//
//    //using constant in expression
//    int range=MAX_VALUE-MIN_VALUE;
//    double circumference =2*PI*5.0;
//
//
//    //outputting constants
//    std::cout<<"Range : "<<range<<NEWLINE;
//    std::cout<<"Circumference : "<<circumference<<NEWLINE;
//
//}

/// Using Const expr keyword : (C++11)

// #include<iostream>
// int main()
//{
//    constexpr int MAX_VALUE=100;
//    int num=5;
//
//    //print the values
//
//    std::cout<<"Max value : "<<MAX_VALUE<<std::endl;
//    std::cout<<"Num : "<<num<<std::endl;
//
//   // MAX_VALUE=300;  // error: assignment of read-only variable 'MAX_VALUE'
//
//
//    num=200;
//
//    std::cout<<"Max Value : "<<MAX_VALUE<<std::endl;
//    std::cout<<"Num : "<<num<<std::endl;
//
//    return 0;
//}
//
//=============================================================================================================================================================
/// Using Enum : (C++98)

// using unscoped
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    enum color {Red=7,Green=20,Blue};
//    enum Ink{Black,Pink,Yellow};// we cant use in another enum variable bcz it is constant
//
//    cout<<endl<<"color : "<<Red<<"\t"<<Green<<"\t"<<Blue;
//    cout<<endl<<"Colors : "<<Red<<"\t"<<Green<<"\t"<<Blue;
//
//    cout<<endl<<"INK :"<<Black<<"\t"<<Pink<<"\t"<<Blue;
//
//return 0;
//}

// using scoped

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    enum class color {red=7,green=20,blue};
//    enum class ink{black,pink,yellow,red};
//
//  // cout<<endl<<"color : "<<red<<"\t"<<green<<"\t"<<blue;
//   cout<<endl<<"color : "<<(int)color::red<<"\t"<<(int)color::green<<"\t"<<(int)color::blue;
//
//   cout<<endl<<"ink : "<<(int)ink::black<<"\t"<<(int)ink::pink<<"\t"<<(int)ink::yellow<<"\t"<<(int)ink::red;
//
//    return 0;
//
//}
//=============================================================================================================================================================
/// usage of #define preprocessor directive

//#include<iostream>
//#define PI_VALUE 3.14159
//int main()
//{
//     double radius=5.0;
//
//     double area=PI_VALUE*radius*radius;
//     std::cout<<"Area : "<<area;
// return 0;
//}

/// using using alias

//#include<iostream>
//using PI=double;
//
//constexpr PI PI_VALUE=3.14159;
//
//int main()
//{
//    double radius=5.0;
//
//    double area =PI_VALUE*radius*radius;
//    std::cout<<"Area : "<<area;
//
//return 0;
//}
//=============================================================================================================================================================
//#include<iostream>
//
//int main()
//{
//    int intvalue;
//    short shortvalue;
//    long  longvalue;
//    long long longlongvalue;
//
//    std::cout<<"Input The Different Types Of Integers : "<<std::endl;
//    std::cout<<"Enter The Integer Value : ";
//    std::cin>>intvalue;
//
//    std::cout<<"Enter The Short Int Value : ";
//    std::cin>>shortvalue;
//
//    std::cout<<"Enter The Long Value : ";
//    std::cin>>longvalue;
//
//    std::cout<<"Enter The Long Long Value : ";
//    std::cin>>longlongvalue;
//
//    std::cout<<std::endl<<"int value"<<"\t"<<sizeof(int)<<"\t"<<intvalue;
//    std::cout<<std::endl<<"short value"<<"\t"<<sizeof(short)<<"\t"<<shortvalue;
//    std::cout<<std::endl<<"long value"<<"\t"<<sizeof(long)<<"\t"<<longvalue;
//    std::cout<<std::endl<<"long long value"<<"\t"<<sizeof(long long)<<"\t"<<longlongvalue;
//
//    return 0;
//}
//=============================================================================================================================================================
/// Dynamic Declaration and Dynamic Initialization

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int pa;  // dynamic declaration
//    cout<<endl<<"Enter The Pr. Amount: ";
//    cin>>pa;
//
//    double roi;
//    cout<<endl<<"Enter The Rate Of Interest : ";
//    cin>>roi;
//
//    int noy;
//    cout<<endl<<"Enter The Number Of Years : ";
//    cin>>noy;
//
//    double si=pa*roi*noy;  //dynamic initialization
//
//    cout<<endl<<"Simple Interest : "<<si;
//
//    return 0;
//
//}

// DD: C++ allows yo to declare the variable anywhere in program before use it

// DI: initializing means assigning the value to the variable at the time of memory allocation if the value to variable is assigned at runtime is called dynamic initialization.
//=============================================================================================================================================================
// Fractional Data Input And Display

//#include<iostream>
//
//int main()
//{
//    float floatvalue;
//    double doublevalue;
//    long double longdoublevalue;
//
//   std::cout<<"Enter The Different Fractional Values : "<<std::endl;
//
//   std::cout<<"Enter The Fractional Value (Float) : ";
//   std::cin>>floatvalue;
//
//   std::cout<<"Enter The Fractional Value (Double) : ";
//   std::cin>>doublevalue;
//
//   std::cout<<"Enter The Fractional Value (Long double) : ";
//   std::cin>>longdoublevalue;
//
//   std::cout<<"Display The Input Fractional Values"<<std::endl;
//   std::cout<<floatvalue<<"\t"<<doublevalue<<"\t"<<longdoublevalue<<std::endl;
//   std::cout<<sizeof(float)<<"\t"<<sizeof(double)<<"\t"<<sizeof(long double);
//
//   return 0;
//
//}
//=============================================================================================================================================================
/// Dealing With Boolean Data

// the Boolean Data Type (bool keyword) is used to hold the result of condition. it gives the value 1 when result is true or gives the 0 when result is false

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    bool b1=true;
//    bool b2=false;
//
//    cout<<endl<<"b1 is"<<b1;
//    cout<<endl<<"b2 is"<<b2;
//
//    int x=34, y=56;
//
//    b1=x>y;
//    b2=x!=y;
//
//    cout<<endl<<"b1 is"<<b1;
//    cout<<endl<<"b2 is"<<b2;
//
//    cout<<boolalpha;
//
//    cout<<endl<<"b1 is "<<b1;
//    cout<<endl<<"b2 is "<<b2;
//    return 0;
//}
//=============================================================================================================================================================
// Using Character data type

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    char ch[10];
//    cout<<"Enter The Character : ";
//    cin>>ch;
//
//    cout<<"character is : "<<ch;
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
// int main()
//{
//    wchar_t ch;
//    wcout<<"Enter The Wide Character : "<<endl;
//    wcin>>ch;
//    wcout<<"Wide Character is "<<ch;
//
//
//return 0;
//
//}

/// character input output

//#include<iostream>
//
//int main()
//{
//    const int maxsize=100;
//    char ch[maxsize];
//
//    std::cout<<"Enter Any String With Spaces : ";
//  //  std::cin>>ch;
//  //  fflush(stdin);
//    std::cin.ignore(3);
//    std::cin.getline(ch,maxsize);
//
//    std::cout<<std::endl<<"Entered String is : "<<ch;
//
//    return 0;
//}
//=============================================================================================================================================================
/// Using Void Data Type

/* void :- we know tha if function does not return any value in response of function call we use void
         also when function does not collect any argument we use void

         ex. void show(void);
*/
//#include<iostream>
//using namespace std;
//int main()
//{
//    char ch='A';
//    float ft=3.4;
//    int x=3245;
//
//    void *gp; /// generic pointer
//
//    gp=&ch;
//    cout<<"ch using gp :"<<*(char*)gp<<endl;                 //Classic Way
//    cout<<"ch using gp :"<<*static_cast<char*>(gp)<<endl;    //Modern Way
//
//    gp=&ft;
//    cout<<"ch using gp :"<<*(float*)gp<<endl;
//    cout<<"ch using gp :"<<*static_cast<float*>(gp)<<endl;
//
//    gp=&x;
//    cout<<"ch using gp :"<<*(int*)gp<<endl;
//    cout<<"ch using gp :"<<*static_cast<int*>(gp)<<endl;
//    return 0;
//}
//=============================================================================================================================================================
///  :: (scope resolution operator):

//#include<iostream>
//using namespace std;
//int x=1000; // Global member
//int main()
//{
//	int x=100; // local to main()
//	cout<<"\n In main(upper) x: "<<x<<"\t global x: "<<::x;
//	{
//		int a=x; // local to inner scope
//		cout<<"\n Inner scope(upper) x: "<<x<<"\t a="<<a<<"\t global x: "<<::x;
//		int x=10;// local to inner scope
//		a=x;
//		cout<<"\n Inner scope(lower) x: "<<x<<"\t a="<<a<<"\t global x: "<<::x;
//	}
//	cout<<"\n In main(lower) x: "<<x<<"\t global x: "<<::x;
//	return 0;
//}
//=============================================================================================================================================================
/// new (memory allocation operator) and delete (Memory release operator):

//#include<iostream>
//#include<iomanip>
//
//using namespace std;
//
//int main()
//{
//    int cnt;
//    int *p;
//    cout<<"Enter The Count : ";
//    cin>>cnt;
//
//    p=new int[cnt];
//
//    cout<<"Enter The"<<cnt<<"Numbers"<<endl;
//
//    for(int i=0; i<cnt; i++)
//    {
//        cin>>*(p+i);
//    }
//
//
//	cout<<endl<<"Elements are: ";
//	for(int i=0;i<cnt;i++)
//	{
//		//cout<<"  "<<*(p+i);
//		//cout<<"\t"<<*(p+i);
//		//cout<<setw(6)<<*(p+i);
//	}
//
//    return 0;
//
//    delete(p); // memory release operator
//    cout<<"Elements Are :";
//
//    for(int i=0; i<cnt; i++)
//    {
//        cout<<*(p+i);
//    }
//
//    return 0;
//}
//=============================================================================================================================================================
/// pointer to constant

//#include<iostream>
//using namespace std;
//int main()
//{
////    char const *ptr="hello";
////    cout<<endl<<"string is: "<<ptr;
////
////    ptr="Good Day";
////    cout<<endl<<"string is: "<<ptr;
////
////    // *(ptr+2)='a'; // will generate the error coz it is refered by pointer to constant
//
///// constant pointer
//
//    char *const ptr1="how are you";
//    cout<<endl<<"string is: "<<ptr1;
//    *(ptr1+2)='a';
//    cout<<endl<<"now string is: "<<ptr1;
//
//   // ptr1="Bye Bye";   // error due to, you are trying to assign new address to constant pointer
//    cout<<endl<<"string is: "<<ptr1;
//
///// combination of both
//
//  const char* const ptr2="good day";
//    cout<<"\n ptr2 is: "<<ptr2;
//
//    // ptr2="see you"; // error: con not modify the const object
//    // *(ptr2+2)='a'; // error: con not modify the const object
//
//
//return 0;
//}
//=============================================================================================================================================================
/// Function (reference)

//#include<iostream>
//using namespace std;
//int main()
//{
//    int x=10;
//    int &y=x;
//
//    cout<<"x is "<<x<<"\t"<<"y is "<<y<<endl;
//
//    x=100;
//    cout<<"x is "<<x<<"\t"<<"y is "<<y<<endl;
//
//    y=200;
//    cout<<"x is "<<x<<"\t"<<"y is "<<y<<endl;
//
//return 0;
//}

/// call by value

//#include<iostream>
//using namespace std;
//
//void swap(int x,int y)
//{
//    int tmp;
//    tmp=x;
//    x=y;
//    y=tmp;
//
//}
//
//int main()
//{
//    int a=1,b=2;
//    cout<<"Before Swapping : "<<a<<" "<<b<<endl;
//    swap(a,b);
//    cout<<"After Swapping : "<<a<<" "<<b<<endl;
//
//    return 0;
//}

// Call By Reference - using pointer

//#include<iostream>
//using namespace std;
//
//void swap(int *x,int *y)
//{
//    int tmp;
//    tmp=*x;
//    *x=*y;
//    *y=tmp;
//
//}
//
//int main()
//{
//    int a=1,b=2;
//    cout<<"Before Swapping : "<<a<<" "<<b<<endl;
//    swap(&a,&b);
//    cout<<"After Swapping : "<<a<<" "<<b<<endl;
//
//    return 0;
//}

/// Call By reference- Using reference variate

//#include<iostream>
//using namespace std;
//
//void swap(int& x,int& y)  // Thodkyat Dusre NAV Dile
//{
//    int tmp;
//    tmp=x;
//    x=y;
//    y=tmp;
//
//}
//
//int main()
//{
//    int a=1,b=2;
//    cout<<"Before Swapping : "<<a<<" "<<b<<endl;
//    swap(a,b);
//    cout<<"After Swapping : "<<a<<" "<<b<<endl;
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int add(int,int);
//
//int main()
//{
//    int a,b,sum;
//    cout<<"Enter The Two Numbers : ";
//    cin>>a>>b;
//
//    sum=add(a,b);
//    cout<<"Sum is "<<sum;
//
//    return 0;
//}
//
// int add(int x,int y)
// {
//     int t=x+y;
//     return t;
// }

/// Inline Function

//#include<iostream>
//using namespace std;
//
// inline int squre(int t)
//{
//	return (t*t);
//}
//
//int main()
//{
//	int no,ans;
//	cout<<endl<<"Enter any number: ";
//	cin>>no;
//	ans=squre(no);
//	cout<<endl<<"Squre of "<<no<<" is "<<ans;
//	return 0;
//}

/// Function With Reference Argument And Reference Return

//#include<iostream>
//using namespace std;
//
//int& findmax(int& x, int& y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a,b;
//
//	cout<<endl<<"Enter two numbers: ";
//	cin>>a>>b;
//
//	int& t=findmax(a,b);
//
//	cout<<endl<<"max is: "<<t; // Actualy it will assigns name to max value location
//	return 0;
//}

/// Function With Default Argument


//#include<iostream>
//using namespace std;
//float findintr( int pa, float roi=12.1, int noy=5)
//{
//    float ans=(pa*roi*noy)/100;
//    return ans;
//}
//int main()
//{
//    int p,n;
//    float r,si;
//
//    cout<<endl<<"Enter the values of p,r and n: ";
//    cin>>p>>r>>n;
//
//    si=findintr(p,r,n);
//    cout<<endl<<"SI1:"<<si;
//
//    si=findintr(p,r,n);
//    cout<<endl<<"SI2:"<<si;
//
//    si=findintr(p);
//    cout<<endl<<"SI3:"<<si;
//
//    return 0;
//}

/// Function With Constant Argument


//#include<iostream>
//using namespace std;
//int countpalindromes(const int y[])  // try run without const and use y[i] in while rather than no
//{
//    int no,rev,cnt=0;
//    for(int i=0;i<5;i++)
//    {
//        no=y[i];
//        rev=0;
//        while(no!=0)
//        {
//            rev=(rev*10)+(no%10);
//            no=no/10;
//        }
//        if(y[i]==rev)
//        {
//            cnt++;
//        }
//    }
//    return cnt;
//}
//int countodds(int y[])
//{
//    int cnt=0;
//    for(int i=0;i<5;i++)
//    {
//        if(y[i]%2!=0)
//        {
//            cnt++;
//        }
//    }
//    return cnt;
//}
//int main()
//{
//    int x[5]={11,22,3693,44,55};
//
//    cout<<endl<<"Array is: ";
//    for(int i=0;i<5;i++)
//    {
//        cout<<"   "<<x[i];
//    }
//    int pnc=countpalindromes(x);
//    cout<<endl<<"Palindrome number Count: "<<pnc;
//
//    int ec=countodds(x);
//    cout<<endl<<"Even Count: "<<ec;
//
//    return 0;
//}


/// Function Overloading

//#include<iostream>
//using namespace std;

//int calcsum(int p, int q)
//{
//	return p+q;
//}*/
//int calcsum(int a, int b)
//{
//	return a+b;
//}
//int calcsum(int a, int b,int c)
//{
//	return a+b+c;
//}
//int calcsum(int a, int b,int c,int d)
//{
//	return a+b+c+d;
//}
//int main()
//{
//	int a,b,c,ans;
//
//	cout<<endl<<"Enter any three int values: ";
//	cin>>a>>b>>c;
//
//	ans=calcsum(a,b);
//	cout<<endl<<"ans: "<<ans;
//
//	ans=calcsum(a,b,c);
//	cout<<endl<<"ans: "<<ans;
//
//	ans=calcsum(a,b,c,100);
//	cout<<endl<<"ans: "<<ans;
//return 0;
//}


/// char --> int --> long --> float --> double --> long double


//#include <iostream>
//using namespace std;
//void add(int a, int b, int c)
//{
//	cout<<endl<<"Addition 1 is: "<<(a+b+c);
//}
//void add(float a, float b)
//{
//	cout<<endl<<"Addition 2 is: "<<(a+b);
//}
//
//int main()
//{
//    int x,y;
//    cout<<endl<<"Enter The Two Int Values :";
//    cin>>x>>y;
//    add(x,y); // x and y is promoted to float
//
//    int z;
//    cout<<endl<<"Enter The Single Int Value :";
//    cin>>z;
//    add(x,y,z);
//
//    float p,q;
//    cout<<endl<<"Enter The Two Float Values :";
//    cin>>p>>q;
//    add(p,q);
//
//   return 0;
//}

/// Class And Object

//#include<iostream>
//using namespace std;
//
//struct bacont{
//
//char nm[40];
//int accno;
//char pass[20];
//
//};
//
//  int main()
//{
//    struct bacont b;
//
//    cout<<endl<<"Enter The Account Holder Name : ";
//    cin.getline(b.nm,40);
//
//    cout<<endl<<"Enter The Account Number : ";
//    cin>>b.accno;
//
//    cout<<endl<<"Enter The Account Password : ";
//    cin>>b.pass;
//
//    cout<<endl<<"Account Holder Name : "<<b.nm<<" "<<"Account Number : "<<b.accno<<" "<<"Account Password : "<<b.pass;
//
//
//return 0;
//}


///  Due To Several Advantages We Use Function Modular Approach

//#include<iostream>
//using namespace std;
//
//struct BankAccount
//{
//	char nm[40];
//	int accno;
//	char pass[20];
//};
//void input(struct BankAccount& t)
//{
//	cout<<endl<<"enter the account holder name: ";
//	cin.getline(t.nm,40);
//	cout<<endl<<"enter the account number: ";
//	cin>>t.accno;
//	cin.ignore();
//	cout<<endl<<"enter the account password: ";
//	cin.getline(t.pass,40);
//}
//void display(struct BankAccount k)
//{
//	cout<<endl<<"Name: "<<k.nm<<"\t Account Number: "<<k.accno<<"\t Password: "<<k.pass;
//}
//int main()
//{
//	struct BankAccount b1,b2;
//
//	input(b1);
//	display(b1);
//
//	input(b2);
//	display(b2);
//
//	return 0;
//}

/// Using Class


//#include<iostream>
//using namespace std;
//
//class BankAccount
//{
//  private:
//	char nm[40];
//	int accno;
//	char pass[20];
//
//  public:
//	void input()
//	{
//		cout<<endl<<"enter the account holder name: ";
//		cin.getline(nm,40);
//		cout<<endl<<"enter the account number: ";
//		cin>>accno;
//		cout<<endl<<"enter the account password: ";
//		cin.ignore();
//		cin.getline(pass,40);
//	}
//	void display()
//	{
//		cout<<endl<<"Name: "<<nm<<"\t Account Number: "<<accno<<"\t Password: "<<pass;
//	}
//};
//
//int main()
//{
//	BankAccount b1, b2;
//
//	b1.input();
//	b2.input();
//
//	b1.display();
//	b2.display();
//
//	return 0;
//}
//==========================================================================================================================================================
/// Create the class student and input/display the info of two students.

//#include<iostream>
//using namespace std;
//
//class student{
//
//  private:
//      char nm[20];
//      int rno;
//      int age;
//      float per;
//
//  public:
//
//    void input()
//    {
//        cout<<"Enter The Name :";
//        cin.ignore();
//        cin.getline(nm,20);
//
//        cout<<"Enter The Roll No, Age,Per :";
//        cin>>rno>>age>>per;
//    }
//
//    void output()
//    {
//        cout<<"Name :"<<nm<<"\t";
//        cout<<"Roll No :"<<rno<<"\t Age :"<<age<<" \t Percentage :"<<per;
//        cout<<endl;
//    }
//
//};
//
//int main()
//{
//    student s1,s2;
//
//    s1.input();
//    s2.input();
//
//    s1.output();
//    s2.output();
//
//    return 0;
//}
//==========================================================================================================================================================
/// Passing The Arguments To Member Function

//#include<iostream>
//#include<string.h>
//using namespace std;
//
//class student{
//
// private :
//  char nm[20];
//  int rno;
//  int age;
//  float per;
//
// public:
//         void input(char a_nm[20],int a_rno, int a_age, float a_per)
//         {
//             strcpy(nm,a_nm);
//             rno=a_rno;
//             age=a_age;
//             per=a_per;
//         }
//
//          void display()
//          {
//              cout<<endl<<"Name :"<<nm<<"  "<<"Roll No :"<<rno<<"  "<<"Age :"<<age<<"  "<<"Percentage :"<<per;
//          }
//
//};
//
//int main()
//{
//    student s1,s2;
//
//    s1.input("Ram",21,18,94);
//
//    char m_nm[20];
//    int m_rno;
//    int m_age;
//    float m_per;
//
//    cout<<"Enter The Student Name :";
//    cin.getline(m_nm,20);
//    cout<<endl<<"Enter The Roll Number :";
//    cin>>m_rno;
//    cout<<endl<<"Enter The Age :";
//    cin>>m_age;
//    cout<<endl<<"Enter The Percentage :";
//    cin>>m_per;
//
//    s2.input(m_nm, m_rno, m_age, m_per);
//
//    s1.display();
//    s2.display();
//
// return 0;
//
//}
//==========================================================================================================================================================
/// Defining member function outside of class

//#include<iostream>
//
//using namespace std;
//
//class student{
//
// private:
//     char nm[20];
//     int rno;
//     int age;
//     float per;
//
// public:
//    void input();
//    void display();
//
//};
//
// void student ::input()
// {
//     cout<<"Enter The Student Name : ";
//     cin>>nm;
//     cout<<endl<<"Enter The Roll No, Age, Percentage : ";
//     cin>>rno>>age>>per;
// }
//
// void student ::display()
//{
//    cout<<"Name :"<<nm<<"  "<<"Roll No: "<<rno<<"  "<<"Age :"<<age<<"  "<<"Percentage :"<<per;
//    cout<<endl;
//}
//
//int main()
//{
//    student s1,s2;
//
//     s1.input();
//    // s2.input();
//
//     s1.display();
//   //  s2.display();
//
//return 0;
//}
//==========================================================================================================================================================
/// Array of Object

//#include<iostream>
//using namespace std;
//
//class Item{
//
//   private:
//        int icode;
//        float ipr;
//
//   public:
//
//        void input()
//        {
//            cout<<endl<<"Enter The Item Code And Price : ";
//            cin>>icode>>ipr;
//        }
//
//        void display()
//        {
//            cout<<endl<<"Item Code : "<<icode<<"\t"<<"Item Price : "<<ipr;
//        }
//};
//
//int main()
//{
//    Item arr[3];
//    int i;
//
//    cout<<"Enter The Details Of 3 Items";
//
//    for(i=0; i<3; i++)
//    {
//        arr[i].input();
//    }
//
//    cout<<endl<<"Item Details";
//
//    for(i=0; i<3; i++)
//    {
//        arr[i].display();
//    }
//
//return 0;
//}
//==========================================================================================================================================================
/// Pointer To Object

//#include<iostream>
//using namespace std;
//
//class Item{
//
//   private:
//        int icode;
//        float ipr;
//
//   public:
//
//        void input()
//        {
//            cout<<endl<<"Enter The Item Code And Price : ";
//            cin>>icode>>ipr;
//        }
//
//        void display()
//        {
//            cout<<endl<<"Item Code : "<<icode<<"\t"<<"Item Price : "<<ipr;
//        }
//};
//
//int main()
//{
//    Item arr[3];
//    int i;
//
//    cout<<"Enter The Details Of 3 Items";
//
//    for(i=0; i<3; i++)
//    {
//        arr[i].input();
//    }
//
//    cout<<endl<<"Item Details";
//
//    for(i=0; i<3; i++)
//    {
//        arr[i].display();
//    }
//
//return 0;
//}

/** Same program Using Pointer Notations  */

//#include<iostream>
//using namespace std;
//
//class Item{
//
//  private:
//        int icoode;
//        float ipr;
//
//  public:
//          void input()
//          {
//              cout<<endl<<"Enter The Item Code :";
//              cin>>icoode;
//
//              cout<<"Enter The Item Price :";
//              cin>>ipr;
//          }
//
//          void display()
//          {
//              cout<<endl<<"Item Code :"<<icoode<<"\t"<<"Item Price :"<<ipr;
//          }
//};
//
//int main()
//{
//    int cnt,i;
//    Item *p;
//
//    cout<<"Enter The Count :";
//    cin>>cnt;
//
//    p=new Item[cnt];
//
//    cout<<endl<<"Enter The Items Details :"<<endl;
//
//    for(i=0; i<cnt; i++)
//    {
//        (p+i)->input();
//    }
//
//    for(i=0; i<cnt; i++)
//    {
//        (p+i)->display();
//    }
//
//return 0;
//
//}
//==========================================================================================================================================================
/// Returning Data From Member Function

//#include<iostream>
//using namespace std;
//
//class Item{
//
//private:
// int ino;
// float ipr;
//
//public:
//       void input()
//       {
//           cout<<endl<<"Enter The Item Number :";
//           cin>>ino;
//           cout<<"Enter The Item Price :";
//           cin>>ipr;
//       }
//
//       void display()
//       {
//           cout<<endl<<"Item no :"<<ino<<"\t"<<"Item Price :"<<ipr;
//       }
//
//       float getprice()
//       {
//           return ipr;
//       }
//
//};
//
//int main()
//{
//    int cnt,i;
//    float tot=0.0;
//    Item *p;
//
//    cout<<"Enter The Item Count :";
//    cin>>cnt;;
//
//    p=new Item [cnt];
//
//    cout<<"Enter The Item Details";
//
//    for(i=0; i<cnt; i++)
//    {
//        (p+i)->input();
//    }
//
//    for(i=0; i<cnt; i++)
//    {
//        (p+i)->display();
//    }
//
//    // Total Calculation
//
//    for(i=0; i<cnt; i++)
//    {
//        tot+=(p+i)->getprice();
//    }
//    cout<<endl<<"Total Amount :"<<tot;
//
//  return 0;
//}
//==========================================================================================================================================================
/// Function Overloading

//#include<iostream>
//using namespace std;
//
//class rect{
//
//   private:
//
//       int len;
//       int br;
//
//   public:
//
//    void input()
//    {
//        cout<<endl<<"Enter The Length And Breadth : ";
//        cin>>len>>br;
//    }
//
//    void input(int x)
//    {
//        len=x;
//        br=x;
//    }
//    void input(int a, int b)
//    {
//       len=a;
//       br=b;
//    }
//    void output()
//    {
//        cout<<endl<<"Length :"<<len<<"\t"<<"Breadth :"<<br;
//    }
//    int area()
//    {
//        return (len*br);
//    }
//
//};
//
//int main()
//{
//    rect r1,r2,r3;
//
//     r1.input();
//     r1.output();
//     cout<<endl<<"Area Of Rectangle :"<<r1.area();
//
// r2;
//    r2.input(5);
//    r2.output();
//    cout<<endl<<"Area Of Rectangle :"<<r2.area();
//
// r3;
//    int x,y;
//    cout<<endl<<"Enter The Length And Breadth : ";
//    cin>>x>>y;
//
//    r3.input(x,y);
//    r3.output();
//    cout<<endl<<"Area Of Rectangle :"<<r3.area();
//
//return 0;
//}
//==========================================================================================================================================================
/// Nesting Of Member Function

//#include<iostream>
//using namespace std;
//
//class Number{
//
//  private:
//
//     int no;
//
// public:
//
//     void input(int n)
//     {
//         no=n;
//     }
//     void output()
//     {
//         cout<<endl<<"Number :"<<no;
//     }
//
//     int getrev()
//     {
//         int tmp=no;
//         int rev=0;
//
//         while(tmp!=0)
//         {
//             rev=(rev*10)+(tmp%10);
//
//         tmp=tmp/10;
//         }
//         return rev;
//     }
//
//     char palindrome()
//     {
//         if(no==getrev())
//         {
//             return 'y';
//         }
//         else
//         {
//             return 'n';
//         }
//     }
//
//};
//
//
//int main()
//{
//    int n;
//    cout<<"Enter The Number : ";
//    cin>>n;
//
//   Number p1;
//   p1.input(n);
//   p1.output();
//   cout<<endl<<"Reverse :"<<p1.getrev();
//
//   Number p2;
//   cout<<endl<<"Enter The Number : ";
//   cin>>n;
//   p2.input(n);
//   p2.output();
//
//   char ans=p1.palindrome();
//
//   if(ans=='y')
//    cout<<endl<<"Number is Palindrome";
//   else
//    cout<<endl<<"Number is Not Palindrome";
//
//return 0;
//
//}
//==========================================================================================================================================================

///  Array As Member Of Class

// #include<iostream>
// using namespace std;
//
// class myarray{
//
//  private:
//   int x[10];
//
//  public:
//    void in()
//    {
//      cout<<endl<<"Enter The 10 Nos : ";
//      for(int i=0; i<10; i++)
//      {
//        cin>>x[i];
//      }
//
//    }
//
//    void out()
//    {
//        cout<<"10 Numbers Are :";
//        for(int i=0; i<10; i++)
//        {
//            cout<<"  "<<x[i];
//        }
//    }
//
// };
//
//int main()
//{
//    myarray ob;
//
//    ob.in();
//    ob.out();
//
// return 0;
//}


/// Adding One More Function

// #include<iostream>
// using namespace std;
//
// class myarray{
//
//  private:
//   int x[10];
//
//  public:
//    void in()
//    {
//      cout<<endl<<"Enter The 10 Nos : ";
//      for(int i=0; i<10; i++)
//      {
//        cin>>x[i];
//      }
//
//    }
//
//    void out()
//    {
//        cout<<"10 Numbers Are :";
//        for(int i=0; i<10; i++)
//        {
//            cout<<"  "<<x[i];
//        }
//    }
//
//    int getprime()
//    {
//        int i,flg,d,cnt=0;
//
//        for(i=0;  i<10; i++)
//        {
//            flg=0;
//            d=2;
//            while(d<=(x[i]/2))
//            {
//                if(x[i]%d==0)
//                {
//                    flg=1;
//                    break;
//                }
//            d++;
//            }
//            if(flg==0 && x[i]>1)
//             cnt++;
//        }
//        return cnt;
//    }
//
// };
//
//int main()
//{
//    myarray ob;
//
//    ob.in();
//    ob.out();
//
//    int t=ob.getprime();
//    cout<<endl<<"Prime Count = "<<t;
//
// return 0;
//}
//==========================================================================================================================================================
/// Pointer As Member Of Class

// #include<iostream>
// using namespace std;
//
// class Dynamictype{
//
//   private:
//         int *p;
//         int cnt;
//
//   public:
//            void input()
//            {
//                cout<<endl<<"Enter The Count : ";
//                cin>>cnt;
//
//                p=new int[cnt];
//
//                cout<<endl<<"Enter The "<<cnt<<" Elements :";
//
//                for(int i=0; i<cnt; i++)
//                {
//                    cin>>*(p+i);
//                }
//            }
//            void output()
//            {
//                for(int i=0; i<cnt; i++)
//                {
//                    cout<<" "<<*(p+i);
//                }
//            }
//
//            int evcnt()
//            {
//                int ec;
//                for(int i=0; i<cnt; i++)
//                {
//                    if(*(p+i)%2==0)
//                        ec++;
//                }
//                return ec;
//            }
//
// };
//
//
//  int main()
// {
//    Dynamictype ob;
//    ob.input();
//    ob.output();
//
//    cout<<endl<<"Even Count : "<<ob.evcnt();
//
// return 0;
//
// }
//==========================================================================================================================================================
/// Passing Object As Argument To Member Function

//#include<iostream>
//using namespace std;
//
//class Complex{
//
// private:
//        int real;
//        float img;
//
// public:
//
//       void input()
//       {
//           cout<<"Enter The Real Part Of Number :";
//           cin>>real;
//           cout<<"Enter The Imaginary Part Of Number :";
//           cin>>img;
//       }
//       void output()
//       {
//           cout<<real<<"+j"<<img;
//
//       }
//
//       void addcomplex(Complex x, Complex y)   //member function
//       {
//           real=x.real+y.real;
//           img=x.img+y.img;
//       }
//
//};
//
// int main()
//{
//  Complex a1,a2,a3;
//
//   a1.input();
//   a2.input();
//
//   cout<<endl<<"a1=";
//   a1.output();
//   cout<<endl<<"a2=";
//   a2.output();
//
//   a3.addcomplex(a1,a2);            // passing object as argument
//
//   cout<<endl<<"a3=";
//   a3.output();
//
// return 0;
//}

/** Another Way    (Returning Object From Member Function) */

//#include<iostream>
//using namespace std;
//
//class Complex{
//
//  private:
//          int real;
//          float img;
//
//  public:
//         void input()
//         {
//             cout<<endl;
//             cout<<"Enter The Real Part Of The Number : ";
//             cin>>real;
//
//             cout<<"Enter The Imaginary Part Of The Number : ";
//             cin>>img;
//         }
//
//         void output()
//         {
//             cout<<real<<"+j"<<img;
//         }
//
//         Complex addcomplex(Complex x)
//         {
//           Complex t;
//
//            t.real=real+x.real;
//            t.img=img+x.img;
//
//            return t;
//         }
//    };
//
// int main()
//{
//    Complex a1,a2,a3;
//
//    a1.input();
//    a2.input();
//
//    cout<<"a1=";
//    a1.output();
//
//    cout<<endl<<"a2=";
//    a2.output();
//
//    a3=a1.addcomplex(a2);
//
//    cout<<endl<<"a3=";
//    a3.output();
//
//      cout<<"\n";
//
//   return 0;
//}


/** Using Friend Function  */

// #include<iostream>
// using namespace std;
//
//class Complex{
//
// private:
//         int real;
//         float img;
//
// public:
//        void input()
//        {
//            cout<<"Enter The Real Part Of The Number :";
//            cin>>real;
//            cout<<"Enter The Imaginary Part Of The Number :";
//            cin>>img;
//        }
//
//        void output()
//        {
//            cout<<real<<"+j"<<img;
//
//        }
//        friend Complex addcomplex( Complex x, Complex y);
//} ;
//
//Complex addcomplex(Complex x, Complex y)
//{
//    Complex t;
//    t.real=x.real+y.real;
//    t.img=x.img+y.img;
//
//   return t;
//}
//
//
//int main()
//{
//    Complex a1,a2,a3;
//    a1.input();
//    a2.input();
//
//    cout<<"a1=";
//    a1.output();
//
//    cout<<endl<<"a2=";
//    a2.output();
//
//    a3=addcomplex(a1,a2);
//
//    cout<<endl<<"a3=";
//    a3.output();
//
// return 0;
//
//}
//==========================================================================================================================================================
/// Write A Program To Add Two Time Object

//#include<iostream>
//using namespace std;
//
// class time{
//
// private:
//        int hh,mm,ss;
//
// public:
//
//        void input()
//        {
//            cout<<"Enter The HH:MM:SS : ";
//            cin>>hh>>mm>>ss;
//        }
//
//        void output()
//        {
//            cout<<hh<<":"<<mm<<":"<<ss;
//        }
//
//        time timeadd(time x)
//        {
//            time tmp;
//
//            tmp.ss=ss+x.ss;                      // 7:40:55
//            tmp.mm=mm+x.mm+(tmp.ss/60);          // 4:35:20
//            tmp.ss=tmp.ss%60;                    //_________
//                                                 //12 16 15
//            tmp.hh=hh+x.hh+(tmp.mm/60);
//            tmp.mm=tmp.mm%60;
//
//            return tmp;
//
//        }
//
// };
//
//
// int main()
//{
//    time t1,t2,t3;
//
//    t1.input();
//    t2.input();
//
//    t3=t1.timeadd(t2);
//
//    t3.output();
//
// return 0;
//}

/** Another Way  */

//#include<iostream>
//using namespace std;
//
//class Time{
//
// private:
//          int hh,mm,ss;
// public:
//          void input()
//          {
//              cout<<"Enter The HH:MM:SS";
//              cin>>hh>>mm>>ss;
//          }
//
//          void output()
//          {
//              cout<<hh<<":"<<mm<<":"<<ss;
//          }
//
//          void addtime(Time x, Time y)
//          {
//              ss=x.ss+y.ss;
//              mm=x.mm+y.mm+(ss/60);
//              ss=ss%60;
//
//              hh=x.hh+y.hh+(mm/60);
//              mm=mm%60;
//          }                               /* T1: 3:40:45
//                                            T2: 5:30:50
//                                            T3: 9:11:35 */
//
//};
//
//int main()
//{
//    Time t1,t2,t3;
//
//    t1.input();
//    t2.input();
//
//    t3.addtime(t1,t2);
//
//    cout<<endl<<"T1: ";t1.output();
//    cout<<endl<<"T2: ";t2.output();
//    cout<<endl<<"T3: ";t3.output();
//
//return 0;
//
//}

/** Another Way  */

//#include<iostream>
//using namespace std;
//
//class Time
//{
//  private:
//	int hh;
//	int mm;
//	int ss;
//
//  public:
//	void intime()
//	{
//		cout<<endl<<"Enter the HH:MM:SS: ";
//		cin>>hh>>mm>>ss;
//	}
//	void outtime()
//	{
//		cout<<hh<<":"<<mm<<":"<<ss;
//	}
//	void addtime(int x,Time b)			// 10: 10 : 10
//	{						            // 3 : 40 : 55
//							            //-1----1-------
//		ss = b.ss + x;				    // 13 : 51 : 05
//		mm = b.mm + x + (ss/60);
//		ss = ss%60;
//
//		hh = b.hh + x + (mm/60);
//		mm = mm%60;
//	}
//};
//int main()
//{
//	Time t1, t2, t3;
//
//	t1.intime();
//	t2.intime();
//
//	t3.addtime(10,t2);
//
//	cout<<endl<<"T1: "; t1.outtime();
//	cout<<endl<<"T2: "; t2.outtime();
//	cout<<endl<<"T3: "; t3.outtime();
//
//	return 0;
//}
//==========================================================================================================================================================
/// Static Data Member And Static Member Function

//#include<iostream>
//
//using namespace std;
//
//class Item{
//
//  private:
//          int icd;
//          float ipr;
//          static float tot;
//  public:
//
//        void input()
//        {
//            cout<<"Enter The Item Code And Item Price: ";
//            cin>>icd>>ipr;
//            tot=tot+ipr;
//        }
//        void output()
//        {
//            cout<<endl<<"Item Code: "<<icd<<"\t Price: "<<ipr;
//        }
//
//        void showtot()
//        {
//            cout<<"\n Total: "<<tot;
//        }
//
//};
//
//float Item::tot;
//
// int main()
// {
//     Item i1,i2,i3;
//
//     i1.input();
//     i2.input();
//     i3.input();
//
//     i1.output();
//     i2.output();
//     i3.output();
//
//     i1.showtot(); // i_.showtot();
//
//return 0;
// }
//==========================================================================================================================================================
/// Static Data Members And Static Member Function

//#include<iostream>
//using namespace std;
//
//class Item{
//
// private:
//         int code;
//         float pr;
//        static float tot;
//
// public:
//        void input()
//        {
//            cout<<endl<<"Enter The Item Code And Item Price : ";
//            cin>>code>>pr;
//
//            tot+=pr;
//        }
//
//        void output()
//        {
//           cout<<endl<<"Item Code : "<<code<<"\t Item Price : "<<pr;
//        }
//
//        static void showtot()
//        {
//            cout<<endl<<"Total Bill: "<<tot;
//        }
//};
//
// //float Item ::tot;
// float Item ::tot=100;
//
//int main()
//{
//    Item::showtot();     // By Default It is Zero At Starting Of Execution of program
//
//    Item i1,i2,i3;
//
//    i1.input();
//    i2.input();
//    i3.input();
//
//    i1.output();
//    i2.output();
//    i3.output();
//
//
//    Item::showtot();
//
// return 0;
//}

/** Another Example  */

//#include<iostream>
//using namespace std;
//
//class Player{
//
// private:
//
//     char nm[20];
//     int code;
//     int runs;
//
//     static int s50,s100;
//
// public:
//
//     void input()
//     {
//         cout<<"Enter The Player Code, Player Name, Player Runs, : ";
//         cin>>code>>nm>>runs;
//
//         if(runs>=100)
//         {
//             s100++;
//         }
//         else if(runs>=50)
//         {
//             s50++;
//         }
//     }
//
//     void output()
//     {
//         cout<<endl<<"Player Code : "<<code<<"\t Player Name : "<<nm<<"\t Player Runs : "<<runs;
//     }
//     static void all()
//     {
//         cout<<endl<<"No Of 100s : "<<s100<<"\t No Of 50s : "<<s50;
//     }
//};
//
// int Player::s50=0;
// int Player::s100=0;
//
//int main()
//{
//    Player p[5];
//
//    for(int i=0; i<5; i++)
//    {
//        p[i].input();
//    }
//
//    cout<<endl<<"Score Card ";
//
//    for(int i=0; i<5; i++)
//    {
//        p[i].output();
//    }
//
//
//   Player::all();
//
// return 0;
//
//}

/** Using Static Method  */

//#include<iostream>
//using namespace std;
//
//class Number{
//
//  public:
//
//         static square(int n)
//         {
//             return n*n;
//         }
//
//         static cube(int n)
//         {
//             return n*n*n;
//         }
//         static even(int n)
//         {
//             if(n%2==0)
//             {
//                 return 'y';
//             }
//             else
//             {
//                 return 'n';
//             }
//         }
//         static getmax(int a, int b)
//         {
//             if(a>b)
//             {
//                 return a;
//             }
//             else
//             {
//                 return b;
//             }
//         }
//};
//
//
//int main()
//{
//    int no;
//    cout<<"Enter The Number : ";
//    cin>>no;
//
//    cout<<"\n Square Of"<<no<<"is : "<<Number::square(no);
//
//    cout<<"Enter Any Number : ";
//    cin>>no;
//
//    cout<<"\n Cube Of "<<no<<"is :"<<Number::cube(no);
//
//    if(Number::even(no)=='y')
//    {
//        cout<<"Number is Even";
//    }
//    else
//    {
//        cout<<"Number is Odd";
//    }
//
//    int m=Number::getmax(no,100);
//
//    cout<<"Max Number is "<<m;
//
//return 0;
//
//}

//==========================================================================================================================================================
/**  Friend Function

		- outside function as a friend of class
		- Member function of one class as a friend of another
		- friend class - all member functions of one class as a friend of another class

*/


/** Outside Function As A Friend Of Class */

//#include<iostream>
//using namespace std;
//
//class Person{
//
// private:
//         char nm[20];
//         int age;
//
// public:
//        void input()
//        {
//            cout<<endl<<"Enter The Name And Age Of The Person : ";
//            cin>>nm>>age;
//        }
//
//        void output()
//        {
//            cout<<endl<<"Name : "<<nm<<"\t Age: "<<age;
//        }
//        friend void show(Person);
//
//};
//
//void show(Person a)
//{
//  cout<<endl<<"Name : "<<a.nm<<"\t Age: "<<a.age;
//}
//
//
//int main()
//{
//    Person p;
//
//    p.input();
//    p.output();
//
//    show(p);
//
//return 0;
//}

/** Outside Function is Friend Of One Or More Classes */
//
//#include<iostream>
//using namespace std;
//
//class Person1{
//
// private:
//         char nm[20];
//         int age;
//
// public:
//
//         void input()
//         {
//             cout<<"Enter The Name,Age Of The Person : ";
//             cin>>nm>>age;
//         }
//
//         void display()
//         {
//             cout<<"Name : "<<nm<<"\t Age :"<<age;
//         }
//
//       friend void elder(Person1 p1, Person2 p2);
//};
//
//class Person2{
//
// private:
//         char nm[20];
//         int age;
//
// public:
//         void input()
//          {
//             cout<<"Enter The Name,Age Of The Person : ";
//             cin>>nm>>age;
//         }
//
//         void display()
//         {
//             cout<<"Name : "<<nm<<"\t Age :"<<age;
//         }
//
//      friend void elder(Person1, Person2);
//};
//
// void elder(Person1 x, Person2 y)
// {
//     if(x.age>y.age)
//     {
//         cout<<"Name :"<<x.age<<"\t Age : "<<x.age;
//     }
//     else
//     {
//          cout<<"Name :"<<y.age<<"\t Age : "<<y.age;
//     }
// }
//
//int main()
//
//{
//    Person1 p1;
//
//    p1.input();
//    p1.display();
//
//    p2.input();
//    p2.display();
//
//    elder(p1,p2);
//}


/** - Member function of one class as a friend of another  */


//#include<iostream>
//#include<string.h>
//using namespace std;
//class Person;
//class Student
//{
//   private:
//	char nm[50];
//	int age;
//   public:
//	void in()
//	{
//		cout<<endl<<"Enter the name of student: ";
//		cin.ignore();
//		cin.getline(nm,50);
//
//		cout<<endl<<"Enter the age: ";
//		cin>>age;
//	}
//	void display()
//	{
//		cout<<endl<<"Student Details - Name: "<<nm<<"\t Age: "<<age;
//	}
//	void findelder(Person p);
//};
//
//class Person
//{
//   private:
//	char nm[50];
//	int age;
//   public:
//	void in()
//	{
//		cout<<endl<<"Enter the name of person: ";
//		cin.getline(nm,50);
//
//		cout<<endl<<"Enter the age: ";
//		cin>>age;
//	}
//	void display()
//	{
//		cout<<endl<<"Person Details - Name: "<<nm<<"\t Age: "<<age;
//	}
//	friend void Student::findelder(Person p);
//};
//
//void Student::findelder(Person p)
//{
//    cout<<endl<<"Elder Details"<<endl;
//    if(age>p.age)
//    {
//        display();
//    }
//    else
//    {
//        p.display();
//    }
//}
//
//int main()
//{
//	Person p;
//	p.in();
//
//	Student s;
//	s.in();
//
//	p.display();
//	s.display();
//
//	s.findelder(p);
//	return 0;
//}

/**  friend class - all member functions of one class as a friend of another class  */


//#include<iostream>
//#include<string.h>
//using namespace std;
//class B;
//class A
//{
//   private:
//	int a;
//	friend class B;
//};
//class B
//{
//    private:
//	int b;
//    public:
//	void in(A& ob)
//	{
//		cout<<"Enter the val of a: ";
//		cin>>ob.a;
//		cout<<"Enter the val of b: ";
//		cin>>b;
//	}
//	void out(A ob)
//	{
//		cout<<endl<<"a: "<<ob.a;
//		cout<<endl<<"b: "<<b;
//	}
//};
//int main()
//{
//	A ob1;
//	B ob2;
//
//	ob2.in(ob1);
//	ob2.out(ob1);
//
//	return 0;
//}

// Swaping the private data of class using friend function

//#include<iostream>
//#include<string.h>
//using namespace std;
//
//class B;
//class A
//{
//   private:
//	int a;
//   public:
//	void in()
//	{
//		cout<<"Enter the val of a: ";
//		cin>>a;
//	}
//	void out()
//	{
//		cout<<endl<<"a: "<<a;
//	}
//	friend void swapdata(A &a1, B &b1);
//};
//class B
//{
//    private:
//	int b;
//    public:
//	void input()
//	{
//		cout<<"Enter the val of b: ";
//		cin>>b;
//	}
//	void output()
//	{
//		cout<<endl<<"b: "<<b;
//	}
//	friend void swapdata(A &a1, B &b1);
//};
//void swapdata(A &a1, B &b1)
//{
//    int tmp;
//    tmp=a1.a;
//    a1.a=b1.b;
//    b1.b=tmp;
//}
//int main()
//{
//    A ob1;
//    B ob2;
//
//    ob1.in();
//    ob2.input();
//
//    cout<<endl<<"---------- Before Swap -------------";
//    ob1.out();
//    ob2.output();
//
//    swapdata(ob1,ob2);
//
//    cout<<endl<<"---------- After Swap -------------";
//    ob1.out();
//    ob2.output();
//
//    return 0;
//}


//==========================================================================================================================================================


//#include<iostream>
//#include<string.h>
//using namespace std;
//
//class Sample
//{
//	int data;
//    public:
//	Sample()
//	{
//		cout<<"\n Object is created";
//		data=100;
//	}
//	~Sample()
//	{
//		cout<<"\n Object is Deleted";
//	}
//	void indata()
//	{
//		cout<<endl<<"Enter the data: ";
//		cin>>data;
//	}
//	void outdata()
//	{
//		cout<<"Data is: "<<data;
//	}
//};
//int main()
//{
//	Sample ob1;
//
//	cout<<endl<<"Before input: ";
//    	cout<<endl<<"For Ob1: ";
//	ob1.outdata();
//
//	ob1.indata();
//    	cout<<endl<<"For Ob1: ";
//	ob1.outdata();
//
//	{
//	    Sample ob2;
//	    cout<<endl<<"For Ob2: ";
//	    ob2.outdata();
//	}
//    	cout<<endl<<"Main ends";
//	return 0;
//}
//
//==========================================================================================================================================================

//#include<iostream>
//#include<string.h>
//using namespace std;
//class Demo
//{
//	static int cnt;
//    public:
//	Demo()
//	{
//		cnt++;
//		cout<<"\n Object "<<cnt<<" is created";
//	}
//	~Demo()
//	{
//		cout<<"\n Object "<<cnt<<" is deleted";
//		cnt--;
//	}
//};
//int Demo::cnt;
//int main()
//{
//	cout<<endl<<"\n program start";
//
//	Demo d1,d2;
//
//	cout<<endl<<"\n In main";
//	{
//		cout<<endl<<"\n At start of inner scope";
//		Demo d3,d4;
//		cout<<endl<<"\n At end of inner scope";
//	}
//	cout<<endl<<"\n out of inner scope";
//
//	cout<<endl<<"\n program end";
//
//	return 0;
//}
//
//
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int x[10],y[10],tmp[10],z[10];
//    int j,cnt;
//    cout<<"Enter The X Array Elements :";
//
//    int i=0;
//    while(i<5)
//    {
//        cin>>x[i];
//   i++;
//    }
//    cout<<endl<<"Enter The Y Array Elements :";
//
//    i=0;
//    while(i<5)
//    {
//        cin>>y[i];
//    i++;
//    }
//    /* Displaying X Array */
//
//     i=0;
//    while(i<5)
//    {
//        cout<<" "<<x[i];
//   i++;
//    }
//    cout<<endl;
//
//    /* Displaying Y Array */
//
//     i=0;
//    while(i<5)
//    {
//        cout<<" "<<y[i];
//    i++;
//    }
//
//    cout<<endl;
//
// /* Processing  */
//
//    for(i=0; i<5; i++)
//    {
//        for(j=0; j<5; j++)
//        {
//             if(x[i]==x[j])
//            {
//                tmp[j]=x[i];
//                x[i]=x[i+1];
//                cnt++;
//            }
//        }
//    }

/* Copying */

//    i=0;
//    while(i<cnt)
//    {
//        z[i]=x[i];
//  i++;
//    }
//
//    i=0;
//    while(i<cnt)
//    {
//        cout<<" "<<x[i];
//   i++;
//    }
//
// /* Displaying Z Array Elements */
//
//    i=0;
//    while(i<=10)
//    {
//        cout<<" "<<z[i];
//  i++;
//    }
//
//
//    return 0;
//}
//==========================================================================================================================================================

//#include<iostream>
//using namespace std;
//
//class Demo{
//
// private: static int cnt;
//
// public:
//
//     Demo()
//      {
//             cnt++;
//          cout<<endl<<"\nObject "<<cnt<<" is Created";
//      }
//     ~Demo()
//     {
//         cout<<endl<<"\nObject "<<cnt<<" is Deleted";
//         cnt--;
//     }
//};
//
//
//int Demo::cnt;
//
//int main()
//{
//    cout<<endl<<"\nProgram Start";
//    Demo ob1,ob2;
//
//    cout<<endl<<"\nIn Main";
//
//    {
//        cout<<endl<<"\nStarting Of Inner Scope";
//        Demo ob3,ob4;
//        cout<<endl<<"\nEnding Of Inner Scope";
//    }
//    cout<<endl<<"\nOut Of Inner Scope";
//
//    cout<<endl<<"\nProgram End";
//
//return 0;
//}
//==========================================================================================================================================================
/**                         Different Types Of Constructor

                         1. Default Constructor - It Will Not Collect Any Argument
*/

// #include<iostream>
// using namespace std;
//
// class Demo{
//
//    int x;
//
// public:
//
//        Demo()
//        {
//            x=10;
//            cout<<endl<<"\n Object is Created";
//        }
//        input()
//        {
//            cout<<endl<<"Enter The X : ";
//            cin>>x;
//        }
//
//        output()
//        {
//            cout<<endl<<"\n X : "<<x;
//        }
// };
//
//int main()
//{
//    Demo ob;
//
//    ob.output();
//
//    ob.input();
//    ob.output();
//
//return 0;
//}

///  Defining Constructor Outside Of The Class

//#include<iostream>
//using namespace std;
//
//class Demo{
//
//      int x;
//
//  public:
//
//      Demo();
//
//      void input()
//      {
//          cout<<endl<<"\n Enter The X : ";
//          cin>>x;
//      }
//
//      void output()
//      {
//          cout<<endl<<"\n X is : "<<x;
//      }
//
//};
//
//Demo::Demo()
//{
//     x=10;
//     cout<<endl<<"\n Default Constructor";
//}
//
//int main()
//{
//    Demo ob;
//
//    ob.output();
//
//    ob.input();
//    ob.output();
//
//return 0;
//}


/**     2. Parameterized Constructor - It Collects The Arguments */

//#include<iostream>
//using namespace std;
//
//class Demo
//{
//
//    int x;
//    float y;
//    double z;
//
//public:
//
//    Demo()
//    {
//        cout<<endl<<"\n Parameterized Constructor";
//        x=1;
//        y=2.5;
//        z=25.45;
//    }
//
//    Demo(int a, float b, double c)
//    {
//        cout<<endl<<"\n Parameterized Constructor";
//        x=a;
//        y=b;
//        z=c;
//    }
//
//    Demo(int t)
//    {
//        cout<<endl<<"\n Parameterized Constructor";
//        x=t;
//        y=t;
//        z=t;
//    }
//
//    Demo output()
//    {
//        cout<<endl<<"\n X:"<<x<<" "<<"Y:"<<y<<" "<<" Z:"<<z;
//    }
//};
//
//
//int main()
//{
//    Demo ob1;
//
//    ob1.output();
//
//    int a=11;
//    float b=3.3;
//    double c=33.33;
//
//    Demo ob2(a,b,c);  // Implicit Call
//    ob2.output();
//
//    Demo ob3=Demo(a,b,c);  // Explicit Call
//    ob3.output();
//
//    Demo ob4(10);
//    ob4.output();
//
//    return 0;
//
//}


/** Dynamic Constructor - Dynamic Memory is Allocated Within Constructor is Called Dynamic Constructor */

//#include<iostream>
//using namespace std;
//
//class Yo
//{
//
//private:
//
//    int *p;
//    int cnt;
//
//public:
//
//    Yo() // dynamic constructor
//    {
//        p=new int [5];
//
//        cout<<endl<<"Enter The 5 Numbers :";
//
//        int i=0;
//        while(i<5)
//        {
//            cin>>*(p+i);
//            i++;
//        }
//    }
//
//    Yo (int cnt)  // dynamic constructor
//    {
//
//        p=new int [cnt];
//
//        cout<<endl<<"Enter The 5 Numbers : ";
//
//        int i=0;
//        while(i<cnt)
//        {
//            cin>>*(p+i);
//            i++;
//        }
//    }
//
//
//    void display()
//    {
//        int i=0;
//        while(i<5)
//        {
//            cout<<" "<<*(p+i);
//            i++;
//        }
//    }
//
//};
//
//
//
//int main()
//{
//    Yo ob1;
//
//    ob1.display();
//
//    Yo ob2(7);
//    ob2.display();
//
//    return 0;
//}

/** Copy Constructor  */

//#include<iostream>
//using namespace std;
//
//class cls{
//
// private:
//          int x;
//          float y;
//          double z;
//
// public:
//
//          cls()  //default constructor
//          {
//               x=11;
//               y=2.2;
//               z=33.33;
//          }
//
//          cls(int a, float b, double c) // parameterized constructor
//          {
//              x=a;
//              y=b;
//              z=c;
//          }
//
//          cls(cls &p) //copy constructor
//          {
//              x=p.x;
//              y=p.y;
//              z=p.z;
//          }
//
//          void display()
//          {
//              cout<<endl<<"x="<<x<<" "<<"y="<<y<<" "<<"z="<<z;
//          }
//
//};
//
//
//
//int main()
//{
//    cls ob1;
//
//    ob1.display();
//
//    cls ob2(45,65.8,88.14);
//    ob2.display();
//
//    cls ob3=(ob2);
//    ob3.display();
//
// return 0;
//}


/// Passing default arguments to constructor:



// #include<iostream>
// using namespace std;
//
// class A{
//
//  private:
//        int ss;
//        int mm;
//        int hh;
//  public:
//
//        A( )
//        {
//            ss=0;
//            mm=0;
//            hh=0;
//        }
//        A(int a)
//        {
//            ss=a;
//            mm=a;
//            hh=a;
//        }
//        A(int a, int b, int c=44)  // check carefully that it will not creating ambiguilty
//        {
//            hh=a;
//            mm=b;
//            ss=c;
//        }
//
//       void show()
//        {
//            cout<<endl<<"hh:"<<hh<<" "<<"mm:"<<mm<<" "<<"ss:"<<ss;
//        }
//
// };
//
//
//
//int main()
//{
//    A ob1;
//    ob1.show();
//
//    A ob2(3);
//    ob2.show();
//
//    A ob3(3,59,48);
//    ob3.show();
//
//    A ob4(4,45);
//    ob4.show();
//
//return 0;
//}
//==========================================================================================================================================================
/**            Constructor Overloading  - It Simply Refers To Defining Multiple Constructor in Same Class But Differ in The Signature(Prototype)

      for ex. above we declared same constructor 3 times same as it is
  */
//#include<iostream>
//using namespace std;
//
//class Time
//{
// private:
//	int hours;
//	int mins;
//	int secs;
// public:
//	Time()
//	{
//		hours=0;
//		mins=0;
//		secs=0;
//	}
//	Time(int a)
//	{
//		hours=a;
//		mins=a;
//		secs=a;
//	}
//	Time(int a1, int a2, int a3=10) // check carefully that it will not creating ambiguilty
//	{
//		hours=a1;
//		mins=a2;
//		secs=a3;
//	}
//	.......
//};


/** Destructor- It is Same As the Constructor but it preceded with ~tilde sign and it invoked Automatically when object is moved out of scope,
                it is used to release the resources hold by the object, means it is used to perform last operation on object like file closing
                before becoming inaccessible.


*/

// #include<iostream>
// using namespace std;
//
//class A{
//
// private: int x;
//
// public:
//          A()
//          {
//              cout<<"Object is Created ";
//          }
//         ~A()
//         {
//             cout<<endl<<"Object is Deleted ";
//         }
//
//};
//
//int main()
//{
//    A ob1;
//
//    return 0;
//
//}



//#include<iostream>
//using namespace std;
//
// class A{
//
//   private:
//           int *p;
//           int cnt;
//   public:
//
//           A()   // Dynamic Constructor
//           {
//               p=new int [5];
//               cnt=5;
//
//           cout<<endl<<"Enter The 5 Elements :";
//
//               int i=0;
//               while(i<5)
//               {
//                   cin>>*(p+i);
//               i++;
//               }
//           }
//
//           out()
//           {
//               int i=0;
//               while(i<cnt)
//               {
//                   cout<<" "<<*(p+i);
//               i++;
//               }
//           }
//           ~A()
//           {
//               cout<<endl<<"Object is Deleted";
//           }
//
// };
//
//int main()
//{
//   {
//        A ob1;
//
//       ob1.out();
//
//   }
// return 0;
//
//}


/**  Defining Constant Member in Class And It's Initialization Using Initialization List   */

//#include<iostream>
//using namespace std;
//
//class A{
//
//  private:
//      const int x;
//
//  public:
//          A():x(10)
//          {
//              //x=1000; // error will occ
//          }
//          A(int a):x(a) // initializing using initializing list
//          {
//           //   a=753;
//          }
//
//          void show()
//          {
//              cout<<endl<<"x:"<<x;
//          }
//
//};
//
//
//int main()
//{
//    A s1;
//    s1.show();
//
//    A s2(50);
//    s2.show();
//
// return 0;
//}

/** You Can Use Initialization List To Initialize Multiple Members */

//#include<iostream>
//using namespace std;
//
//class A{
//
// int x;
// float y;
// double z;
//        public:
//
//         A():x(2),y(2.2),z(3.33)
//         {
//             cout<<endl<<"Default Constructor \n";
//         }
//
//         A(int a):x(a),y(a),z(a)
//         {
//             cout<<endl<<"Parameterized-1 Constructor \n";
//         }
//
//         A(int a, float b, double c):x(a),y(b),z(c)
//         {
//             cout<<endl<<"Parameterized-2 Constructor \n";
//         }
//         show()
//         {
//             cout<<endl<<" \n X="<<x<<" "<<"Y="<<y<<" "<<"Z="<<z;
//         }
//};
//
//int main()
//{
//    A s1;
//    s1.show();
//
//    A s2(5);
//    s2.show();
//
//    A s3(4,4.4,4.44);
//    s3.show();
//
//return 0;
//
//}
//==========================================================================================================================================================
/**                            Constant Object And Constant Function   */


// #include<iostream>
// using namespace std;
//
// class Sample{
//
//  private:
//      int x;
//      float y;
//
//  public:
//
//           Sample()
//           {
//               x=11;
//               y=2.2;
//           }
//           Sample(int a, float b)
//           {
//               x=a;
//               y=b;
//           }
//          void out() const // Constant Function
//           {
//               cout<<endl<<"\n X="<<x<<" "<<"Y="<<y;
//           }
//           void modify()
//           {
//               x=y=777;
//           }
// };
//
//
//int main()
//{
//    const Sample ob1;
//    ob1.out();
//
//    const Sample ob2(145,63.2);
//    ob2.out();
//
////    ob2.modify();
//
//return 0;
//}
//==========================================================================================================================================================
/***                    Dynamic Initialization of Object           */

// #include<iostream>
// #include <iomanip>
// using namespace std;
//
// class Student{
//
//  private:
//    int **p;
//    int *sub;
//    int sc;
//
//  public:
//
//           Student(int n)
//           {
//               sc=n;
//
//               p=(int **)malloc((n)*sizeof(int));
//               sub=(int*)malloc((n)*sizeof(int));
//
//               int i,j;
//
//               for(i=1; i<=n; i++)
//               {
//                   cout<<endl<<"\n Enter The Subject Count For Student "<<i<<":";
//                   cin>>*(sub+i);
//
//                   *(p+i)=(int*)malloc(*(sub+i)*sizeof(int));
//
//                   for(j=1; j<=*(sub+i); j++)
//                   {
//                        *(*(p+i)+j)=0;
//                   }
//               }
//           }
//
//           void input()
//           {
//               int i,j;
//
//               for(i=1; i<=sc; i++)
//               {
//                  cout<<endl<<"\n Enter The Marks Of Student: "<<i;
//
//                  for(j=1; j<=*(sub+i); j++)
//                  {
//                      cout<<endl<<"\n Enter The Marks of Subject: "<<*(sub+i)<<":";
//                      cin>>*(*p+i+j);
//                  }
//               }
//           }
//           void out()
//           {
//               int i,j;
//
//               for(i=1; i<=sc; i++)
//               {
//                   for(j=1; j<=*(sub+i); j++)
//                   {
//                       cout<<" "<<*(*p+i+j);
//                   }
//               }
//           }
//           ~Student()
//           {
//               int i,j;
//
//               for(i=1; i<=sc; i++)
//               {
//                   free(*(p+i));
//                   cout<<endl<<"\n Memory is Released "<<(*(p+i));
//               }
//               free(p);
//           }
//
//
// };
//
//
//int main()
//{
//    int cnt;
//    cout<<"Enter The Student Count :";
//    cin>>cnt;
//    Student s1(cnt);
//
//    s1.input();
//    s1.out();
//
//return 0;
//}
//==========================================================================================================================================================
/**                     Operator Overloading
         operator overloading and type conversion
 */


// #include<iostream>
// using namespace std;
//
// class Demo{
//
//  private:
//         int x;
//  public:
//
//        void input()
//        {
//            //...........
//        }
//        void out()
//        {
//            //............
//        }
//        void operator-()
//        {
//            cout<<endl<<"-operator operated on Demo object.";
//        }
// };
//
//int main()
//{
//    Demo ob;
//
//    -ob;            // ob.operator-()
//return 0;
//}

/*** lets use +operator    */

// #include<iostream>
// using namespace std;
//
// class Demo{
//
//  private:
//         int x;
//
//  public:
//
//            void input()
//            {
//                //......
//            }
//            void out()
//            {
//                //.......
//            }
//
//            void operator+(Demo n)
//            {
//                cout<<endl<<"\n +operator operated on Demo ob2";
//            }
//
// };
//
//int main()
//{
//    Demo ob1,ob2;
//
//    ob1+ob2;  //ob1.operator+(ob2)
//
//return 0;
//
//}

/**                      Performing Unary Operation             */


//#include<iostream>
//using namespace std;
//
//class Demo{
//
// private:
//         int x;
//         float y;
//
// public:
//
//         Demo()
//         {
//             x=0;
//             y=0;
//         }
//
//         Demo(int a, float b)
//         {
//             x=a;
//             y=b;
//         }
//         void input()
//         {
//             cout<<endl<<"\n Enter The Value Of X and Y : ";
//             cin>>x>>y;
//         }
//
//         void out()
//         {
//             cout<<endl<<"\n X:"<<x<<" "<<"Y:"<<y;
//         }
//         void operator-()
//         {
//             x=-x;
//             y=-y;
//         }
//};
//
//int main()
//{
//
//    Demo ob1(12,34.5);
//    ob1.out();
//
//    -ob1;       /// ob1.operator-()
//    ob1.out();
//
//    Demo ob2;
//
//    ob2.input();
//    ob2.out();
//    -ob2;      /// ob2.operator-()
//
//    ob2.out();
//
//return 0;
//
//}

///  overloading - operator to get an object multi by 10


//#include<iostream>
//using namespace std;
//
//class Demo{
//
//  private:
//          int x;
//          float y;
//
//  public:
//
//          Demo(int a, float b)
//          {
//            x=a;
//            y=b;
//          }
//          void operator -()
//          {
//            x*=10;
//            y*=20;
//          }
//          void out()
//          {
//              cout<<endl<<"\n X:"<<x<<"  Y:"<<y;
//          }
//};
//
//int main()
//{
//    Demo ob(43,5.2);
//    ob.out();
//
//     -ob;
//    ob.out();
//
//return 0;
//}
//

/**                  Overloading Unary Operator As a Friend                */

// #include<iostream>
// using namespace std;
//
//class Number{
//
// private:
//         int x;
//         float y;
// public:
//
//            Number(int a, float b)
//            {
//                x=a,y=b;
//            }
//            void out()
//            {
//                cout<<endl<<"x:"<<x<<"  Y:"<<y;
//            }
//        friend void operator-(Number &n);
//} ;
//
// void operator-(Number &n)
// {
//     n.x=-n.x;
//     n.y=-n.y;
// }
//
//int main()
//{
//    Number ob(10,4.4);
//    ob.out();
//
//    -ob;
//    ob.out();  ///  ob.operator-();
//
//return 0;
//}


/**     Overloading Binary Operator

    WAP to Add Two Complex Number
*/

// #include<iostream>
// using namespace std;
//
// class Complex{
//
//  int real;
//  float img;
//
//  public:
//          Complex()
//          {
//              real=0;
//              img=0;
//          }
//
//          Complex(int a, float b)
//          {
//              real=a;
//              img=b;
//          }
//         void input()
//         {
//             cout<<endl<<"\n Enter The Real Part Of Number :";
//             cin>>real;
//             cout<<endl<<"\n Enter The Imaginary Part Of The Number :";
//             cin>>img;
//         }
//          Complex operator+(Complex n )
//         {
//             Complex tmp;
//             tmp.real=real+n.real;
//             tmp.img=img+n.img;
//             return tmp;
//         }
//         void out()
//         {
//             cout<<real<<"+j"<<img;
//         }
// };
//
// int main()
// {
//     Complex ob1(3,4.4);
//    cout<<endl<<"\n N1:"; ob1.out();
//
//     Complex ob2;
//     ob2.input();
//    cout<<endl<<"\n N2:"; ob2.out();
//
//     Complex ob3;
//     ob3=ob1+ob2;
//    cout<<endl<<"\n N3:"; ob3.out();
//
//
// return 0;
// }

/**  WAP Add Two Complex Number Using + Operator Using Friend Function  */

// #include<iostream>
// using namespace std;
//
// class Complex{
//
//   int real;
//   float img;
//
//   public:
//          Complex()
//          {
//              real=0;
//              img=0;
//          }
//          Complex(int a, float b)
//          {
//              real=a;
//              img=b;
//          }
//          void input()
//          {
//              cout<<endl<<"\n Enter The Real Part Of The Number :";
//              cin>>real;
//              cout<<endl<<"\n Enter The Imaginary Part Of The Number :";
//              cin>>img;
//          }
//          void out()
//           {
//              cout<<real<<"+j"<<img;
//           }
//      friend Complex operator+(Complex x,Complex y);
// };
//
//  Complex operator+(Complex x,Complex y)
//  {
//      Complex tmp;
//      tmp.real=x.real+y.real;
//      tmp.img=y.img+y.img;
//      return tmp;
//  }
//
//
//int main()
//{
//    Complex ob1(3,4.5);
//    cout<<endl<<"\n N1:";ob1.out();
//
//    Complex ob2;
//    ob2.input();
//    cout<<endl<<"N2:";ob2.out();
//
//    Complex ob3;
//    ob3=ob1+ob2;   /// ob3=ob1.operator+(ob2)
//    cout<<endl<<"N3:";ob3.out();
//return 0;
//
//}


/// Write a program to add two time objects by overloading '+' operator.


//#include<iostream>
//using namespace std;
//
//class Time
//{
//
//    int hh;
//    int mm;
//    int ss;
//
//public:
//    void input()
//    {
//        cout<<endl<<"\n Enter The hh,mm,ss :";
//        cin>>hh>>mm>>ss;
//    }
//    Time operator+(Time t)
//    {
//        Time tmp;
//
//        tmp.ss=ss+t.ss;
//        tmp.mm=mm+t.mm+(tmp.ss/60);
//        tmp.ss=tmp.ss%60;
//
//        tmp.hh=hh+t.hh+(tmp.mm/60);
//        tmp.mm=tmp.mm%60;
//
//        return tmp;
//    }
//    void out()
//    {
//        cout<<"hh:"<<hh<<" mm:"<<mm<<" ss:"<<ss;
//    }
//};
//
//
//int main()
//{
//    Time s1,s2,s3;
//
//    s1.input();
//    s2.input();
//
//    s3=s1+s2;
//
//    cout<<endl<<"\n ";
//    s1.out();
//    cout<<endl<<"\n ";
//    s2.out();
//    cout<<endl<<"\n ";
//    s3.out();
//
//    return 0;
//
//}

/// Now i want to add 5:5:5 in time t1 and for that i want to write as c3=t1+5 or c3=5+t1

//#include<iostream>
//using namespace std;
//
//class Time
//{
//
//    int hh;
//    int mm;
//    int ss;
//
//public:
//    void input()
//    {
//        cout<<endl<<"\n Enter The hh,mm,ss :";
//        cin>>hh>>mm>>ss;
//    }
//    Time operator+(Time t)
//    {
//        Time tmp;
//
//        tmp.ss=ss+t.ss;
//        tmp.mm=mm+t.mm+(tmp.ss/60);
//        tmp.ss=tmp.ss%60;
//
//        tmp.hh=hh+t.hh+(tmp.mm/60);
//        tmp.mm=tmp.mm%60;
//
//        return tmp;
//    }
//    Time operator+(int n)
//    {
//        Time tmp;
//
//        tmp.ss=ss+n;
//        tmp.mm=mm+n+(tmp.ss/60);
//        tmp.ss=tmp.ss%60;
//
//        tmp.hh=hh+n+(tmp.mm/60);
//        tmp.mm=tmp.mm%60;
//
//        return tmp;
//    }
//    void out()
//    {
//        cout<<"hh:"<<hh<<" mm:"<<mm<<" ss:"<<ss;
//    }
//    friend Time operator+(int z , Time q);
//};
//
//
//Time operator+(int z , Time q)
//{
//    Time tmp;
//
//        tmp.ss=z+q.ss;
//        tmp.mm=z+q.mm+(tmp.ss/60);
//        tmp.ss=tmp.ss%60;
//
//        tmp.hh=z+q.hh+(tmp.mm/60);
//        tmp.mm=tmp.mm%60;
//
//        return tmp;
//}
//
//int main()
//{
//    Time s1,s2,s3;
//
//    s1.input();
//    s2.input();
//
//    s3=s1+s2;
//
//    cout<<endl<<"\n ";
//    s1.out();
//    cout<<endl<<"\n ";
//    s2.out();
//    cout<<endl<<"\n ";
//    s3.out();
//
//    s3=(s1+5);  /// s3=s1.operator+(5)
//    cout<<endl<<"\n ";
//    s3.out();
//
//    s3=(3+s2); ///  s3=5.operator+(s2)
//    cout<<endl<<"\n ";
//    s3.out();
//
//
//    return 0;
//
//}

/// WAP to join two string using + Operator

//#include<iostream>
//#include<string.h>
//using namespace std;
//
//class String
//{
//
//    char data[50];
//
//public:
//
//    String()
//    {
//
//    }
//    String (char b[])
//    {
//        strcpy(data,b);
//    }
//
//    void in()
//    {
//        cout<<endl<<"\n Enter The String :";
//        cin.getline(data,50);
//    }
//
//    String operator+(String s)
//    {
//        String tmp;
//        strcpy(tmp.data,data);
//        strcat(tmp.data,s.data);
//
//        return tmp;
//    }
//
//    char* out()
//    {
//        cout<<data;
//    }
//
//};
//
//
//int main()
//{
//    String s1("Hello All ");
//    String s2;
//    s2.in();
//
//    String s3;
//    s3=(s1+s2);
//    cout<<endl<<"\n S3:";
//    s3.out();
//    return 0;
//
//}


/// Overloading >> and << operators


// #include<iostream>
// using namespace std;
//
// class Demo{
//
//  public:
//
//        friend void operator>>(istream &is, Demo d);
//        friend void operator<<(ostream &os, Demo d);
// };
//
// void operator>>(istream &is, Demo d)
// {
//     cout<<endl<<"\n Input Data";
// }
// void operator<<(ostream &os, Demo d)
// {
//     cout<<endl<<"\n Display Data";
// }
//
//
//int main()
//{
//    Demo d;
//    cin>>d;
//    cout<<d;
//
//return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Demo{
//
//   int a;
//   float b;
//
//   public:
//          Demo()
//          {
//              a=0;b=0.0;
//          }
//         friend void operator>>(istream &is, Demo &d)
//          {
//              cout<<endl<<"\n Input Data :";
//              is>>d.a>>d.b;
//
//          }
//         friend void operator<<(ostream &os, Demo d)
//          {
//              cout<<endl<<"\n Display Data :";
//              os<<"a:"<<d.a<<" "<<"b:"<<d.b;
//          }
//          ~Demo()
//          {
//              cout<<endl<<"\n Bye Bye !!!!!";
//          }
//
//};
//
//int main()
//{
//    Demo d;
//    cin>>d;
//    cout<<d;
//
// return 0;
//
//}


//#include<iostream>
//using namespace std;
//
//class Array{
//
// int *data;
// int cnt;
//
//    public:
//
//       Array(int cnt) :cnt(cnt)
//       {
//           data=new int [cnt];
//       }
//       friend void operator>>(istream &is, Array &ob);
//       friend void operator<<(ostream &os, Array ob);
//};
//
// void operator>>(istream &is, Array &ob)
// {
//     for(int i=0; i<ob.cnt; i++)
//     {
//         is>>ob.data[i];
//     }
// }
//
// void operator<<(ostream &os, Array ob)
// {
//     for(int i=0; i<ob.cnt; i++)
//     {
//         os<<" "<<ob.data[i];
//     }
// }
//
//int main()
//{
//    int cnt;
//    cout<<"Enter The Size Of The Array : ";
//    cin>>cnt;
//
//    Array ob(cnt);
//
//    cout<<endl<<"\n Enter The "<<cnt<<" Elements of Array :";
//    cin>>ob;
//    cout<<endl<<"\n Array Elements are :"<<ob;
//
//return 0;
//
//}


//#include<iostream>
//using namespace std;
//
//class Demo{
//
// char data[20];
//
//  public:
//          Demo()
//          {
//
//          }
//         void in()
//         {
//             cout<<endl<<"\n Enter The String :";
//             cin.getline(data,20);
//         }
//
//         void out()
//         {
//             cout<<endl<<"\n"<<data;
//         }
//
//         int operator/(char ch)
//         {
//             int i=0,cnt=0;
//             while(data[i]!='\0')
//             {
//                 if(data[i]==ch)
//                   {
//                        cnt++;
//                   }
//             i++;
//             }
//            return cnt;
//         }
//
//};
//
//int main()
//{
//    Demo ob;
//    ob.in();
//    ob.out();
//
//    int t=ob/'e'; /// ob.operator/(ch)
//
//    cout<<endl<<"\n Character Present At "<<t<<" Times";
//
// return 0;
//
//}




















