#include <iostream>
///hallow world
//int main()
//{
//    std :: cout<<"hallow world";
//    return 0;
//}
///=======================================================================================================================================================
///
//#include<iostream>
//int main()
//{
//    std :: cout<<"***************personal details*******************";
//    std :: cout<<"name : Nitin Rajaram Vhankhande";
//    std::cout<<"AGE : 23";
//    std::cout<<"contact Number : 9309818386";
//    std::cout<<"Email : nitinvhankhande@gmail.com";
//    std::cout<<"Address : samata colony Kupwad";
//    return 0;
//}
//

/**
Escape Sequence characters

\n 	- newline
	\t 	- Horz. Tab
	\b 	- backspace
	\r 	- carriage return
	\\	- to print \
	\'	- to print '
	\"	- to print "
	\0	- to represent NULL
	\a   	- Alert or Bell
	\f	- Form feed
	\v	- Vertical Tab
	\?	- to print ?
	\nnn	- octal representation
	\xhh	- hex representation

*/
//
//#include<iostream>
//using namespace std;
//int main()
//{
//    cout<<"Escape Sequence characters demo";
//    cout<<"1.firstline\n2.second line\n";
//    cout<<"2.horizontal lines : first\t second\n";
//    cout<<"3.backspace : 123\b45\n";
//    cout<<"4. Carriage return: 1234\rAB\n";
//    cout<<"5. back slash : c:\\path\\to\\file\n";
//    cout<<"6. single quote : it\'s raining.\n";
//    cout << "7. Double quote: She said, \"Hello.\"\n";
//    cout << "8. Null character: Hello\0World\n";
//    cout << "9. Alert (bell): Beep!\a\a\a\a\a\a\a\a\n";
//    cout<< "10.form feed : page 1\ffpage 2\n";
//    cout<< "11.vertical tab : line1\vline2\n";
//    cout << "12.qution mark : what\?\n";
//    cout << "13.octal Representaion : \110\145\154\154\157\n";
//    cout << "14.hexadecimal representaion : \x48\x65\x6c\x6c\x6f\n";
//    return 0;
//}

///=======================================================================================================================================================
//
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//    ///setw(int n)
//    cout << setw(20) << "Namme" << "age" << setw(15) << "salary" <<endl;
//    cout << setw(20) << "Nitin" << "23" << setw(15) << "69000" <<endl;
//
//    ///  setprecision(int n) and fixed
//    double pi=4563.14159265359;
//    cout << setprecision(3)  << "pi: " << pi << endl;
//
//    ///scientific
//
//    double num=123456.789;
//    cout << scientific << "number : " << num << endl;
//
//    /// left and right
//
//    cout << setw(10) << left << "Left" << setw(10) << right << "right" << endl;
//
//    /// boolalpha
//
//    bool flag = true;
//    cout << boolalpha << "Flag : " << flag << endl;
//
//    /// hex,oct,dec
//
//    int value=255;
//
//    cout << "Hex : "  << hex << value << endl;
//    cout << "oct : "  << oct << value << endl;
//    cout << "Dec : "  << dec << value << endl;
//
//    return 0;
//}
//
///=======================================================================================================================================================
//
//#include<iostream>
//using namespace std;
//int main()
//{
//
//    /// Declaring integer constants
//    const int MAX_VALUE = 100;
//    const int MIN_VALUE = 0;
//
//    /// Declaring floating-point constants
//    const float PI=3.14159;
//    const float GRAVITY=9.81f;
//
//    /// Declaring character constants
//    const char NEWLINE = '\n';
//    const char TAB = '\t';
//
//    /// Using constants in expressions
//
//    int range = MAX_VALUE - MIN_VALUE;
//    double circumferenc = 2*PI*5.0;
//    /// Outputting constants
//    cout << "Range : " <<range << NEWLINE;
//    cout << "circumferenc : " << circumferenc << NEWLINE;
//
//    return 0;
//}

///=================================================================================================================================
///- Using const expr Keyword: (C++11):
//
//#include<iostream>
//int main()
//{
//    constexpr int MAX_VALUE = 100;
//    int num=5;
//    std :: cout << "Max value : " << MAX_VALUE <<std :: endl;
//    std :: cout << "num : " << num << std :: endl;
//   // MAX_VALUE=300;
//    std :: cout << "Max Value : "<< MAX_VALUE << std :: endl;
//    std :: cout << "num : " << num <<std :: endl;
//
//    return 0;
//}
///=================================================================================================================================
/// Using #define Preprocessor Directive (C++98):
//
//#include<iostream>
//#define PI_VALUE 3.14159
//using namespace std;
//int main()
//{
//    // Usage of the constant
//    double radius = 5.0;
//    double area = PI_VALUE*radius*radius;
//
//    cout << "Area : " << area << endl;
//    return 0;
//}
///------------------------------------------------------------------------------------------
///- Using using Alias: (C++14)

//#include<iostream>
//using PI = double;
//constexpr PI PI_VALUE = 3.14159;
//
//
//using namespace std;
//int main()
//{
//    PI radius=5.0;
//    PI area = PI_VALUE*radius*radius;
//
//    cout << "area : " << area <<endl;
//    return 0;
//
//}

///=================================================================================================================================
///
//
//#include<iostream>
//int main()
//{
//    int int_value;
//    short short_value;
//    long long_value;
//    long long long_long_value;
//
//    /// Input different types of integers
//    std :: cout << "enter any intger(int) : ";
//    std :: cin >> int_value;
//
//    std :: cout << "enter short value : ";
//    std :: cin >> short_value;
//
//    std :: cout << "enter long value : " ;
//    std :: cin>> long_value;
//
//    std :: cout << "enter long long value : ";
//    std :: cin >> long_long_value;
//
//    /// Display the input integers
//
//    std :: cout << "Integer (int) : " << int_value << " size : " << sizeof(int)  << std :: endl;
//    std :: cout << "short value : " << short_value << " size : " << sizeof(short) << std :: endl;
//    std :: cout << "Long value : " << long_value << " size : " << sizeof(long) << std :: endl;
//    std :: cout << "Long Long value : " << long_long_value << "  size : " << sizeof(long long) << std :: endl;
//
//    return 0;
//}

///=================================================================================================================================
/// Dynamic decl and dynamic init.
/// WAP to calc the simple interest.
//
//#include<iostream>
//using namespace std;
//int main()
//{
//    int pa;
//    cout << "enter the value of pa  :  "<<endl;
//    cin >> pa;
//
//    double roi; ///dynamic decl
//    cout << "Enter the value of ROI : " <<endl;
//    cin >> roi;
//
//    int noy;/// dynamic decl
//    cout << "Enter the value of NOY : " << endl;
//    cin >> noy;
//
//    double SI=(pa*roi*noy)/100;/// dynamic inti.
//    cout << "Simple intrest : " << SI <<endl;
//
//    return 0;
//}
///=================================================================================================================================
/// Fractional data input and display
//
//#include<iostream>
//using namespace std;
//int main()
//{
//    float float_value;
//    double double_value;
//    long double long_double_value;
//
//    /// Input different types of fractional values
//
//    cout << "Enter float value : ";
//    cin >> float_value;
//
//    cout << "Enter double value : ";
//    cin >> double_value;
//
//    cout << "Enter long double value : ";
//    cin >> long_double_value;
//
//    cout << "Float value : " << float_value <<endl;
//    cout << "double value : " << double_value<<endl;
//    cout << "long double Value : " << long_double_value <<endl;
//
//    return 0;
//}


/// Dealing with Boolean data
//
//#include<iostream>
//using namespace std;
//int main()
//{
//    bool b1=true;
//    bool b2=false;
//    cout<<endl<<"b1 is: "<<b1;
//    cout<<endl<<"b2 is: "<<b2<<endl;
//
//    int x=35,y=56;
//    b1=x>y;
//    b2=x!=y;
//
//    cout<<endl<<"b1 is: "<<b1;
//    cout<<endl<<"b2 is: "<<b2<<endl;
//
//    cout << std :: boolalpha;
//    cout<<endl<<"b1 is: "<<b1;
//    cout<<endl<<"b2 is: "<<b2;
//
//    return 0;
//
//
//}
//
///=================================================================================================================================
// Using character data types

//#include<iostream>
//using namespace std;
//int main()
//{
//    char ch;
//
//    cout << "Enter the character : ";
//    cin >> ch;
//
//    cout << "character is : " << ch;
//    return 0;
//}
///=================================================================================================================================
///using wcgar_t

//#include<iostream>
//using namespace std;
//int main()
//{
//    wchar_t wch;
//
//    wcout << "Enter the character : ";
//    wcin >> wch;
//
//    wcout << "character is : " << wch;
//    return 0;
//}

///=================================================================================================================================
/// character input - output
//
//#include<iostream>
//using namespace std;
//int main()
//{
//    char str[40];
//
//    cout << "Enter any String : ";
//    cin >> str;
//    cout << "str is : " << str;
//
//    const int max_size = 100;
//    char chararray[max_size];
//
//    cout << endl << "Enter a string with space : "<<endl;
//    cin.ignore();
//    cin.getline(chararray,max_size);
//    cout << "string is : " << chararray <<endl;
//
//
//    return 0;
//}
//
//
///=================================================================================================================================
/// Using void data type :


///=================================================================================================================================
///   :: (scope resolution operator):

//
//#include<iostream>
//using namespace std;
//int x=1000;
//int main()
//{
//    int x=100;
//    cout<< endl << "In main (upper)X : "<<x<<"\t In global : "<<::x<<endl;
//    {
//        int a=x;
//        cout << "inner scope (upper) X : " <<x<< "\t A= "<<a<< "\t Global : "<<::x<<endl;
//        int x=10;
//        a=10;
//        cout << "inner scope (lower) X : "<<x<<"\t A= : " <<a<< "\t Global : "<<::x<<endl;
//
//        return 0;
//    }
//
//}

///=================================================================================================================================
/// - new (memory allocation operator) and delete (Memory release operator):
//
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//    int *p,i;
//    cout << endl << "Enter the Element count : ";
//    int cnt;
//    cin >> cnt;
//
//    p=new int [cnt];
//    cout<<endl <<"enter the " <<cnt<< "no : ";
//
//
//    for(i=0;i<cnt;i++)
//    {
//        cin >> *(p+i);
//    }
//    cout <<cnt<< " Numbers are : ";
//    for(i=0;i<cnt;i++)
//    {
//        cout << "   "<<*(p+i);
//        ///cout<<"\t"<<*(p+i);
//		///cout<<setw(6)<<*(p+i);
//    }
//    delete (p);
//    cout << "\n"<<cnt<< " Numbers are : ";
//    for(i=0;i<cnt;i++)
//    {
//        cout << "   "<<*(p+i);
//        ///cout<<"\t"<<*(p+i);
//		///cout<<setw(6)<<*(p+i);
//    }
//    return 0;
//}

///=================================================================================================================================
///pointer to Constant :-
//
//#include<iostream>
//using namespace std;
//int main()
//{
//    char const *ptr="hellow";
//    cout << "\n String is : "<< "ptr";
//    ptr="Good day";
//    cout <<endl<< "string is : "<<ptr;
//     ///  *(ptr+2)='a'; /// will generate the error coz it is refered by pointer to constant
//}
//
///constant pointer
//
//#include<iostream>
//using namespace std;
//int main()
//{
//    char *const ptr="how are you";
//    cout << endl << "string is : "<<ptr;
//    *(ptr+2)='i';
//    cout << endl << "String is : " << ptr;
//    return 0;
//}
///=================================================================================================================================
/// constan pointer to constant variable

//    const char* const ptr2="good day";
//    cout<<"\n ptr2 is: "<<ptr2;
//
//    // ptr2="see you"; // error: con not modify the const object
//    // *(ptr2+2)='a'; // error: con not modify the const object
//
//    return 0;

///=================================================================================================================================
/// Reference:

//#include<iostream>
//using namespace std;
//int main()
//{
//    int x=10;
//    int& y=x;
//
//    cout << endl << "X="<<x<< "\tY="<<y;
//    x=100;
//    cout << endl << "X="<<x<< "\tY="<<y;
//    x=1000;
//    cout << endl << "X="<<x<< "\tY="<<y;
//    return 0;
//}
///=================================================================================================================================
///call by value
//
//#include<iostream>
//using namespace std;
//
//void swap(int a,int b)
//{
//    int tmp;
//    tmp=a;
//    a=b;
//    b=tmp;
//}
//int main()
//{
//    int x=10,y=20;
//
//    cout << endl << "X=" <<x<< "\tY="<<y;
//    swap(x,y);
//    cout << endl << "X=" <<x<< "\tY="<<y;
//    return 0;
//}
///=================================================================================================================================

///call by reference
//
//#include<iostream>
//using namespace std;
//
//void swap(int *a,int *b)
//{
//    int tmp;
//    tmp=*a;
//    *a=*b;
//    *b=tmp;
//}
//int main()
//{
//    int x=10,y=20;
//
//    cout << endl << "X=" <<x<< "\tY="<<y;
//    swap(&x,&y);
//    cout << endl << "X=" <<x<< "\tY="<<y;
//    return 0;
//}

///===========================================================================================================================================
///                                                           Function
///===========================================================================================================================================
///inline function
//
//inline int squre(int t)
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
//

///===========================================================================================================================================
/// Function with reference arguments and reference return.
//
//#include<iostream>
//using namespace std;
//
//int& findmax(int& a ,int& b)
//{
//    if(a>b)
//        return a;
//    else
//        return b;
//}
//int main()
//{
//    int x,y;
//
//    cout << endl << "enter any two Number : ";
//    cin >> x >>y;
//
//    int& z=findmax(x,y);
//    cout << endl << "Answer : "<<z;
//    return 0;
//}

///===========================================================================================================================================
/// Function with default arguments:
//
//#include<iostream>
//using namespace std;
//
//float findsi(int p,float r=2.14,int n=5)
//{
//    return p*r*n/100;
//
//}
//
//int main()
//{
//    int p,n;
//    float r,si;
//
//    cout << endl << "Enter the Value of P,R,N : ";
//    cin >> p>>r>>n;
//
//    si=findsi(p,r,n);
//    cout << endl << "simple Intrest : "<<si;
//
//    si=findsi(p,r);
//    cout << endl << "simple Intrest : "<<si;
//
//    si=findsi(p);
//    cout << endl << "simple Intrest : "<<si;
//    return 0;
//}
//
///===========================================================================================================================================
/// Function with const argument
//
//#include<iostream>
//using namespace std;
//
//int countpalindromes(const int y[])   /// try run without const and use y[i] in while rather than no
//{
//    int cnt=0,no,rev;
//   for(int i=0;i<5;i++)
//   {
//       no=y[i];
//       rev=0;
//       while(no!=0)
//       {
//           rev=(rev*10)+(no%10);
//           no=no/10;
//       }
//       if(y[i]==rev)
//       {
//           cnt++;
//       }
//   }
//   return cnt;
//}
//int countodds(int y[])
//{
//    int i,cnt=0;
//    for(i=0;i<5;i++)
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
//    int x[]={11,22,33,44,55};
//    cout <<endl << "Array is : ";
//
//        for(int i=0;i<5;i++)
//        {
//            cout << "\t"<<x[i];
//        }
//    int pnc=countpalindromes(x);
//    cout<<endl<<"Palindrome number Count : "<<pnc;
//
//    int ec=countodds(x);
//    cout<<endl<<"Even Count: "<<ec;
//
//    return 0;
//}
///===========================================================================================================================================
/// Function Overloading:
//
//#include<iostream>
//using namespace std;
//
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
//
//int main()
//{
//    int a,b,c,ans;
//
//    cout << "Enter the value of A B C : ";
//    cin>>a>>b>>c;
//
//    ans=calcsum(a,b);
//	cout<<endl<<"ans: "<<ans;
//
//	ans=calcsum(a,b,c);
//	cout<<endl<<"ans: "<<ans;
//
//	ans=calcsum(a,b,c,100);
//	cout<<endl<<"ans: "<<ans;
//
//}
///===========================================================================================================================================
/**Note that if exact match not found then, the lower types are promoted to higher types and then the
	exact match will be searched. In such case the type promotion happen as shown

	char --> int --> long --> float --> double --> long double
*/
//
//#include<iostream>
//using namespace std;
//
//void add(int a,int b, int c)
//{
//    cout << endl << "Addition is : " << a+b+c;
//}
//
//void add(float p,float q)
//{
//    cout << endl << "Addition is : " << p+q;
//}
//
//
//
//int main()
//{
//    int x,y;
//
//    cout << "Enter two value for x and y : ";
//    cin>>x>>y;
//
//    add(x,y) ;           /// x and y is promoted to float
//
//    int z;
//    cout <<endl <<  "Enter the value of z : ";
//    cin >> z;
//    add(x,y,z);
//
//    float p,q;
//
//    cout << endl << "Enter the float value of p and q : ";
//    cin >> p>>q;
//
//    add(p,q);
//
//    return 0;
//}
///===========================================================================================================================================
/**
    To attend the data security C++ introduced a concept of class. It is user defined data
	type, which will create a data structure and when that data structure is used to
	represent data within memory, it will not allow to access the data members using dot
	operator directly like a structure, means bydefault the data represented using class
	is private in nature, and this limited accessibility provides the security to data.

	lets see with the help of example,

	// we have store the information of bank account

	// lets use the structure
*/
//
//#include<iostream>
//using namespace std;
//
//struct Bankacnt{
//    char ch[40];
//    long int accno;
//    char pass[100];
//};
//
//int main()
//{
//    struct Bankacnt b;
//
//    cout << "Enter Account Holder Name : ";
//    cin.getline(b.ch,40);
//
//    cout << endl << "Enter Account Number : ";
//    cin >> b.accno;
//    cout << endl << "Enter Password : ";
//    // Clear the input buffer to avoid issues with getline
//    cin.ignore();  // This discards the newline character left in the buffer
//
//    cin.getline(b.pass,100);
//
//    cout << endl << "Holder name : "<<b.ch << "\n Account no : "<<b.accno<< "\n Password : "<<b.pass;
//    return 0;
//}

///===========================================================================================================================================
/// Due to several different advantages, we will prefer functions(Modular Approch)
//
//#include<iostream>
//using namespace std;
//
//struct Bankaccnt{
//    char nm[40];
//    int accno;
//    char pass[20];
//};
//void input(struct Bankaccnt& t)
//{
//    cout << endl << "Enter holde name : ";
//    cin.getline(t.nm,40);
//    cout << endl << "Enter account Number : ";
//    cin >> t.accno;
//    cout << endl << "Enter password : ";
//    cin.getline(t.pass,40);
//}
//void display(struct Bankaccnt& t)
//{
//    cout << endl << "holder name : "<<t.nm<< "\t account number : "<<t.accno<< "\n Password : "<<t.pass;
//}
//int main()
//{
//    struct Bankaccnt b1,b2;
//
//    input(b1);
//    display(b1);
//
//    input(b2);
//    display(b2);
//
//    return 0;
//}
///===========================================================================================================================================

//#include<iostream>
//using namespace std;
//
//class Bankaccnt{
//    private :
//
//    char nm[40];
//    int accno;
//    char pass[20];
//
//    public :
//        void input()
//        {
//            cout << endl << "Enter holde name : ";
//            cin.getline(nm,40);
//            cout << endl << "Enter account Number : ";
//            cin >> accno;
//            cout << endl << "Enter password : ";
//            cin.getline(pass,40);
//
//        }
//        void display()
//        {
//            cout << endl << "holder name : "<<nm<< "\t account number : "<<accno<< "\n Password : "<<pass;
//        }
//};
//
//int main()
//{
//    Bankaccnt b1,b2;
//
//    b1.input();
//    b2.input();
//    b1.display();
//    b2.display();
//    return 0;
//}
//
///===========================================================================================================================================
/// Passing the arguments to member functions.
//
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//class Student {
//    private:
//        char nm[40];
//        int rno;
//        int age;
//        float per;
//    public:
//        void input(char i_nm[50],int i_rn,int i_age,float i_per)
//        {
//            strcpy(nm,i_nm);
//            rno=i_rn;
//            age=i_age;
//            per=i_per;
//        }
//        void display()
//        {
//            cout << endl << "student Name : "<<nm<< "\t Age : "<<age<< "\t Roll No : "<<rno<< "\t Persentage : "<<per;
//        }
//};
//
//int main()
//{
//    Student s1,s2;
//
//    s1.input("ajit",11,23,98.99);
//
//    char m_nm[50];
//    int m_rn,m_age;
//    float m_per;
//
//    cout<< endl << "Enter student name : ";
//    //cin.ignore();
//    cin.getline(m_nm,50);
//    cout << endl << "enter the student roll no ,age and persentage : ";
//    cin>>m_rn>>m_age>>m_per;
//
//    s2.input(m_nm,m_rn,m_age,m_per);
//
//    s1.display();
//    s2.display();
//    return 0;
//}
///===========================================================================================================================================
/// Defining member function outside of class
//
//#include<iostream>
//using namespace std;
//
//class Student {
//    private :
//        char nm[40];
//        int rno;
//        int age;
//        float per;
//    public:
//        void input();
//        void display();
//
//};
//
//void Student::input()
//{
//    cout << endl << "Enter the Student Name : ";
//    cin.ignore();
//    cin.getline(nm,40);
//    cout << endl << "Enter the student roll no , age , and persentage : ";
//    cin>> rno >>age  >>per;
//
//}
//
//void Student::display()
//{
//    cout << endl << "Student Name : "<<nm<< "\t roll NO : "<<rno<< "\t Age : "<<age<< "\t Persentage : "<<per;
//}
//
//
//int main()
//{
//    Student s1,s2;
//
//   s1.input();
//   s2.input();
//
//   s1.display();
//   s2.display();
//
//   return 0;
//}
///===========================================================================================================================================
/// Array of objects
///      iar
///		 [] [] [] [] [] [] [] [] []

/// Enter the item code and price and display the list.

//
//#include<iostream>
//using namespace std;
//
//class Itom{
//        int icode;
//        int iprice;
//
//    public :
//        void indata()
//        {
//            cout << endl  << "Enter the itom code and price : ";
//            cin>> icode >>iprice;
//        }
//        void outdata()
//        {
//            cout<<endl << "Itom code : "<<icode<< "\t Itom Price : "<<iprice;
//        }
//};
//
//int main()
//{
//    int i;
//    Itom iar[3];
//
//    cout << "\n Enter the details of 3 itom : ";
//    for(i=0;i<3;i++)
//    {
//        iar[i].indata();
//    }
//    cout<<endl<<"-------- Item List -------";
//	for(i=0;i<3;i++)
//	{
//		iar[i].outdata();
//	}
//	return 0;
//}

///===========================================================================================================================================
/** pointer to objects

	*p
		 [] -------> [] [] [] [] [] [] [] []

	// Enter the item code and price and display the list.
*/

//
//#include<iostream>
//using namespace std;
//
//class Itom{
//        int icode;
//        int iprice;
//
//    public :
//        void indata()
//        {
//            cout << endl  << "Enter the itom code and price : ";
//            cin>> icode >>iprice;
//        }
//        void outdata()
//        {
//            cout<<endl << "Itom code : "<<icode<< "\t Itom Price : "<<iprice;
//        }
//};
//
//int main()
//{
//    int i,cnt;
//
//    cout << endl << "enter the itom cnt : ";
//    cin>>cnt;
//    Itom *p=new Itom[cnt];
//
//    cout << "\n Enter the details of <<cnt<< itom : ";
//    for(i=0;i<cnt;i++)
//    {
//        p[i].indata();
//    }
//    cout<<endl<<"-------- Item List -------";
//	for(i=0;i<cnt;i++)
//	{
//		p[i].outdata();
//	}
//	return 0;
//}
///===========================================================================================================================================
/// same program using pointer notations
//
//#include<iostream>
//using namespace std;
//
//class Item{
//    private:
//        int icode;
//        float iprice;
//    public:
//       void input()
//       {
//           cout<< endl << "Enter the Itom code and Price : ";
//           cin >> icode >>iprice;
//       }
//       void display()
//       {
//           cout << endl << "Itom code : "<<icode<< "\t Itom price : "<<iprice;
//       }
//};
//int main()
//{
//    int cnt,i;
//    cout << endl << "Enter itom count : ";
//    cin >> cnt;
//
//    Item *p;
//
//    p=new Item[cnt];
//
//    cout << "Enter the details of " <<cnt<< " item : ";
//    for(i=0;i<cnt;i++)
//    {
//        (p+i)->input();
//    }
//     cout<<endl<<"-------- Item List -------";
//    for(i=0;i<cnt;i++)
//    {
//        (p+i)->display();
//    }
//    return 0;
//}
///===========================================================================================================================================
/// Returning data from member function
/// Enter the item code and price and display the list and total

//
//#include<iostream>
//using namespace std;
//
//class Item{
//    int icode;
//    float  iprice;
//
//    public:
//        void input()
//        {
//            cout << "\n Enter itom code and price : ";
//            cin >> icode >>iprice;
//        }
//        void display()
//        {
//            cout << endl << "itom code : "<<icode << " Itom Price : "<<iprice;
//        }
//        int getprice()
//        {
//            return iprice;
//        }
//};
//
//int main()
//{
//    int i,cnt;
//
//    cout << endl << " enter the Itom count : ";
//    cin>>cnt;
//
//    Item *p=new Item[cnt];
//    cout<<"\n Enter the details of "<<cnt<<" Items: ";
//	for(i=0;i<cnt;i++)
//	{
//		(p+i)->input();
//	}
//
//	cout<<endl<<"-------- Item List -------";
//	for(i=0;i<cnt;i++)
//	{
//		(p+i)->display();
//	}
//
//	///total calc
//
//	float tot=0.0;
//	for(i=0;i<cnt;i++)
//    {
//        tot=tot+(p+i)->getprice();
//    }
//    cout<<endl<<"Total Bill: "<<tot;
//    return 0;
//}
//
///===========================================================================================================================================
/// Function overloading
//
//#include<iostream>
//using namespace std;
//
//class Rect{
//    int len;
//    int brd;
//    public :
//        void in()
//        {
//            cout << endl << "enter the rectangle length and breadth : ";
//            cin >> len>>brd;
//        }
//        void in(int a)
//        {
//            len=a;
//            brd=a;
//        }
//        void in(int a ,int b)
//        {
//            len=a;
//            brd=b;
//        }
//        void out()
//        {
//            cout << endl << "length : "<<len << "\t Breadth : "<<brd;
//        }
//        int area()
//        {
//            return len*brd;
//        }
//
//};
//
//int main()
//{
//    Rect r;
//
//    r.in();
//    r.out();
//    cout << "\n Area of rectangle 1 : "<<r.area();
//    r.in(5);
//    r.out();
//    cout << "\n Area of rectangle 2 : "<<r.area();
//    int x,y;
//    cout << endl << "Enter the lenght and breadth : ";
//    cin>> x>>y;
//    r.in(x,y);
//    r.out();
//
//    cout << "\n Area of rectangle 3 : "<<r.area();
//    return 0;
//}
///===========================================================================================================================================
/// Nesting of member function
///  Define the class Number and define some functions within it to process the value.
//
//#include<iostream>
//using namespace std;
//
//class Number {
//    private:
//        int no;
//    public:
//        void input(int a)
//        {
//            no=a;
//        }
//        void output()
//        {
//            cout << "\n Number is "<<no;
//        }
//        int getrev()
//        {
//            int num=no,rev=0;
//
//            while(num!=0)
//            {
//                rev=(rev*10)+num%10;
//                num=num/10;
//            }
//            return rev;
//        }
//        char ispalindrome()
//        {
//            if(no==getrev())
//                return 'y';
//            else
//                return 'n';
//        }
//};
//
//int main()
//{
//    Number n;
//    int no;
//    cout << "Enter any Number : ";
//    cin>>no;
//
//    n.input(no);
//    n.output();
//    cout << "\n Reverce is : "<< n.getrev();
//    char ch=n.ispalindrome();
//    if(ch=='y')
//		cout<<endl<<"Number is Palindrome";
//	else if('n')
//		cout<<endl<<"Number is not Palindrome";
//	///---------------------
//    int no1;
//    cout << "\nEnter any Number : ";
//    cin>>no1;
//    n.input(no1);
//    n.output();
//    cout << "\n Reverce is : "<<n.getrev();
//    char ans=n.ispalindrome();
//    if(ans=='y')
//		cout<<endl<<"Number is Palindrome";
//	else if('n')
//		cout<<endl<<"Number is not Palindrome";
//
//		return 0;
//
//}
///===========================================================================================================================================
/// Array as a member of class
//
//#include<iostream>
//using namespace std;
//
//class Myarray{
//    int arr[5];
//    public:
//        void input()
//        {
//            cout << "\n enter any 5 value : ";
//            for(int i=0;i<5;i++)
//            {
//                cin>>arr[i];
//            }
//        }
//        void output()
//        {
//            cout << "\n Array list: ";
//            for(int i=0;i<5;i++)
//            {
//                cout << "   "<<arr[i];
//            }
//        }
//};
//
//int main()
//{
//    Myarray ar1,ar2;
//
//    ar1.input();
//    ar2.input();
//
//    ar1.output();
//    ar2.output();
//    return 0;
//}
//

///===========================================================================================================================================
/// Add one more member function
//
//#include<iostream>
//using namespace std;
//
//class Myarray{
//    int arr[5];
//    public:
//        void input()
//        {
//            cout << "\n enter any 5 value : ";
//            for(int i=0;i<5;i++)
//            {
//                cin>>arr[i];
//            }
//        }
//        void output()
//        {
//            cout << "\n Array list: ";
//            for(int i=0;i<5;i++)
//            {
//                cout << "   "<<arr[i];
//            }
//        }
//        int getprimecount()
//        {
//
//            int i,d,flg,cnt=0;
//
//            for(i=0;i<5;i++)
//            {
//                d=2;
//                flg=0;
//                while(d<=arr[i]/2)
//                {
//                    if(arr[i]%d==0)
//                    {
//                        flg=1;
//                        break;
//                    }
//                    d++;
//                }
//                if(flg==0)
//                {
//                    cnt++;
//                }
//            }
//            return cnt;
//        }
//};
//
//int main()
//{
//    Myarray ar1,ar2;
//
//    ar1.input();
//    ar2.input();
//
//    ar1.output();
//    ar2.output();
//    cout << "\n prime count of first array is : "<< ar1.getprimecount();
//    cout << "\n prime count of second array is : "<< ar2.getprimecount();
//    return 0;
//}
//
///===========================================================================================================================================
/// Pointer as a member of class
//
//#include<iostream>
//using namespace std;
//
//class Mydynamictype{
//    int *p;
//    int cnt;
//    public:
//        void in()
//        {
//            cout << "\n Enter the count : ";
//            cin >> cnt;
//            p=new int[cnt];
//            cout << "\n Enter the "<<cnt<< " Element : ";
//            for(int i=0;i<cnt;i++)
//            {
//                cin >> *(p+i);
//            }
//        }
//        void out()
//        {
//            cout<<endl<<"Elements are: ";
//            for(int i=0;i<cnt;i++)
//            {
//                cout << "   "<< *(p+i);
//            }
//        }
//        int getevencnt()
//        {
//            int i,ec=0;
//            for(i=0;i<cnt;i++)
//            {
//                if(*(p+i)%2==0)
//                {
//                    ec++;
//                }
//            }
//            return ec;
//        }
//};
//
//int main()
//{
//    Mydynamictype ob;
//
//    ob.in();
//    ob.out();
//    cout << "\n Even count : "<<ob.getevencnt();
//    return 0;
//}
//


///===========================================================================================================================================
///Passing object as an argument to member function
//
//#include<iostream>
//using namespace std;
//
//class complex
//{
//    int real;
//    float img;
//    public :
//
//    void input()
//    {
//        cout << "\n Enter the Real part of number : ";
//        cin >> real;
//        cout << "\n Enter the img part of number : ";
//        cin >> img;
//    }
//    void output()
//    {
//        cout <<real<< "+j"<<img;
//    }
//    void addcomplex(complex a,complex b)
//    {
//        real=a.real+b.real;
//        img=a.img+b.img;
//    }
//};
//
//int main()
//{
//    complex c1,c2,c3;
//
//    c1.input();
//	c2.input();
//
//	cout <<endl<< "C1: ";
//	c1.output();
//	cout<<endl<<"C2: ";
//	c2.output();
//
//	c3.addcomplex(c1,c2);
//	cout<<endl<<"C3: ";
//	c3.output();
//
//	return 0;
//}
///===========================================================================================================================================
/// Another way - * Returning the object from member function *
//
//#include<iostream>
//using namespace std;
//class Complex{
//    int real;
//    float img;
//    public:
//        void in()
//        {
//            cout << "\n Enter the real and img value : ";
//            cin>> real>>img;
//        }
//        void out()
//        {
//            cout<<real<< "+j"<<img;
//        }
//
//        Complex addcomplex(Complex a)
//        {
//            Complex t;
//            t.real=real+a.real;
//            t.img=img+a.img;
//            return t;
//        }
//};
//
//int main()
//{
//    Complex c1,c2,c3;
//
//    c1.in();
//    c2.in();
//    c3=c1.addcomplex(c2);
//
//    cout<< "\n C1 : ";
//    c1.out();
//    cout<< "\n C2 : ";
//    c2.out();
//    cout<< "\n C3: ";
//    c3.out();
//    return 0;
//}

///===========================================================================================================================================
/// Another way -
//#include<iostream>
//using namespace std;
//class Complex{
//    int real;
//    float img;
//    public :
//        void input()
//	{
//		cout<<endl<<"Enter the real part of number: ";
//		cin>>real;
//		cout<<endl<<"Enter the img part of number: ";
//		cin>>img;
//	}
//	void output()
//	{
//	    cout << real << "+j"<<img;
//	}
//
//	friend Complex addcomplex(Complex a,Complex b);
//};
//
//Complex addcomplex(Complex a,Complex b)
//{
//    Complex t;
//    t.real=a.real+b.real;
//    t.img=a.img+b.img;
//    return t;
//}
//
//int main()
//{
//    Complex c1,c2,c3;
//
//    c1.input();
//    c2.input();
//
//   cout << "\n c1 : ";
//   c1.output();
//
//   cout << "\n c2 : ";
//   c2.output();
//
//   c3=addcomplex(c1,c2);
//   cout << "\n c3 : ";
//   c3.output();
//
//   return 0;
//}
//
///===========================================================================================================================================
/// Write a program to add two time objects
/**
            3 : 40 : 45
            5 : 30 : 50
            1----1-----
            9 : 11 : 35
*/

//#include<iostream>
//using namespace std;
//
//class Time{
//    int hh;
//    int mm;
//    int ss;
//    public:
//        void in()
//        {
//            cout <<"\n Enter HH:MM:SS : ";
//            cin >>hh>>mm>>ss;
//        }
//        void out()
//        {
//            cout <<hh<<":"<<mm<<":"<<ss;
//        }
//        Time addtime(Time a)
//        {
//            Time tmp;
//            tmp.ss=ss+a.ss;
//            tmp.mm=mm+a.mm+(tmp.ss/60);
//            tmp.ss=tmp.ss%60;
//            tmp.hh=hh+a.hh+(tmp.mm/60);
//            tmp.mm=tmp.mm%60;
//            return tmp;
//        }
//};
//
//int main()
//{
//    Time t1,t2,t3;
//
//    t1.in();
//    t2.in();
//    t3=t1.addtime(t2);
//
//    cout << "\n  T1 : "; t1.out();
//    cout <<"\n+";
//    cout << "\n  T2 : "; t2.out();
//    cout <<"\n---------------------";
//    cout << "\n  T3 : "; t3.out();
//}
//
//
///===========================================================================================================================================
/// another way
//
//#include<iostream>
//using namespace std;
//class Time
//{
//	int hh;
//	int mm;
//	int ss;
//     public:
//	void intime()
//	{
//		cout<<endl<<"Enter the HH:MM:SS: ";
//		cin>>hh>>mm>>ss;
//	}
//	void outtime()
//	{
//		cout<<hh<<":"<<mm<<":"<<ss;
//	}
//	void addtime(Time a,Time b)				                            // 3 : 40 : 45
//	{						                                            // 5 : 30 : 50
//                                                                      //-1----1-------
//		ss = b.ss + a.ss;	                                    		// 9 : 11 : 35
//		mm = b.mm + a.mm + (ss/60);
//		ss = ss%60;
//
//		hh = b.hh + a.hh + (mm/60);
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
//	t3.addtime(t1,t2);
//
//	cout<<endl<<"T1: "; t1.outtime();
//	cout<<endl<<"T2: "; t2.outtime();
//	cout<<endl<<"T3: "; t3.outtime();
//
//	return 0;
//}
///===========================================================================================================================================
//
//#include<iostream>
//using namespace std;
//
//class Time
//{
//	int hh;
//	int mm;
//	int ss;
//     public:
//	void intime()
//	{
//		cout<<endl<<"Enter the HH:MM:SS: ";
//		cin>>hh>>mm>>ss;
//	}
//	void outtime()
//	{
//		cout<<hh<<":"<<mm<<":"<<ss;
//	}
//	void addtime(Time a,Time b)			// 3 : 40 : 45
//	{						            // 5 : 30 : 50
//                                        //-1----1-------
//		ss = b.ss + a.ss;	    		// 9 : 11 : 35
//		mm = b.mm + a.mm + (ss/60);
//		ss = ss%60;
//
//		hh = b.hh + a.hh + (mm/60);
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
//	t3.addtime(t1,t2);
//
//	cout<<endl<<"T1: "; t1.outtime();
//	cout<<endl<<"T2: "; t2.outtime();
//	cout<<endl<<"T3: "; t3.outtime();
//
//	return 0;
//}
///===========================================================================================================================================
/// static data member and static member function
//
//#include<iostream>
//using namespace std;
//
//class Item{
//    private:
//        int ic,ip;
//        static float total;
//    public:
//        void in()
//        {
//            cout << "\n Enter the Item code and price : ";
//            cin >>ic>>ip;
//            total=total+ip;
//        }
//        void out()
//        {
//            cout << "\n Itom code : "<<ic<< "\t Itom price : "<<ip;
//        }
//        void gettotal()
//        {
//            cout<<"\n Total Bill : "<<total;
//        }
//};
//float Item::total;
//
//int main()
//{
//    Item i1, i2, i3;
//
//	i1.in();
//	i2.in();
//	i3.in();
//
//	i1.out();
//	i2.out();
//	i3.out();
//
//	i1.gettotal();//i2.gettotal();//i3.gettotal();
//
//	return 0;
//
//}
//
///===========================================================================================================================================
/// Using static data member and static member function

//#include<iostream>
//using namespace std;
//class Item {
//    int ic;
//    float ip;
//    static float tot;
//    public:
//        void in()
//        {
//            cout << "\n Enter the Item code and price : ";
//            cin>>ic>>ip;
//            tot=tot+ip;
//        }
//        void out()
//        {
//              cout << "\nItem code : "<<ic<< "Item price : "<<ip;
//        }
//        static void showtot()
//        {
//            cout << "\n Total Bill : "<<tot;
//        }
//};
//
//float Item :: tot=100;
//int main()
//{
//    Item :: showtot();
//    Item i1,i2,i3;
//
//  i1.in();
//	i2.in();
//	i3.in();
//
//	i1.out();
//	i2.out();
//	i3.out();
//	Item :: showtot();
//	return 0;
//}
///===========================================================================================================================================
///anthoer same example

//#include<iostream>
//using namespace std;
//
//class Book{
//    int bc;
//    float bp;
//    static float tot;
//    public:
//        void in()
//        {
//            cout << "\n Enter the Book id and price : ";
//            cin>>bc>>bp;
//            tot=tot+bp;
//        }
//        void out()
//        {
//            cout << "\n Book code : "<<bc<< "Book Price : "<<bp;
//        }
//        static void boktot()
//        {
//            cout << "\n Total Book Price : "<<tot;
//        }
//};
//float Book::tot;
//
//int main()
//{
//    Book :: boktot();
//    Book b1,b2,b3;
//
//    b1.in();
//    b2.in();
//    b3.in();
//
//    b1.out();
//    b2.out();
//    b3.out();
//
//    Book :: boktot();
//    return 0;
//}
///=========================================================================================================================================================================

	/// another example
//
//#include<iostream>
//using namespace std;
//
//class Player{
//    int id;
//    char nm[50];
//    int score ;
//    static int m50,m100;
//    public:
//        void input()
//        {
//            cout << "\n Enter name id and match score : ";
//            cin.ignore();
//            cin.getline(nm,50);//cin>>nm;
//            cin>>id>>score;
//            if(score>=100)
//                m100++;
//            else if(score>=50)
//                m50++;
//        }
//        void output()
//        {
//            cout << "\n Name : "<<nm << "\tid : "<<id << "\tscore : "<<score;
//        }
//       static void get_cn_fif()
//        {
//            cout << "\n no of 100s : "<<m100<< "\tno of fifty : "<<m50;
//        }
//};
//int Player ::m50, Player :: m100;
//int main()
//{
//    Player m[5];
//    int i;
//
//    cout << "\n Enter 5 matchs details ";
//    for(i=0;i<5;i++)
//    {
//        m[i].input();
//    }
//    cout<<endl<<"------------------ Score Card ------------------\n";
//	for(int i=0;i<5;i++)
//	{
//		m[i].output();
//	}
//	Player::get_cn_fif();
//	return 0;
//}
///===========================================================================================================================================
///homework

	// Menu driven program
	// we have to store the runs scored by 3 players in N matches
	// find current top scorer
//
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//class Player{
//    int *score,mcnt;
//    char nm[50];
//    static char highscorer[50];
//    static int highscore;
//    public :
//
//        void input_score()
//        {
//            cout << "\n Enter the player Name : ";
//            cin.ignore();
//            cin.getline(nm,50);
//
//            cout << "Enter the match cnt : ";
//            cin>>mcnt;
//            score=new int[mcnt];
//            for(int i=0;i<mcnt;i++)
//            {
//                cout <<"enter "<<i+1<< " match score : ";
//                cin >> *(score+i);
//                if(highscore < *(score+i))
//                {
//                    highscore= *(score+i);
//                    strcpy(highscorer,nm);
//                }
//            }
//        }
//        void input_again()
//        {
//            int new_mcnt;
//            cout << "Enter the match cnt : ";
//            cin>>new_mcnt;
//            score=(int*)realloc(score, new_mcnt * sizeof(int));
//            for(int i=mcnt;i<mcnt+new_mcnt;i++)
//            {
//                cout <<"enter "<<i+1<< " match score : ";
//                cin >> *(score+i);
//                if(highscore < *(score+i))
//                {
//                    highscore= *(score+i);
//                    strcpy(highscorer,nm);
//                }
//            }
//            mcnt=mcnt+new_mcnt;
//        }
//        void output_score()
//        {
//            cout << "\n Player Name : "<<nm;
//            for(int i=0;i<mcnt;i++)
//            {
//                cout <<endl<<i+1<< " Match score : "<<*(score+i);
//            }
//        }
//        void high()
//        {
//            cout<< "\n*************************************** High scorer : "<<highscore;
//            cout<< "\n*************************************** player name : "<<highscorer;
//        }
//};
//int Player::highscore;
//char Player::highscorer[50];
//int main()
//{
//    Player p[3];
//
//    cout << "\n Enter the match score detail :";
//    for(int i=0;i<3;i++)
//    {
//        cout << "\n*********"<<i+1<<" player details*********";
//        p[i].input_score();
//    }
////    cout << "\n*****list of match score******";
////
////    for(int i=0;i<3;i++)
////    {
////        cout <<"\n"<<i+1<<" Player details ";
////        p[i].output_score();
////    }
////    p[0].high();
//    int opt;
//    while(1)
//    {
//        cout<< "\n 1.Enter again score of match \t2.Display score \t 3.show current top scorer \t 4.stop \n ----> ";
//            cin>>opt;
//            switch(opt)
//            {
//                case 1:
//                    int plyopt;
//                    cout<< "\nselect the player to get enter score : ";
//                    cout << "\n 1.First Player\t2.second Player\t3.Third Player :";
//                    cin>>plyopt;
//                    switch(plyopt)
//                    {
//                        case 1:
//                            p[0].input_again();
//                            break;
//                        case 2:
//                            p[1].input_again();
//                            break;
//                        case 3:
//                            p[2].input_again();
//                            break;
//                        default:
//                            cout << "invalid option try again : ";
//                    }
//                    break;
//                case 2:
//                    cout << "\n*****list of match score******";
//                    for(int i=0;i<3;i++)
//                    {
//                        cout <<"\n"<<i+1<<" Player details ";
//                        p[i].output_score();
//                    }
//                    break;
//                case 3:
//                    p[1].high();//p[0].high();//p[2].high();
//                    break;
//                case 4:
//                    exit(0);
//                default :
//                    cout << "\n Ivalid option please chosse correct opition";
//            }
//
//    }
//    return 0;
//}
///=========================================================================================================================================================================
/**
 Friend Function
        - outside function as a friend of class
		- Member function of one class as a friend of another
		- friend class - all member functions of one class as a friend of another class
*/


/// - outside function as a friend of class
//
//#include<iostream>
//using namespace std;
//
//class Person{
//    char nm[50];
//    int age;
//    public:
//        void in()
//        {
//            cout << "\n Enter the person name : ";
//            cin.ignore();
//            cin.getline(nm,50);
//            cout << "\n Enter the person age : ";
//            cin>>age;
//        }
//        void out()
//        {
//            cout << "\n Name : "<<nm<< "\n Age : "<<age;
//        }
//        friend void get_age(Person a, Person b, Person c);
//};
//void get_age(Person a,Person b, Person c)
//{
//    Person* old=(a.age>b.age)?((a.age>c.age)?&a:&c):((b.age>c.age)?&b:&c);
//    cout << "\n Older person : "<< "\t name : "<<old->nm<< "\t Age : "<<old->age;
//}
//int main()
//{
//    Person p1,p2,p3;
//    p1.in();
//    p2.in();
//    p3.in();
//
//    p1.out();
//    p2.out();
//    p3.out();
//
//    get_age(p1,p2,p3);
//    return 0;
//}
///----------anthoer one---
//
//#include <iostream>
//using namespace std;
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
//	friend void showinfo(Person);
//};
//void showinfo(Person a)
//{
//	cout<<endl<<"Person Information - Name: "<<a.nm<<"\t Age: "<<a.age;
//}
//int main()
//{
//	Person ob;
//	ob.in();
//	ob.display();
//
//	showinfo(ob);
//	return 0;
//}
///=========================================================================================================================================================================

	/// Outside function as a friend of two or more classes
//
//#include<iostream>
//using namespace std;
//class Student;  ///foeward decl.
//class person {
//    char nm[50];
//    int age;
//    public:
//        void in()
//        {
//            cout << "\n Enter person name and age : ";
//            cin.ignore();
//            cin.getline(nm,50);
//            cin >> age;
//        }
//        void out()
//        {
//            cout << "\n Name : "<<nm << "\t Age : "<<age;
//        }
//        friend void getage(person a, Student b);
//};
//
//class Student {
//    char nm[50];
//    int age;
//    public:
//        void in()
//        {
//            cout << "\n Enter Student name and age : ";
//            cin.getline(nm,50);
//            cin >> age;
//        }
//        void out()
//        {
//            cout << "\n Name : "<<nm << "\t Age : "<<age;
//        }
//        friend void getage(person a, Student b);
//};
//
//void getage(person a, Student b)
//{
//    if(a.age>b.age)
//		cout<<endl<<"Elder Information - Name: "<<a.nm<<"\t Age: "<<a.age;
//	else
//		cout<<endl<<"Elder Information - Name: "<<b.nm<<"\t Age: "<<b.age;
//}
//
//
//int main()
//{
//    person P1;
//    Student S1;
//
//    S1.in();
//    S1.out();
//
//    P1.in();
//    P1.out();
//
//    getage(P1,S1);
//    return 0;
//}
///===========================================================================================================================================

	/// - Member function of one class as a friend of another
//
//#include<iostream>
//using namespace std;
//class Person;
//class Student{
//    char nm[50];
//    int age;
//    public:
//        void in()
//        {
//            cout << "\n Enter the name and age : ";
//            cin.ignore();
//            cin.getline(nm,50);
//            cin >> age;
//        }
//        void out()
//        {
//            cout << "\n Name : "<<nm<< "\t age : "<<age;
//        }
//        void findelder(Person p1);
//};
//
//class Person{
//    char nm[50];
//    int age;
//    public:
//        void in()
//        {
//            cout << "\n Enter the name and age : ";
//            cin.ignore();
//            cin.getline(nm,50);
//            cin >> age;
//        }
//        void out()
//        {
//            cout << "\n Name : "<<nm<< "\t age : "<<age;
//        }
//       friend void Student::findelder(Person);
//};
//void Student::findelder(Person a)
//{
//    cout<<endl<<"  Elder Details : "<<endl;
//    if(age>a.age)
//    {
//        out();
//    }
//    else
//    {
//        a.out();
//    }
//}
//
//int main()
//{
//    Student S1;
//    Person P1;
//
//    S1.in();
//    S1.out();
//
//    P1.in();
//    P1.out();
//
//    S1.findelder(P1);
//    return 0;
//}
///===========================================================================================================================================

	/// - friend class - all member functions of one class as a friend of another class
//
//#include<iostream>
//using namespace std;
//
//class B;
//class A{
//    int a;
//    friend class B;
//};
//
//class B{
//    int b;
//    public:
//        void in(A& ob)
//        {
//            cout << "Enter the value of A and B : ";
//            cin >> ob.a>>b;
//        }
//        void out(A ob)
//        {
//            cout << "\n A="<<ob.a<<"\t B="<<b;
//        }
//};
//int main()
//{
//    A ob1;
//    B ob2;
//
//    ob2.in(ob1);
//    ob2.out(ob1);
//
//    return 0;
//}

///===========================================================================================================================================

        /// Swaping the private data of class using friend function
//
//#include<iostream>
//using namespace std;
//class B;
//class A{
//    int a;
//    public:
//        void in()
//        {
//            cout << "\n Enter the value of A : ";
//            cin >> a;
//        }
//        void out()
//        {
//            cout << "\n A="<<a;
//        }
//        friend  void swapdata(A& x ,B& y);
//};
//
//class B{
//    int b;
//    public:
//        void in()
//        {
//            cout << "\n Enter the value of B : ";
//            cin >> b;
//        }
//        void out()
//        {
//            cout << "\n B ="<<b;
//        }
//      friend  void swapdata(A& x ,B& y);
//};
//
//void swapdata(A& x ,B& y)
//{
//    int tmp;
//    tmp=x.a;
//    x.a=y.b;
//    y.b=tmp;
//}
//int main()
//{
//    A ob1;
//    B ob2;
//
//    ob1.in();
//    ob2.in();
//
//    cout << "\n Before swaping : ";
//    ob1.out();
//    ob2.out();
//
//    swapdata(ob1,ob2);
//    cout << "\n after swaping : ";
//    ob1.out();
//    ob2.out();
//    return 0;
//}
///===========================================================================================================================================

  ///Constructor and Destructor
//
//using namespace std;
//
//class Sample{
//    int data ;
//    public:
//        Sample()
//        {
//            cout << "\n object is created";
//            data=100;
//        }
//        void in()
//        {
//            cout << "\n Enter the value of data : ";
//            cin >>data;
//        }
//        void out()
//        {
//            cout << "\n Data : "<<data;
//        }
//        ~Sample()
//        {
//            cout << "\n Object is discreted";
//        }
//};
//
//int main()
//{
//
//    Sample ob1;
//
//         cout<<endl<<"Before input: ";
//
//    	cout<<endl<<"For Ob1: ";
//	ob1.out();
//
//	ob1.in();
//    	cout<<endl<<"For Ob1: ";
//	ob1.out();
//
//	{
//	    Sample ob2;
//	    cout<<endl<<"For Ob2: ";
//	    ob2.out();
//	}
//    	cout<<endl<<"Main ends";
//	return 0;
//}

///===========================================================================================================================================
/// Lets see the different types of constructor
/// - Default Constructor: It will not collect any argument.
//
//#include<iostream>
//using namespace std;
//
//class Demo{
//    int x;
//    public:
//    Demo() //default constuctor
//    {
//        x=10;
//        cout <<  "\n In default Constuctor";
//    }
//    void input()
//    {
//        cout << "\n Enter the data : ";
//        cin >> x;
//    }
//    void output()
//    {
//        cout << "\n X is : "<<x;
//    }
//};
//int main()
//{
//    Demo ob1;
//    ob1.output();
//    ob1.input();
//    ob1.output();
//    return 0;
//}
///===========================================================================================================================================
///defining the constructor outside of class
//
//using namespace std;
//class Demo{
//    int x;
//    public:
//    Demo();
//    void input()
//	{
//		cout<<endl<<"\n Enter the data: ";
//		cin>>x;
//	}
//	void output()
//	{
//		cout<<endl<<"x is: "<<x;
//	}
//};
//
//Demo::Demo(){ //default argument
//    x=10;
//    cout << "\n In default Constructor";
//}
//
//int main()
//{
//	Demo ob;
//
//	ob.output();
//
//	ob.input();
//	ob.output();
//
//	return 0;
//}
///===========================================================================================================================================
/// - Parameterised Constructor : Constructor which collects an arguments.
//
//using namespace std;
//
//class Demo{
//    int x;
//    float y;
//    double z;
//    public:
//    Demo() // default constructor
//    {
//        cout << "\n In default constuctor";
//        x=10;
//        y=10.5;
//        z=100.55;
//    }
//    Demo(int t) //Parameterised constructor
//    {
//        cout << "\n In Parameterised constructor-1";
//        x=t;
//        y=t;
//        z=t;
//    }
//    Demo(int a,float b,double c)
//    {
//        cout<<endl<<"In Parameterised constructor-2";
//        x=a;
//        y=b;
//        z=c;
//    }
//    void output()
//    {
//        cout << "\n X="<<x<< "\tY="<<y<< "\tZ="<<z;
//    }
//};
//
//int main()
//{
//    Demo ob1;
//    ob1.output();
//    int a=1;
//    float b=1.1;
//    double c=11.1;
//
//    Demo ob2(a,b,c);///implicit call
//    ob2.output();
//
//    Demo ob3=Demo(a,b,c);///explicit Call
//    ob3.output();
//
//    Demo ob4(10);
//    ob4.output();
//
//    return 0;
//}
//
///===========================================================================================================================================
/// Dynamic Constructor: Used to allocated the memory for class member.
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//class Demo
//{
//    int *p;
//    int ec;
//    public:
//    Demo() ///Dynamic constructor
//    {
//        p=new int[5];
//        ec=5;
//        cout << "\n Enter 5 nos : ";
//        for(int i=0;i<5;i++)
//        {
//            cin>>*(p+i);
//        }
//    }
//    Demo(int cnt) // dynamic constructor
//	{
//		p=new int[cnt];
//		ec=cnt;
//		cout<<endl<<"Enter "<<cnt<<" Nos: ";
//		for(int i=0;i<ec;i++)
//		{
//		    cin>>*(p+i);
//		}
//	}
//	void out()
//	{
//		cout<<endl<<"Elements are: ";
//		for(int i=0;i<ec;i++)
//		{
//			cout<<setw(5)<<*(p+i);
//		}
//	}
//
//};
//
//int main()
//{
//    Demo ob1;
//    ob1.out();
//
//    Demo ob2(10);
//    ob2.out();
//    return 0;
//}
///===========================================================================================================================================
///  copy constructor
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//class Demo
//{
//    private :
//        int x;
//        float y;
//        double z;
//    public:
//        Demo()    //default constuctor
//        {
//            cout << "\n in default constructor";
//            x=1;
//            y=2.3;
//            z=56.341;
//        }
//        Demo(int a,float b,double c) //parameterized constructor
//        {
//            cout<<endl<<"In Parameterized constructor";
//            x=a;
//            y=b;
//            z=c;
//        }
//        Demo(Demo &t)
//        {
//            cout<<endl<<"In Copy constructor";
//            x=t.x;
//            y=t.y;
//            z=t.z;
//        }
//        void out()
//        {
//            cout << "\n X:"<<x<< "\tY:"<<y<< "\tZ:"<<z;
//        }
//};
//
//int main()
//{
//    Demo ob1;
//    ob1.out();
//
//    Demo ob2(12,12.22,122.22);
//    ob2.out();
//
//    Demo ob3(ob2);
//    ob3.out();
//    return 0;
//}
///===========================================================================================================================================
/// Passing default arguments to constructor:
//
//using namespace std;
//
//class Time
//{
//    int hh;
//    int mm;
//    int ss;
//    public:
//
//    Time()
//    {
//        cout << "\n--->In default constructor";
//        hh=0;
//        mm=0;
//        ss=0;
//    }
//    Time(int a)
//    {
//        hh=a;
//        mm=a;
//        ss=a;
//    }
//    Time(int a,int b,int c=10) /// check carefully that it will not creating ambiguilty
//    {
//        hh=a;
//        mm=b;
//        ss=c;
//    }
//    void out()
//    {
//        cout <<"\n"<<hh<<"hr "<<mm<<"min "<<ss<<"sec";
//    }
//};
//int main()
//{
//    Time t1;
//    t1.out();
//
//    Time t2(5);
//    t2.out();
//
//    Time t3(3,30,33);
//    t3.out();
//
//    Time t4(7,34);
//    t4.out();
//
//    return 0;
//}

///--> it alos Constructor Overloading program <---///
///===========================================================================================================================================
/// Destructors:
//
//using namespace std;
//class Demo
//{
//    int *p;
//    int cnt;
//    public:
//    Demo()
//    {
//        cout << "\n in default constructer ";
//        p=new int[5];
//        cout << "\n Enter any 5 element : ";
//        for(int i=0;i<5;i++)
//        {
//            cin >>*(p+i);
//        }
//    }
//    void out()
//    {
//        for(int i=0;i<5;i++)
//        {
//            cout <<"  "<<*(p+i);
//        }
//    }
//    ~Demo()
//    {
//        cout << "\n In distuctor ";
//        delete p;
//    }
//};
//int main()
//{
//    cout << "\n first start";
//    Demo d1;
//    d1.out();
//    cout << "\n Second start";
//    {
//        Demo d2;
//        d2.out();
//    }
//    cout << "\n Second finish";
//    return 0;
//}
///===========================================================================================================================================
/// defining const member in class and its initialisation using initialisation list
//
//using namespace std;
//class Demo
//{
//    const int x;
//    public :
//        Demo():x(10)
//        {
//            //x=1000;  //error: assignment of read-only member 'Sample::x'|
//            cout << "\n X: "<<x;
//        }
//        Demo(int a):x(a)
//        {
//              //x=2000;  //error: assignment of read-only member 'Sample::x'|
//        }
//        void out()
//        {
//            cout <<  "\n X : "<<x;
//        }
//};
//int main()
//{
//    Demo d1;
//    d1.out();
//
//    Demo d2(20);
//    d2.out();
//    return 0;
//}
///===========================================================================================================================================
///---------------------------->- Note carefully that initialisation list will work before the constructor body.
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//class Sample
//{
//    private:
//	const int x;
//    public:
//	Sample ():x(10)
//	{
//	     cout<<endl<<"In Default Constructor x is "<<x;
//	}
//	Sample(int a):x(a)
//	{
//	     cout<<endl<<"In parameterized Constructor x is "<<x;
//	}
//};
//int main()
//{
//	Sample s1;
//
//	Sample s2(20);
//
//	return 0;
//}
///===========================================================================================================================================
/// You can use the initialisation list to init. multiple members also
//
//#include<iostream>
//using namespace std;
//class Demo
//{
//    int x;
//    float y;
//    double z;
//    public:
//        Demo():x(10),y(10.5),z(110.50)
//        {
//            cout << "\n In default constructor ";
//        }
//        Demo(int a):x(a),y(a),z(a)
//        {
//            cout<<endl<<"In parameterized Constructor ";
//        }
//        Demo(int a,float b,double c):x(a),y(b),z(c)
//        {
//            cout<<endl<<"In parameterized Constructor ";
//        }
//        void display()
//        {
//            cout << "\n X:"<<x <<" Y:"<<y <<" Z:"<<z ;
//        }
//};
//int main()
//{
//    Demo d1;
//    d1.display();
//    Demo d2(10);
//    d2.display();
//    Demo d3(10,20.5,122.51);
//    d3.display();
//    return 0;
//}
///===========================================================================================================================================
/// const object and const function
//
//#include<iostream>
//using namespace std;
//
//class Sample{
//    private:
//        int x;
//        float y;
//    public:
//        Sample()
//        {
//            x=10;
//            y=12.34;
//        }
//        Sample(int a,float b)
//        {
//            x=a;
//            y=b;
//        }
//        void modify()
//        {
//            y=x=111;
//        }
//        void output() const   // constant function
//        {
//            //x=11         // will generate an error coz the object and function is constant
//            cout << "\n X="<<x<< "\tY="<<y;
//        }
//};
//
//int main()
//{
//   const Sample s1;   // const object
//   s1.output();
//
//   const Sample s2(15,15.50);
//   s2.output();
//
//   //s2.modify();  // will generate an error coz the object is constant
//   return 0;
//}
///===========================================================================================================================================
/**
//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

		---------------------------- Operator Overloading ---------------------------------

//---------------------------------------------------------------------------------------------

		// Operator Overloading and Type Conversion

	In this topic, we have to see another special function which will be called when
	we operate an operator on the object, In that case type definition of object must
	contain that special function.

	That function called special coz its name starts with operator keyword and ends with
	the operator symbol to which you want to assign an additional meaning.

	i.e.
		<returning_type> operator<op>(<argument_list>)
		{
			-------------------;
			-------------------;
			-------------------;
			-------------------;
		}
*/
//
//using namespace std;
//class Demo
//{
//    int x;
//        public:
//
//            void operator-()
//            {
//                cout << "\n -operator operated on Demo object";
//            }
//};
//int main()
//{
//    Demo d1;
//    -d1;  //d1.operator-();
//    return 0;
//}

// ------ Output ------
//
//-operator operated on sample object
//Process returned 0 (0x0)   execution time : 0.054 s
//Press any key to continue.
///===========================================================================================================================================
/// lets use the +
//
//using namespace std;
//class Sample{
//    private:
//        int x;
//    public:
//        void operator-()
//        {
//            cout<<endl<<"-operator operated on sample object";
//        }
//
//        void operator+(Sample a)
//        {
//            cout<<endl<<"+operator operated on sample object";
//        }
//
//};
//int main()
//{
//    Sample s1,s2;
//    -s1;
//    s1+s2;  ///s1.operator+(s2)
//    return 0;
//}
///===========================================================================================================================================
/// Performing unary operation
/// overloading - operator to get opposite value of an object
//
//using namespace std;
//class Number {
//        int x;
//        float y;
//    public:
//        Number()
//        {
//            x=1;
//            y=1.1;
//        }
//        Number(int a,float b)
//        {
//            x=a;
//            y=b;
//        }
//        void in()
//        {
//            cout<<endl<<"Enter the values of x and y: ";
//            cin>>x>>y;
//        }
//        void out()
//        {
//            cout<<"\n x="<<x<<"\t y="<<y;
//        }
//        void operator-()
//        {
//            x=-x;
//            y=-y;
//        }
//};
//int main()
//{
//    Number n1;
//    n1.out();
//    -n1;
//    n1.out();
//
//    Number n2(-2,3.3);
//    n2.out();
//    -n2;
//    n2.out();
//    return 0;
//}
///===========================================================================================================================================
/// overloading - operator to get an object multi by 10
//
//using namespace std;
//class Number{
//    private:
//	int x;
//	float y;
//    public:
//        Number()
//        {
//            x=10;
//            y=10.5;
//        }
//        Number(int a,float b)
//        {
//            x=a;
//            y=b;
//        }
//        void in()
//        {
//            cout << "\n Enter the value of x and y : ";
//            cin>>x>>y;
//        }
//        void out()
//        {
//            cout << "\n X : "<<x<< "  \tY : "<<y;
//        }
//        void operator-()
//        {
//            x*=10;
//            y*=10;
//        }
//};
//int main()
//{
//    Number n1;
//    n1.out();
//    -n1;
//    n1.out();
//
//    Number n2(5,5.5);
//    n2.out();
//    -n2;
//    n2.out();
//
//    return 0;
//}
///===========================================================================================================================================
/// Overloading unary operator as a friend
//
//using namespace std;
//class Number {
//    int x;
//    float y;
//public:
//
//	Number(int a, float b)
//	{
//		x=a;
//		y=b;
//	}
//	void out()
//	{
//		cout<<"x="<<x<<"\t y="<<y;
//	}
//	friend void operator-(Number &n);
//};
//void operator-(Number &n)
//{
//    n.x=-n.x;
//    n.y=-n.y;
//}
//
//int main()
//{
//    Number n1(2,2.3);
//    cout << endl << "\n N1 : "; n1.out();
//    -n1;
//    cout << endl << "\n N1 : "; n1.out();
//    return 0;
//}

///===========================================================================================================================================
/// Overloading the binary operators.
	/// WAP to add two complex numbers using + operator
//
//#include<iostream>
//using namespace std;
//
//class Complex
//{
//    int real;
//    float img;
//    public:
//        Complex()
//        {
//            real=1;
//            img=1.1;
//        }
//        void in()
//        {
//            cout << "\n enter real and img number : ";
//            cin>>real>>img;
//        }
//        void out()
//        {
//            cout <<"\n "<<real<< "+j"<<img;
//        }
//        Complex operator+(Complex t)
//        {
//            Complex tmp;
//            tmp.real=real+t.real;
//            tmp.img=img+t.img;
//            return tmp;
//        }
//};
//int main()
//{
//    Complex c1;
//    Complex c2;
//
//    c2.in();
//
//    c1.out();
//    c2.out();
//    Complex c3=c1+c2;
//    c3.out();
//    return 0;
//}
///===========================================================================================================================================

    /// WAP to add two complex numbers using + operator using friend
//
//using namespace std;
//
//class Complex
//{
//    int real;
//    float img;
//    public:
//        Complex()
//        {
//            real=1;
//            img=1.1;
//        }
//        void in()
//        {
//            cout << "\n enter real and img number : ";
//            cin>>real>>img;
//        }
//        void out()
//        {
//            cout <<"\n "<<real<< "+j"<<img;
//        }
//        friend Complex operator+(Complex t,Complex s);
//
//};
//Complex operator+(Complex t ,Complex s)
//        {
//            Complex tmp;
//            tmp.real=s.real+t.real;
//            tmp.img=s.img+t.img;
//            return tmp;
//        }
//int main()
//{
//    Complex c1;
//    Complex c2;
//
//    c2.in();
//
//    c1.out();
//    c2.out();
//    Complex c3=c1+c2;
//    c3.out();
//    return 0;
//}
///===========================================================================================================================================

    /// Write a program to add two time objects by overloading '+' operator.
//
//using namespace std;
//
//class Time
//{
//    int hh,mm,ss;
//    public:
//        Time()
//        {
//            hh=5;
//            mm=5;
//            ss=5;
//        }
//        void in()
//        {
//            cout<<endl<<"Enter the HH:MM:SS: ";
//            cin>>hh>>mm>>ss;
//        }
//        void out()
//        {
//            cout<<hh<<":"<<mm<<":"<<ss;
//        }
//        Time operator+(Time a)
//        {
//            Time tmp;
//            tmp.ss = ss + a.ss;
//            tmp.mm = mm + a.mm + (tmp.ss/60);
//            tmp.ss = tmp.ss%60;
//
//            tmp.hh = hh + a.hh + (tmp.mm/60);
//            tmp.mm = tmp.mm%60;
//
//            return tmp;
//
//        }
//};
//int main()
//{
//    Time t1,t2,t3;
//
//    t1.in();
//	t2.in();
//
//	t3=t1+t2;
//
//	cout<<endl<<"T1: "; t1.out();
//	cout<<endl<<"T2: "; t2.out();
//	cout<<endl<<"T3: "; t3.out();
//
//	return 0;
//}
///===========================================================================================================================================
/// Overloading of operator<op> function

	/// Now i want to add 5:5:5 in time t1 and for that i want to write as c3=t1+5 or c3=5+t1.
//
//#include <iostream>
//using namespace std;
//class Time
//{
//	int hh;
//	int mm;
//	int ss;
//    public:
//	void intime()
//	{
//		cout<<endl<<"Enter the HH:MM:SS: ";
//		cin>>hh>>mm>>ss;
//	}
//	void outtime()
//	{
//		cout<<hh<<":"<<mm<<":"<<ss;
//	}
//	Time operator +(Time a)
//	{
//	    cout<<endl<<"Inside Time class - Time operator+(Time a)";
//	    Time tmp;
//		tmp.ss = ss + a.ss;
//		tmp.mm = mm + a.mm + (tmp.ss/60);
//		tmp.ss = tmp.ss%60;
//
//		tmp.hh = hh + a.hh + (tmp.mm/60);
//		tmp.mm = tmp.mm%60;
//
//		return tmp;
//	}
//
//	Time operator +(int n)
//	{
//	    cout<<endl<<"Inside Time class - Time operator+(int n)";
//	    Time tmp;
//	    tmp.ss=ss+n;
//	    tmp.mm=mm+n+(ss/60);
//	    tmp.ss=tmp.ss%60;
//	    tmp.hh = hh + n + (tmp.mm/60);
//		tmp.mm = tmp.mm%60;
//
//		return tmp;
//	}
//	friend Time operator +(int a,Time t);
//};
//
//Time operator +(int n,Time t)
//{
//    cout<<endl<<"Outside Time class - Time operator+(int n, Time t)";
//    Time tmp;
//    tmp.ss = t.ss + n;
//    tmp.mm = t.mm + n + (tmp.ss/60);
//    tmp.ss = tmp.ss%60;
//
//    tmp.hh = t.hh + n + (tmp.mm/60);
//    tmp.mm = tmp.mm%60;
//
//    return tmp;
//}
//int main()
//{
//    Time t1, t2, t3;
//
//	t1.intime();
//	t2.intime();
//
//	t3=t1+t2;		// t3=t1.addtime(t2);
//
//	cout<<endl<<"T1: "; t1.outtime();
//	cout<<endl<<"T2: "; t2.outtime();
//	cout<<endl<<"T3: "; t3.outtime();
//
//	t3=t1+5;    /// t3=t1.operator+(5)
//	cout<<endl<<"T3: "; t3.outtime();
//
//    	t3=5+t1;    /// t3=operator+(5,t1)
//	cout<<endl<<"T3: "; t3.outtime();
//
//	return 0;
//}
///===========================================================================================================================================
	/// WAP to join two strings using + operator
//
//#include<string.h>
//using namespace std;
//class String
//{
//    char data[50];
//    public:
//        String(){};
//        String(char t[])
//        {
//            strcpy(data,t);
//        }
//        void setstring()
//        {
//            cout << "\n Enter any srtring : ";
//            cin.getline(data,50);
//        }
//        char* getString()
//        {
//            return data;
//        }
//        String operator+(String t)
//        {
//            String tmp;
//            strcpy(tmp.data,data);
//            strcat(tmp.data,t.data);
//            return tmp;
//        }
//};
//int main()
//{
//    String s1("Hellow All");
//    String s2;
//    s2.setstring();
//    cout<<endl<<"S1: "<<s1.getString();
//	cout<<endl<<"S2: "<<s2.getString();
//	String s3;
//	s3=s1+s2;
//	cout<<endl<<"S1: "<<s3.getString();
//	return 0;
//}
///===========================================================================================================================================
/// Overloading >> and << operators
//
//#include<string.h>
//using namespace std;
//class Demo
//{
//    public:
//       friend void operator >>(istream& is ,Demo ob);
//       friend void operator << (ostream& os ,Demo ob);
//};
//void operator>>(istream& is,Demo ob)
//{
//    cout<< "\n Input data";
//}
//void operator << (ostream& os ,Demo ob)
//{
//    cout << "\n Output data";
//}
//int main()
//{
//    Demo d;
//    cin>>d;     // operator>>(cin, d);
//    cout<<d;    // operator>>(cout, d);
//    return 0;
//}
///===========================================================================================================================================
//
//using namespace std;
//class Demo
//{
//    int f1;
//    double f2;
//    public:
//    Demo()
//    {
//        f1=0;
//        f2=0.0;
//    }
//    friend void operator >>(istream& is , Demo &ob);
//    friend void operator << (ostream& os,Demo  ob);
//};
//void operator >>(istream& is , Demo &ob)
//{
//    cout << "\n Input data : ";
//    is>>ob.f1>>ob.f2;
//}
//void operator <<(ostream& os , Demo ob)
//{
//    cout << "\n Output data ---> ";
//    os<<ob.f1<<"   "<<ob.f2;
//}
//int main()
//{
//    Demo d1;
//
//    cin>>d1;
//    cout<<d1;
//    return 0;
//}
//
///===========================================================================================================================================
/**
Write a C++ program to define a class Array that dynamically allocates memory for an array of integers based on the size specified by the user
The class should overload the >> operator to allow input of array elements from the user and the << operator to output the array elements.
*/
//
//using namespace std;
//class Array
//{
//    int *p;
//    int size;
//    public:
//        Array (int size): size(size)
//        {
//            p=new int[size];
//        }
//        ~Array()
//        {
//            delete[]p;
//        }
//        friend void operator <<(ostream& os,Array& ar1);
//        friend void operator >>(istream& is,Array& ar1);
//};
//
//void operator >>(istream& is,Array& ar1)
//{
//    for(int i=0;i<ar1.size;i++)
//    {
//        is >> ar1.p[i];
//    }
//}
//void operator <<(ostream& os,Array& ar1)
//{
//    for(int i=0;i<ar1.size;i++)
//    {
//        os<<ar1.p[i]<<" ";
//    }
//}
//int main()
//{
//    int cnt;
//
//    cout << "\n enter the array element cnt : ";
//    cin>>cnt;
//
//    Array ar1(cnt);
//
//    cout << "\n Enter "<<cnt<<"element of array : ";
//    cin>>ar1;
//
//    cout << "\n array element are : ";
//    cout<<ar1;
//    return 0;
//}
///===========================================================================================================================================
/**Write a C++ program to define a class String that performs the following operations on strings:

Concatenate two strings using the overloaded + operator.
Count the number of occurrences of a specific character in a string using the overloaded / operator.
*/
//
//using namespace std;
//class String
//{
//    char str[50];
//    public:
//        void setstring()
//        {
//            cout << "\n Enter any string : ";
//            cin.getline(str,50);
//        }
//        char* getstring()
//        {
//            return str;
//        }
//        int operator/(char ch)
//        {
//           int cnt=0;
//            for(int i=0;i<str[i]!='\0';i++)
//            {
//                if(str[i]==ch)
//                {
//                    cnt++;
//                }
//            }
//            return cnt;
//        }
//};
//
//int main()
//{
//    String s1;
//    s1.setstring();
//    cout << "\n String is : "<<s1.getstring();
//
//    char ch;
//    cout << "\n Enter character to cnt : ";
//    cin>>ch;
//
//    int t=s1/ch;
//
//    cout << "\n "<<ch<< " character present "<<t<< " times.";
//
//    return 0;
//}
///------------concate two string--------
//
//
///===========================================================================================================================================
/** Type conversion in C++:


	int x=10;
	double y=x; // here int converted to double.

	y=(double)x/3

	Then we have to see, now the type conversion happens in classes.

	- base type to class type (default conversion) - constructor
	- class type to base type (conversion function) - member function/ operator overload
	- class type to another class type (source to destination conversion)
*/
//
//- base type to class type:
//
//class Complex
//{
//	int real;
//	float img;
//    public:
//	Complex()
//	{
//		real=1;
//		img=1.1;
//	}
//	Complex(int a1, float a2)
//	{
//		real=a1;
//		img=a2;
//	}
//
//	.......
//}
//
//...
//
//	Complex ob(3,45.41);

//--------------------------------------------------------
/**
    - Types of Inheritance


            single          Multi-level          hierarchical        Multiple         Hybrid           dimond
          Inheritance       Inheritance           Inheritance       Inheritance     Inheritance

             [   ] A            [     ]  A             [ ] A           A       B       [ ]A                  A
               |                   |                    |              [ ]     [ ]      |                   [ ]
               |                [     ]  B        --------------        |_______|      [ ] B                 |
               V                   |              |            |             |          |         D     -------------
             [   ]  B           [     ]  C       [ ]B         [ ]c          [ ]        [ ] C     [ ]    |           |
                                                  |            |             C          |         |    [ ] B       [ ] C
                                              ---------      ---------                 [ ] -------|     |___________|
                                              |        |     |   |    |                 Z                     |
                                             [ ]      [ ]   [ ] [ ]  [ ]                                     [ ]
                                              D        E     F   G    H                                       D

    - Single Inheritance:   One to one relationship, two layers
    - Multi-level Inheritance: one to one relationship, more than two layers
    - Hierarchical Inheritance: One to many relationship
    - Multiple Inheritance: many to one relationship
    - Hybrid Inheritance: combinations of any two or more inheritance
*/
///===========================================================================================================================================
///- Single Inheritance : (public - called all methods from main() )
//
//using namespace std;
//class Person
//{
//    int uid;
//    char name[40];
//    public:
//        void input()
//        {
//            cout << "\n Enter name and uid : ";
//            cin >> name>>uid;
//        }
//        void output()
//        {
//            cout << "\nName : "<<name << "\tUid : "<<uid;
//        }
//};
//class Employee : public Person
//{
//    float sal;
//    public:
//        void in()
//        {
//
//            cout << "\n Enter the empolyee Salary : ";
//            cin>>sal;
//        }
//        void out()
//        {
//            //            cout << "\nEmpolyee Salary : "<<sal;
//        }
//};
//int main()
//{
//    Employee e1;
//    e1.input();
//    e1.in();
//    e1.output();
//    e1.out();
//    return 0;
//}
///===========================================================================================================================================
///	- Single Inheritance: (public - called base methods from child class methods )
//
//using namespace std;
//class Person
//{
//    int uid;
//    char name[40];
//    public:
//        void input()
//        {
//            cout << "\n Enter name and uid : ";
//            cin >> name>>uid;
//        }
//        void output()
//        {
//            cout << "\nName : "<<name << "\tUid : "<<uid;
//        }
//};
//class Employee : public Person
//{
//    float sal;
//    public:
//        void in()
//        {
//            input();
//            cout << "\n Enter the empolyee Salary : ";
//            cin>>sal;
//        }
//        void out()
//        {
//            output();
//            cout << "\nEmpolyee Salary : "<<sal;
//        }
//};
//int main()
//{
//    Employee e1;
//    e1.in();
//    e1.out();
//    return 0;
//}
//
///===========================================================================================================================================
///	- Single Inheritance: (private - called inherited methods only from the child methods  )

//
//using namespace std;
//class Person
//{
//    int uid;
//    char name[40];
//    public:
//        void input()
//        {
//            cout << "\n Enter name and uid : ";
//            cin >> name>>uid;
//        }
//        void output()
//        {
//            cout << "\nName : "<<name << "\tUid : "<<uid;
//        }
//};
//class Employee : private Person
//{
//    float sal;
//    public:
//        void in()
//        {
//            input();
//            cout << "\n Enter the empolyee Salary : ";
//            cin>>sal;
//        }
//        void out()
//        {
//            output();
//            cout << "\nEmpolyee Salary : "<<sal;
//        }
//};
//int main()
//{
//    Employee e1;
//    e1.in();
//    e1.out();
//    return 0;
//}
///===========================================================================================================================================
///  Another example
//
//using namespace std;
//class Vehical
//{
//    int no;
//    char type[40];
//    public:
//       void input()
//       {
//           cout << "\n Enter the Vehical Number and type : ";
//           cin>>no>>type;
//       }
//       void output()
//       {
//           cout << "\n Number : "<<no << "\t Type : "<<type;
//       }
//};
//class Car : private Vehical
//{
//    char color[40];
//    int mod_no;
//    public:
//        void in()
//        {
//            input();
//            cout << "\n Enter the car color and mod_no : ";
//            cin >> color >> mod_no;
//        }
//        void out()
//        {
//            output();
//            cout<< "\n Color : "<<color << "\t Model Number : "<<mod_no;
//        }
//};
//
//int main()
//{
//    Car c1;
//    c1.in();
//    c1.out();
//    return 0;
//}

///-------------------------------------------------------
//
//using namespace std;
//class Vehical
//{
//    int no;
//    char type[40];
//    public:
//       void input()
//       {
//           cout << "\n Enter the Vehical Number and type : ";
//           cin>>no>>type;
//       }
//       void output()
//       {
//           cout << "\n Number : "<<no << "\t Type : "<<type;
//       }
//};
//class Train : public Vehical
//{
//    char name[40];
//    public:
//        void in()
//        {
//            input();
//            cout << "\n Enter the Train name : ";
//            cin >>name;
//        }
//        void out()
//        {
//            output();
//            cout<< "\n Train name : "<<name;
//        }
//};
//
//int main()
//{
//    Train t1;
//    t1.in();
//    t1.out();
//    return 0;
//}

///===========================================================================================================================================
/**   - Multi-level Inheritance: one to one relationship, more than two layers
             [   ] Vehical
               |
               |
             [   ] Train
               |
               |
             [   ] Ticket
*/
//
//using namespace std;
//class Vehical
//{
//	int no;
//	char type[40];
//    public:
//	void set()
//	{
//		cout<<endl<<"Enter the Type of vehical: ";
//		cin>>type;
//		cout<<endl<<"Enter the vehical number: ";
//		cin>>no;
//	}
//	void show()
//	{
//		cout<<endl<<"Type: "<<type<<"\t Number: "<<no;
//	}
//};
//class Train : public Vehical
//{
//    char name[40];
//    public:
//        void in()
//        {
//            set();
//            cout<<endl<<"Enter the name of train: ";
//            cin>>name;
//        }
//	void out()
//	{
//		show();
//		cout<<endl<<"Name of Train: "<<name;
//	}
//
//};
//class Ticket : private Train
//{
//    char pnm[30];
//    float price;
//    public:
//        void input()
//        {
//            in();
//            cout << "\n enter the passanger name and Ticket price : ";
//            cin>>pnm>>price;
//        }
//        void output()
//        {
//            out();
//            cout<< "\n Passangr Name : "<<pnm<< "  Ticket Price : "<<price;
//        }
//};
//int main()
//{
//    Ticket t1;
//    t1.input();
//    t1.output();
//    return 0;
//}
///===========================================================================================================================================

/** Using the constructors in inheritance

	When you create object of any child then first it will allocate the memory for
	base data member, then its member functions are decl. and then it will execute the
	construcor of base. and perform operations in same sequence for its child.
*/
//
//using namespace std;
//
//class A
//{
//    int n1;
//    public:
//        A()
//        {
//            cout << "\n In default constructor in A ";
//            n1=10;
//        }
//        void setA()
//        {
//            cout<<endl<<"Enter any No: ";
//            cin>>n1;
//        }
//        void showA()
//        {
//            cout<<endl<<"A-n1 is: "<<n1;
//        }
//
//};
// class B : public A
// {
//     int n2;
//    public:
//        B()
//        {
//            cout << "\n In default constructor in B ";
//            n2=100;
//        }
//        void setB()
//        {
//            cout<<endl<<"Enter any No: ";
//            cin>>n2;
//        }
//        void showB()
//        {
//            showA();
//            cout<<endl<<"B-n2 is: "<<n2;
//        }
// };
//int main()
//{
//    B ob1;
//    ob1.showB();
//    return 0;
//}
///===========================================================================================================================================
/// invoking parameterized constructors of base class
//
//using namespace std;
//class A
//{
//    int n1;
//    public:
//    A()
//	{
//		cout<<endl<<"In the default constructor of A";
//		n1=10;
//	}
//	A(int a)
//	{
//	    cout<<endl<<"In the parameterized constructor of A";
//	    n1=a;
//	}
//	void showA()
//	{
//		cout<<endl<<"A-n1 is: "<<n1;
//	}
//};
//class B : public A
//{
//    int n2;
//    public:
//        B()
//        {
//            cout<<endl<<"In the default constructor of B";
//            n2=100;
//        }
//        B(int b,int a):A(a)
//        {
//            cout<<endl<<"In the parameterized constructor of B";
//            n2=b;
//        }
//        void showB()
//        {
//            showA();
//            cout<<endl<<"B-n2 is: "<<n2;
//        }
//};
//class C : public B
//{
//    int n3;
//    public:
//        C()
//        {
//            cout<<endl<<"In the default constructor of c";
//            n3=100;
//        }
//        C(int c,int b,int a) : B(b,a)
//        {
//            cout<<endl<<"In the parameterized constructor of C";
//            n3=c;
//        }
//        void showC()
//        {
//            showB();
//            cout<<endl<<"c-n3 is: "<<n3;
//        }
//};
//
//int main()
//{
//    C ob1;
//    ob1.showC();
//    cout<< "\n=============================================\n";
//    C ob2(333,222,111);///implicit call              // C ob3=C(11,22,33);///(explicit call)
//    ob2.showC();
//    return 0;
//}
///===========================================================================================================================================
/**
// Function overloading in the inheritance

	 A single class may contain two or more functions having same name and with different signature called
	 function overloading

    */
//
//using namespace std;
//
//class A
//{
//    int n1;
//    public :
//        A()
//        {
//            cout<<endl<<"In the default constructor of A";
//            n1=10;
//        }
//        void setA()
//        {
//            cout<<endl<<"Enter any No: ";
//            cin>>n1;
//        }
//        void setA(int t)
//        {
//            n1=t;
//        }
//        void showA()
//        {
//            cout<<endl<<"A-n1 is: "<<n1;
//        }
//};
//
//class B :public A
//{
//    int n2;
//    public :
//        B()
//        {
//            cout<<endl<<"In the default constructor of B";
//            n2=10;
//        }
//        void setB()
//        {
//            cout<<endl<<"Enter any No: ";
//            cin>>n2;
//        }
//        void setB(int t1 ,int t2)
//        {
//            setA(t1);
//            n2=t2;
//        }
//        void showB()
//        {
//            showA();
//            cout<<endl<<"B-n2 is: "<<n2;
//        }
//};
//int main()
//{
//    B ob1;
//    ob1.setB(25,50);
//    ob1.showB();
//    return 0;
//}

///===========================================================================================================================================
/** Function overriding: when base class function is redefined in child class, and that function will
	   			be invoked using object of child class then then the child class copy will be
				executed by disabling the inherited base class copy of function. this overrule
				is called as function overriding.

*/
//
//using namespace std;
//
//class Demo
//{
//    public:
//        void msg()
//        {
//            cout<<endl<<"In Demo Class";
//        }
//};
//class Test : public Demo
//{
//    public:
//        void msg()
//        {
//            cout<<endl<<"In Test Class";
//        }
//};
//int main()
//{
//    Test ob1;
//    ob1.msg();
//    return 0;
//}
///===========================================================================================================================================
/**In such case if you want to call the base version of function then use the class name as

	<base_class_name>::<function_nm>();
	*/
//
//#include <iostream>
//using namespace std;
//class Demo
//{
//    public:
//	void msg()
//	{
//		cout<<endl<<"In Demo Class";
//	}
//};
//
//class Test:public Demo
//{
//    public:
//	void msg()
//	{
//	    /// Demo::msg();   #1
//		cout<<endl<<"In Test Class";
//	}
//};
//
//int main()
//{
//	Test ob;
//	/// ob.msg(); #1
//	ob.Demo::msg();
//	return 0;
//}
//
///----same but different way----------------
//
//using namespace std;
//class Person
//{
//    char name[50];
//   long long int Add_card;
//    int age;
//    public:
//        void input()
//        {
//            cout<< "\n Enter the person name,Addharcard number and age : ";
//            cin>>name>>Add_card>>age;
//        }
//        void output()
//        {
//            cout<< "\n Name : "<<name<< "\tAddharcard Number : "<<Add_card<<"\t Age : "<<age;
//        }
//};
//
//class Student : private Person
//{
//    float hsc,ssc;
//    public :
//        void input()
//        {
//            Person :: input();
//            cout<< "\n Enter the student hsc and ssc mark : ";
//            cin>>hsc>>ssc;
//        }
//        void output()
//        {
//            Person :: output();
//            cout<< "\n Hsc Mark : "<<hsc <<"\t SSC Mark : "<<ssc;
//        }
//};
//
//int main()
//{
//    Student ob1;
//    ob1.input();
//    ob1.output();
//    return 0;
//}

///===========================================================================================================================================
/**
Using "protected": It is visibility modifier/Accessibility specifier, which is used to inherite
                   base class member without loosing its data hiding.

            We can say that it is "Inheritable Private"

					 Inheritance visibility

	   Base class		private		protected	public

	private Memebers	NI		NI		NI

	protected Memebers	private		protected	protected

	public Memebers		private		protected	public
*/













































///===========================================================================================================================================
///==================================================Ending_c++=========================================================================================
///===========================================================================================================================================
