/// Welcome simple prg
//#include<iostream>
//using namespace std;
//    int main()
//    {
//        cout<<"Hello World"<<endl;
//        cout<<"Welcome c++"<<endl;
//        return 0;
//    }

/// 1.WAP SIMPLE PRG FOR PERSONAL DETAILS
//#include<iostream>
//using namespace std;
//    int main()
//    {
//        cout<<"****Personal Details*****"<<endl;
//        cout<<"\n Name: Vishwajeet Jayvant Pawar";
//        cout<<"\n Age: 22";
//        cout<<"\n Address: Govt colony, vishrambag sangli ";
//        cout<<"\n Phone: 9096574223";
//        cout<<"\n College: DKTE";
//        cout<<"\n CGPA: 8.23";
//
//        return 0;
//    }

/// WAP TO DEMONSTRATE ALL MANIPULATORS
//#include<iostream>
//using namespace std;
//#include<iomanip>
//    int main()
//    {
//        cout<<setw(20)<<"Name: "<<setw(10)<<"Age: "<<setw(15)<<"salary: "<<endl;
//        cout<<setw(20)<<"Vishwjit Pawar"<<setw(10)<<"22"<<setw(15)<<"100000"<<endl;
//
//        double pi= 3.14159265359;
//        cout<<setprecision(3)<<fixed<<"pi: "<<pi<<endl;
//
//        //scientific
//
//        double num= 123456.789;
//        cout<<scientific<<"Number: "<<num<<endl;
//
//        //left and right
//        cout<<setw(10)<<left<<"left"<<setw(10)<<right<<"Right"<<endl;
//
//        //boolalpha
//        bool flag=true;
//        cout<<boolalpha<<"Flag: "<<flag<<endl;
//
//        //hex,oct,dec
//        int value=255;
//
//        cout<<"Hex: "<<hex<<value<<endl;
//        cout<<"Oct: "<<oct<<value<<endl;
//        cout<<"Dec: "<<dec<<value<<endl;
//
//        return 0;
//    }

/// CONSTANTS AND LITERALS
/// BY USING CONSTANTS
//#include<iostream>
//#include<iomanip>
//using namespace std;
//    int main()
//    {
//        //Declaring int const
//        const int MAX_VALUE = 100;
//        const int MIN_VALUE = 0;
//
//        //Declaring float const
//        const double PI = 3.14159;
//       // const float GRAVITY = 9.81f;
//
//        // Declaring character constants
//        const char NEWLINE = '\n';
//       // const char TAB = '\t';
//
//        // using const in expressions
//        int range  = MAX_VALUE - MIN_VALUE;
//        double circumference = 2 * PI * 5.0;
//
//        //Outputing constants
//
//        cout<<"Range: "<<range<<NEWLINE;
//        cout<<"Circumference: "<<setprecision(3)<<circumference<<NEWLINE;
//
//        return 0;
//    }

/// ANOTHER PRG
//#include<iostream>
//using namespace std;
//    int main()
//    {
//        int x=10;
//
//        const int y=23;
//
//        cout<<endl<<"x="<<x<<"\t y="<<y;
//
//         x=100;
//       // y=200;
//
//        cout<<endl<<"x="<<"\t y="<<y;
//
//        return 0;
//
//    }

/// Using constexpr keyword to declare a constant
//#include<iostream>
//using namespace std;
//constexpr int square(int x)
//{
//    return x * x;
//}
//    int main()
//    {
//        constexpr int side=5;
//        constexpr int area = square(side);
//        cout<<"Area is: "<<area;
//
//        return 0;
//    }

/// ENUM TYPES OF enum - UNSCOPED AND SCOPED
//#include<iostream>
//using namespace std;
//enum Color{RED,GREEN,BLUE};
//
//    int main()
//    {
//       Color c1,c2;
//
//       c1=RED;
//       c2=BLUE;
//
//       cout<<"c1: "<<c1<<endl;
//       cout<<"c2: "<<c2<<endl;
//    }

/// enum of weeks
//#include<iostream>
//using namespace std;
//enum Weekday{MON=1,TUE,WED,THR,FRI,SAT,SUN};
//int main()
//{
//    Weekday today;
//
//    today = WED;
//
//    cout<<"Today is day "<<today<<endl;
//    return 0;
//}

/// BY UISNG SWITCH
//#include<iostream>
//using namespace std;
//enum Weekday{MON,TUE,WED,THR,FRI,SAT,SUN};
//
//void print_day(Weekday day)
//{
//    switch(day)
//    {
//    case MON:
//        cout<<"Monday"<<endl;
//        break;
//    case TUE:
//        cout<<"Tuesday"<<endl;
//        break;
//    case WED:
//        cout<<"Wednesday"<<endl;
//        break;
//    case THR:
//        cout<<"Thursday"<<endl;
//        break;
//    case FRI:
//        cout<<"Friday"<<endl;
//        break;
//    case SAT:
//        cout<<"Saturday"<<endl;
//        break;
//    case SUN:
//        cout<<"Sunday"<<endl;
//    default:
//        cout<<"Invalid Day"<<endl;
//    }
//}
//int main()
//{
//    Weekday today = WED;
//    print_day(today);
//    return 0;
//}

/// USING alias FOR CONSTANTS
//#include<iostream>
//#include<iomanip>
//using PI= double;
//constexpr PI PI_VALUE= 3.14159;
//using namespace std;
//    int main()
//    {
//        double radius = 5.0;
//        double area = PI_VALUE * radius * radius;
//        cout<<"Area: "<<setprecision(4)<<area;
//
//        return 0;
//    }

/// Let’s see, how different integer values are entered and displayed.
//#include<iostream>
//using namespace std;
//int main()
//{
//    int intValue;
//    short shortValue;
//    long longValue;
//    long long longlongValue;
//
//    cout<<"Enter an integer(int): ";
//    cin>>intValue;
//
//    cout<<"Enter an integer(short): ";
//    cin>>shortValue;
//
//    cout<<"Enter an integer(long): ";
//    cin>>longValue;
//
//    cout<<"Enter an integer(long long)";
//    cin>>longlongValue;
//
//    //Display
//    cout<<"Integer(int): "<<intValue<<endl;
//    cout<<"Integer(short): "<<shortValue<<endl;
//    cout<<"Integer(long): "<<longValue<<endl;
//    cout<<"Integer(long long): "<<longlongValue<<endl;
//
//    return 0;
//
//}

/// DEFINE A VARIABLE OF TYPE uint32_t
//#include<iostream>
//#include<cstdint>
//using namespace std;
//int main()
//{
//    uint32_t uintValue;
//
//    cout<<"Enter an unsigned integer (uint32_t): ";
//    cin>>uintValue;
//
//    cout<<"unsigned integer (uint32_t): "<<uintValue<<endl;
//
//    return 0;
//}

/// Boolean datatype and boolalpha
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int x=10;
//    bool b=(x>10);
//    cout<<b<<endl;
//
//    bool ans=(x%5==0);
//    cout<<ans<<endl;
//
//    bool isTrue = true;
//    bool isFalse = false;
//
//    cout<<"isTrue: "<<isTrue<<endl;
//    cout<<"isFalse: "<<isFalse<<endl;
//
//    cout<<boolalpha;
//    cout<<"isTrue: "<<isTrue<<endl;
//    cout<<"isFalse: "<<isFalse<<endl;
//
//    return 0;
//}

/// Character Data types
//#include<iostream>
//    int main()
//    {
//        char ch;
//        std::cout<<"Enter character"<<std::endl;
//        std::cin>>ch;
//        std::cout<<"Entered character: "<<ch<<std::endl;
//        return 0;
//    }

/// wchar_t character
//#include<iostream>
//using namespace std;
//    int main()
//    {
//        wchar_t wch;
//        wcout<<L"Enter a wide character: ";
//        wcin>>wch;
//        wcout<<L"Entered wide character: "<<wch<<endl;
//        return 0;
//    }

/// char8_t,char16_t,char32_t uincodes
//#include<iostream>
//using namespace std;
//    int main()
//    {
////        cout<<"Enter a UTF-8 Character";
////        char8_t ch8;
////        cin>>ch8;
//
//        wcout<<L"Enter a UTF-16 Character";
//        char16_t ch16;
//        wcin>>ch16;
//
//        wcout<<L"Enter a UTF-32 Character";
//        char32_t ch32;
//        wcin>>ch32;
//
//        //display
//        cout<<"UTF-8 Character: "<<ch8<<endl;
//        wcout<<L"UTF-16 Character: "<<ch16<<endl;
//        wcout<<L"UTF-32 Character: "<<ch32<<endl;
//        return 0;
//
//    }


/// enter character array
//#include<iostream>
//using namespace std;
//int main()
//{
//    const int MAX_SIZE=100;
//    char charArray[MAX_SIZE];
//
//    cout<<"Enter a string with spaces: ";
//    cin.getline(charArray, MAX_SIZE);
//
//    cout<<"Entered String: "<<charArray<<endl;
//
//    return 0;
//}

/// find no of character
//#include<iostream>
//int main()
//{
//    char str[]="hello";
//    int char_cout=sizeof(str);
//    std::cout<<char_cout;
//    return 0;
//}

///Generic pointer
//#include<iostream>
//using namespace std;
//    int main()
//    {
//        int x=10;
//        double db=45.67;
//        char ch='a';
//
//        void *gp;
//        gp=&x;
//        cout<<"\n value of x using gp:"<<*(int*)gp;
//
//        gp=&db;
//        cout<<"\n value of db using gp: "<<*(double*)gp;
//
//        gp=&ch;
//        cout<<"\n value of ch using gp: "<<*(char*)gp;
//
//        return 0;
//    }

/// using static_cast
//#include<iostream>
//using namespace std;
//void printValue(void* ptr)
//{
//    cout<<"Value: "<<*static_cast<int*>(ptr)<<endl;
//}
//int main()
//{
//    int value = 42;
//    printValue(&value);
//    return 0;
//}

/// SCOPED ENUM WITH UNDERLYING TYPE
//#include<iostream>
//using namespace std;
//enum class Color
//{
//    RED=100,
//    GREEN,
//    BLUE
//};
//enum class flag
//{
//    RED,
//    GREEN,
//    BLUE
//};
//    int main()
//    {
//        Color myColor = Color::GREEN;
//        cout<<endl<<"First: "<<(int)flag::RED;
//        cout<<endl<<"Second: "<<static_cast<int>(flag::GREEN);
//        cout<<endl<<"Third: "<<(int)Color::RED;
//
//        if(myColor==Color::RED)
//        {
//            cout<<endl<<"The Color is Red"<<endl;
//        }
//        else if(myColor==Color::GREEN)
//        {
//            cout<<endl<<"The Color is Green"<<endl;
//        }
//        else if(myColor==Color::BLUE)
//        {
//            cout<<endl<<"The Color is Blue"<<endl;
//        }
//        return 0;
//
//    }

///CHAR INPUT AND STRING
//#include<iostream>
//using namespace std;
//int main()
//{
//
//    const int MAX_SIZE = 100;
//    char str[MAX_SIZE];
//
//    cout<<"Enter a string with spaces:"<<endl;
//    //cin.ignore();   // for flush
//    cin.getline(str, MAX_SIZE);
//    cout<<"Entered String:"<<str<<endl;
//
//    return 0;
//}

///// USING VOID DATA TYPE
//#include<iostream>
//using namespace std;
//int main()
//{
//    char ch = 'A';
//    float ft = 3.4;
//    int x = 3234;
//
//    void *gp;
//
//    gp = &ch;
//    cout<<endl<<"Ch using gp: "<<*(char*)gp;// classic way of casting
//    cout<<endl<<"Ch using gp: "<<*static_cast<char*>(gp)<<endl;
//
//    gp=&ft;
//    cout<<endl<<"Ft using gp: "<<*static_cast<float*>(gp)<<endl;
//
//    gp=&x;
//    cout<<endl<<"X using gp: "<<*static_cast<int*>(gp)<<endl;
//
//    return 0;
//}

///FROM ANY SCOPE SCOPE RESOLUTION ACCESS GLOBAL MEMBER
//#include<iostream>
//using namespace std;
//int x = 1000;
//int main()
//{
//    int x = 100;
//
//    cout<<"\n In main(upper) x: "<<x<<"\t global x: "<<::x;
//    {
//        int a = x;
//        cout<<"\n Inner Scope(upper) x: "<<x<<"\t a="<<a<<"\t global x: "<<::x;
//
//        int x = 10;
//        a = x;
//        cout<<"\n Inner Scope(lower) x: "<<x<<"\t a="<<a<<"\t global x: "<<::x;
//
//    }
//    cout<<"\n Main(lower)x: "<<x<<"\t global x: "<<::x;
//    return 0;
//
//}

/// MEMORY ALLOCATION AND DELETION IN C++
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//    int *p,cnt;
//
//    cout<<"\n Enter the cnt: ";
//    cin>>cnt;
//
//    p=new int[cnt];
//
//    cout<<"\n Enter the "<<cnt<<" Nos: ";
//    for(int i=0;i<cnt;i++)
//    {
//        cin>>*(p+i);
//    }
//
//    cout<<"\n Elements are: ";
//    for(int i=0;i<cnt;i++)
//    {
//        cout<<setw(6)<<*(p+i);
//    }
//    free(p);
//    delete p;
//    return 0;
//}

/// POINTER TO CONSTANT
//#include<iostream>
//using namespace std;
//int main()
//{
//    char const *ptr="Hello";
//    cout<<endl<<"String is :"<<ptr;
//
//    ptr="Good Day";
//    cout<<endl<<"String is: "<<ptr;
//
//    //*(ptr+2)='a';
//    return 0;
//}

/// CONSTANT POINTER
//#include<iostream>
//using namespace std;
//int main()
//{
//    char *const ptr1="How are you";
//    *(ptr1+2)='a';
//    cout<<endl<<"now string is: "<<ptr1;
//
//    //ptr1="Bye bye";
//    cout<<endl<<"String is: "<<ptr1;
//}

///------------LIST PROBLEMS
///2.CPP Program to check Natural Number
//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cout<<"Enter any Number"<<endl;
//    cin>>n;
//
//    if(n>0)
//    {
//        cout<<"\n"<<n<<" is natural number";
//    }
//    else
//    {
//        cout<<"\n"<<n<<" is not natural number";
//    }
//    return 0;
//}

///4.CPP Program to Check Abundant Number
//#include<iostream>
//using namespace std;
//int main()
//{
//    int i,no,sum=0;
//
//    cout<<"Enter any number: "<<endl;
//    cin>>no;
//    for(i=1;i<=no/2;i++)
//    {
//        if(no%i==0)
//        {
//            sum =sum + i;
//        }
//    }
//    if(sum>no)
//    {
//        cout<<""<<no<<" is Abundant Number"<<endl;
//    }
//    else
//    {
//        cout<<""<<no<<" is  Not-Abundant Number"<<endl;
//    }
//    return 0;
//}

///6.CPP Program to Check Automorphic Number
///For example, 25 is an automorphic number because its square is 625, and the last two digits (25) match the original number.

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int no, tmp, square, rem, srem, flg = 0, cnt = 0;
//
//    cout << "Enter any Number: " << endl;
//    cin >> no;
//
//    tmp = no;
//    square = no * no;
//    cout << "Square is: " << square << endl;
//
//
////    while (no != 0)
////    {
////        cnt++;
////        no = no / 10;
////    }
//
//    no = tmp;
//    tmp = no;
//
//
//    while (square != 0 && no != 0)
//    {
//        srem = square % 10;
//        rem = no % 10;
//        square = square / 10;
//        no = no / 10;
//
//        if (srem != rem)
//        {
//            flg = 1;
//            break;
//        }
//    }
//
//    no = tmp;
//
//    if (flg == 0)
//    {
//        cout << no << " is an Automorphic Number" << endl;
//    }
//    else
//    {
//        cout << no << " is Not an Automorphic Number" << endl;
//    }
//
//    return 0;
//}

///7.CPP Program to Condense a Number
///For example, consider the number 9875. The program would calculate 9 + 8 + 7 + 5 = 29, then 2 + 9 = 11, and finally 1 + 1 = 2. The condensed form is 2.
//#include<iostream>
//using namespace std;
//int main()
//{
//    int no,rem,sum=0;
//    cout<<"Enter number"<<endl;
//    cin>>no;
//
//    while(no>9)
//    {
//        int sum=0;
//
//        while(no!=0)
//        {
//            rem=no%10;
//            sum=sum+rem;
//            no=no/10;
//        }
//        no=sum;
//    }
//
//    cout<<"Condense number: "<<no;
//    return 0;
//}

///8.CPP Program to Check Disarium Number
///For example, the number 89 is a Disarium number because 8^1 + 9^2 equals 89.

//#include<iostream>
//using namespace std;
//int main()
//{
//    int i,no,cnt=0,mul=1,dis=0,rem;
//    cout<<"Enter any number"<<endl;
//    cin>>no;
//    int tmp = no;
//    while(no!=0)
//    {
//        cnt++;
//        no=no/10;
//    }
//    //cout<<cnt;
//    no=tmp;
//    while(no!=0)
//    {
//
//        rem=no%10;
//        mul=1;
//        for(i=1;i<=cnt;i++)
//        {
//            mul = mul * rem;
//        }
//
//        dis=dis+mul;
//        no=no/10;
//        cnt--;
//    }
//        no=tmp;
//        if(no==dis)
//        {
//            cout<<"Disarium Number";
//        }
//        else
//        {
//           cout<<"Not-Disarium Number";
//        }
//        return 0;
//
//}

///1.CPP Program to Check Whether a Number is Triangular or Not
///Triangular Numbers are those numbers which are obtained by continued summation of the natural numbers 1, 2, 3, 4, 5, etc.
///Example: 15 is Triangular Number because it can be obtained by 1+2+3+4+5+6 i.e. 1+2+3+4+5+6=15

//#include<iostream>
//using namespace std;
//int main()
//{
//    int i,no,sum=0,flg=0;
//    cout<<"Enter any number: "<<endl;
//    cin>>no;
//
//    for(i=1;i<no;i++)
//    {
//        sum = sum +i;
//
//        if(sum==no)
//        {
//            flg=1;
//            break;
//        }
//
//    }
//    if(flg==1)
//    {
//        cout<<no<<" is Triangular number"<<endl;
//    }
//    else
//    {
//        cout<<no<<" is not-Triangular number"<<endl;
//    }
//
//    return 0;
//
//}

///5.CPP Program to Check Amicable Number
///Amicable numbers exhibit a unique relationship where the sum of the proper divisors of each number is equal to the other number.
//#include<iostream>
//using namespace std;
//    int main()
//    {
//        int i,num1,num2,sum1=0,sum2=0;
//
//        cout<<"Enter Number 1:"<<endl;
//        cin>>num1;
//
//        cout<<"Enter Number 2:"<<endl;
//        cin>>num2;
//
//        for(i=1;i<=num1/2;i++)
//        {
//            if(num1%i==0)
//            {
//                sum1=sum1+i;
//            }
//        }
//
//        for(i=1;i<=num2/2;i++)
//        {
//            if(num2%i==0)
//            {
//                sum2=sum2+i;
//            }
//        }
//        if(sum1==num2 && sum2==num1)
//        {
//            cout<<"Amicable number"<<endl;
//        }
//        else
//        {
//            cout<<"Not Amicable number"<<endl;
//
//        }
//        return 0;
//    }

/// WAP TO PRINT NATURAL NUMBERS
//#include<iostream>
//using namespace std;
//int main()
//{
//    int n,i,sum=0;
//    cout<<"\n Natural Numbers:";
//    cout<<"Enter the nth term";
//    cin>>n;
//    for(i=1;i<=n;i++)
//    {
//        cout<<i<<endl;
//        sum=sum+i;
//    }
//    cout<<"Sum is: "<<sum<<endl;
//    return 0;
//}
//
/////---WAP TO Product of upto nth term
//#include<iostream>
//using namespace std;
//int main()
//{
//    int n,i,product=1;
//    cout<<"Enter the nth term";
//    cin>>n;
//    for(i=1;i<=n;i++)
//    {
//        product=product * i;
//    }
//    cout<<"Product is: "<<product<<endl;
//    return 0;
//}

///*********FUNCTION *******
///Square of Number
//#include<iostream>
//using namespace std;
//inline int square(int t)
//{
//    return t*t;
//}
//int main()
//{
//    int no,ans;
//
//    cout<<"\n Enter the Number: ";
//    cin>>no;
//    ans=square(no);
//
//    cout<<"\n Square of "<<no<<" is "<<ans;
//
//    return 0;
//
//}

/// Find max betn Two Numbers
//#include<iostream>
//using namespace std;
//int findMax(int &x,int &y)
//{
//    if(x>y)
//        return x;
//    else
//        return y;
//}
//int main()
//{
//    int x,y,ans;
//    cout<<"Enter the value of x"<<endl;
//    cin>>x;
//    cout<<"Enter the value of y"<<endl;
//    cin>>y;
//    ans=findMax(x,y);
//    cout<<"Max is: "<<ans;
//    return 0;
//}

/// FUNCTION WITH DEFAULT ARGUMENTS
//#include<iostream>
//using namespace std;
//float simpleInterest(int pa, float roi=8.5, int noy=1)
//{
//    float t=(pa*roi*noy)/100;
//    return t;
//}
//int main()
//{
//    int p,n;
//    float r,si;
//
//    cout<<"\n Enter the amount, roi and Duration";
//    cin>>p>>r>>n;
//
//    si=simpleInterest(p,r,n);
//
//    cout<<"\n 1. Simple Interest: "<<si;
//
//    si=simpleInterest(p,r);
//    cout<<"\n 2. Simple Interest: "<<si;
//
//    si=simpleInterest(p);
//    cout<<"\n 3. Simple Interest: "<<si;
//
//    return 0;
//}

/// FUNCTION WITH CONST ARGUMENTS
/// WAP TO FIND THE PERCENTAGE OF 5 SUBJECT
//#include<iostream>
//#include<iomanip>
//using namespace std;
//float findPercentage(const int mrks[])
//{
//    int tot=0;
//    for(int i=0;i<5;i++)
//    {
//        tot=tot+mrks[i];
//       // marks[i]=tot; // By mistake - will generate an error message, because it is decl as const
//    }
//    return tot/float (5);
//}
//
//void display(int m[])
//{
//    for(int i=0;i<5;i++)
//    {
//        cout<<setw(6)<<m[i];;
//    }
//}
//int main()
//{
//    int m[5];
//
//    cout<<"Enter the marks in 5 subjects: "<<endl;
//
//    for(int i=0;i<5;i++)
//    {
//        cin>>m[i];
//    }
//     float per=findPercentage(m);
//
//     cout<<"\n Marks:"<<endl;
//     display(m);
//
//     cout<<"\nPercentage is : "<<per<<endl;
//
//     return 0;
//}

///-------------- FUNCTION OVERLOADING--------------
//#include<iostream>
//using namespace std;
//
////void add(int a, int b)
////{
////    cout<<"\n Addtion is: "<<(a+b);
////}
//
//void add(int a, int b, int c)
//{
//    cout<<"\n Addition is: "<<(a+b+c);
//}
//
//void add(float a, float b)
//{
//    cout<<"\n Addition is :"<<(a+b);
//}
//
//void add(float a, int b)
//{
//    cout<<"\n Addition is: "<<(a+b);
//}
//
//int main()
//{
//    int x,y;
//    cout<<"\n Enter two int values"<<endl;
//    cin>>x>>y;
//    add(x,y);
//
//    int z;
//    cout<<"\n Enter int value"<<endl;
//    cin>>z;
//    add(x,y,z);
//
//    float p,q;
//    cout<<"\n Enter two float values"<<endl;
//    cin>>p>>q;
//    add(p,q);
//
//    add(p,y);
//
//    return 0;
//
//}

/// TYPE PROMOTION IS FROM LOWER DATA TYPE TO HIGHER DATA TYPE
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
//	int x,y;
//	cout<<endl<<"Enter two int values: ";
//	cin>>x>>y;
//	add(x,y); // x and y is promoted to float
//
//	int z;
//	cout<<endl<<"Enter a single int value: ";
//	cin>>z;
//	add(x,y,z);
//
//	float p,q;
//	cout<<endl<<"Enter two float values: ";
//	cin>>p>>q;
//	add(p,q);
//
//	return 0;
//}

///------------------------ ********** CLASS AND OBJECTS*************************************************
//#include<iostream>
//using namespace std;
//class BankAccount
//{
//    int accno;
//    char nm[50];
//    float bal;
//    char pass[50];
//
//public:
//    void input()
//    {
//        cout<<"Enter the Account number: "<<endl;
//        cin>>accno;
//
//        cout<<"Enter the name of account holder name: "<<endl;
//        cin.ignore();
//        cin.getline(nm,50);
//
//        cout<<"Enter the balance"<<endl;
//        cin>>bal;
//
//        cout<<"Enter the password"<<endl;
//        cin.ignore();
//        cin.getline(pass,50);
//    }
//
//    void display()
//    {
//        cout<<endl<<"Account number"<<accno<<"\t Name: "<<nm<<"\t Balance: "<<bal<<"\t Password: "<<pass;
//    }
//
//};
//
//int main()
//{
//    BankAccount b;
//
//    b.input();
//    b.display();
//    return 0;
//}

/// DEFINING THE MEMBER FUNCTIONS OUTSIDE OF CLASS
//#include<iostream>
//using namespace std;
//class BankAccount
//{
//private:
//    char nm[40];
//    int accno;
//    char pass[40];
//
//public:
//    void input();
//    void display();
//};
//
//void BankAccount::input()
//{
//    cout<<endl<<"Enter the account holder name: ";
//    cin.getline(nm,40);
//
//    cout<<endl<<"Enter the account number";
//    cin>>accno;
//
//    cout<<endl<<"Enter the password";
//    cin.ignore();
//    cin.getline(pass,40);
//}
//void BankAccount::display()
//{
//    cout<<endl<<"Account Name: "<<nm<<"\t Account Number: "<<accno<<"\t Account Password: "<<pass;
//}
//int main()
//{
//    BankAccount b1;
//    b1.input();
//    b1.display();
//
//    BankAccount b2;
//    b2.input();
//    b2.display();
//
//    return 0;
//}

/// PASSSING ARGUMENTS TO MEMBER FUNCTION
//#include<iostream>
//#include<string.h>
//using namespace std;
//class BankAccount
//{
//    char nm[40];
//    int accno;
//    char pass[40];
//
//public:
//    void input(char a1[],int a2,char a3[])
//    {
//        strcpy(nm,a1);
//        accno=a2;
//        strcpy(pass,a3);
//    }
//    void display()
//    {
//        cout<<endl<<"Account name: "<<nm<<"\t Account Number: "<<accno<<"\t Account Password: "<<pass;
//    }
//};
//int main()
//{
//    BankAccount b1;
//    b1.input("Vishwajit", 1234, "pass123");
//    b1.display();
//
//    char nm1[40], pass1[40];
//    int accno1;
//
//    cout<<endl<<"Enter the account holder name: ";
//    cin.getline(nm1,40);
//
//    cout<<endl<<"Enter the acconut number: ";
//    cin>>accno1;
//
//    cout<<endl<<"Enter the account password: ";
//    cin.ignore();
//    cin.getline(pass1,40);
//
//    BankAccount b2;
//    b2.input(nm1,accno1,pass1);
//    b2.display();
//
//    return 0;
//}

/// USING FUNCTION OVERLOADING WITHIN CLASS
//#include<iostream>
//#include<string.h>
//using namespace std;
//class BankAccount
//{
//    char nm[40];
//    int accno;
//    char pass[40];
//
//public:
//    void input()
//    {
//        cout<<endl<<"Enter the account holder name: ";
//        cin.getline(nm,40);
//
//        cout<<endl<<"Enter the account number: ";
//        cin>>accno;
//
//        cout<<endl<<"Enter the password: ";
//        cin.ignore();
//        cin.getline(pass,40);
//    }
//    void input(char a1[],int a2,char a3[])
//    {
//        strcpy(nm,a1);
//        accno=a2;
//        strcpy(pass,a3);
//    }
//    void display()
//    {
//        cout<<endl<<"Account Name: "<<nm<<"\t Account number: "<<accno<<"\t Account Password: "<<pass;    }
//};
//int main()
//{
//    BankAccount b1;
//    b1.input();
//    b1.display();
//
//    BankAccount b2;
//    b2.input("Vishu",123,"Pass123");
//    b2.display();
//
//    return 0;
//}

/// DEFINIG OUT OWN CLASS NUMBER
//#include<iostream>
//using namespace std;
//class Number
//{
//private:
//    int val;
//
//public:
//    void set()
//    {
//        cout<<endl<<"Enter the value: ";
//        cin>>val;
//    }
//    void show()
//    {
//        cout<<endl<<"Value is: "<<val;
//    }
//
//
//};
//int main()
//{
//    Number n1;
//    n1.set();
//    n1.show();
//
//    return 0;
//}

/// PROCESSING THE NUMBER OBJECT
//#include<iostream>
//using namespace std;
//class Number
//{
//private:
//    int val;
//
//public:
//    void set()
//    {
//        cout<<endl<<"Enter the value: ";
//        cin>>val;
//    }
//    void show()
//    {
//        cout<<endl<<"Value is: "<<val;
//    }
//    void evenorodd()
//    {
//        if(val%2==0)
//        {
//            cout<<endl<<"Number is even";
//        }
//        else
//        {
//            cout<<endl<<"Number is odd";
//        }
//    }
//    void isPositive_negative_zero()
//    {
//        if(val>0)
//        {
//            cout<<endl<<"Number is positive";
//        }
//        else if(val<0)
//        {
//            cout<<endl<<"Number is negative";
//        }
//        else
//        {
//            cout<<endl<<"Number is zero";
//        }
//    }
//
//
//};
//int main()
//{
//    Number n1;
//    n1.set();
//    n1.show();
//
//    cout<<endl<<"\n TO Check Number is even or odd: "<<endl;
//    n1.evenorodd();
//
//    cout<<endl<<"\n To check Number is positive,negative or zero: "<<endl;
//    n1.isPositive_negative_zero();
//
//    return 0;
//}

/// PASSING ARGUMENT TO MEMBER FUNCTION AND RETURNING VALUE FROM MEMBER FUNCTION
//#include<iostream>
//using namespace std;
//class Number
//{
//private:
//    int val;
//
//public:
//    void set()
//    {
//        cout<<endl<<"Enter the value: ";
//        cin>>val;
//    }
//    void set(int t)
//    {
//        val=t;
//    }
//    void show()
//    {
//        cout<<endl<<"Value is: "<<val;
//    }
//    int get()
//    {
//        return val;
//    }
//    void evenorodd()
//    {
//        if(val%2==0)
//        {
//            cout<<endl<<"Number is even";
//        }
//        else
//        {
//            cout<<endl<<"Number is odd";
//        }
//    }
//    void isPositive_negative_zero()
//    {
//        if(val>0)
//        {
//            cout<<endl<<"Number is positive";
//        }
//        else if(val<0)
//        {
//            cout<<endl<<"Number is negative";
//        }
//        else
//        {
//            cout<<endl<<"Number is zero";
//        }
//    }
//    int getreverse()
//    {
//        int no=val;
//        int r=0;
//        while(no!=0)
//        {
//            r= (r*10)+(no%10);
//            no=no/10;
//        }
//        return r;
//    }
//
//
//};
//int main()
//{
//    Number n1;
//    n1.set();
//    n1.show();
//
//    cout<<endl<<"\n TO Check Number is even or odd: "<<endl;
//    n1.evenorodd();
//
//    cout<<endl<<"\n To check Number is positive,negative or zero: "<<endl;
//    n1.isPositive_negative_zero();
//
//    Number n2;
//    n2.set(23);
//    cout<<endl<<"\n Value of n2 is: "<<n2.get()<<endl;;
//
//    int rev = n2.getreverse();
//    cout<<endl<<"Reverse of: "<<n2.get()<<" is: "<<rev;
//
//
//    return 0;
//}

/// NESTING OF MEMEBER FUNCTION
//#include<iostream>
//using namespace std;
//class Number
//{
//private:
//    int val;
//
//public:
//    void set()
//    {
//        cout<<endl<<"Enter the value: ";
//        cin>>val;
//    }
//    void set(int t)
//    {
//        val=t;
//    }
//    void show()
//    {
//        cout<<endl<<"Value is: "<<val;
//    }
//    int get()
//    {
//        return val;
//    }
//    void evenorodd()
//    {
//        if(val%2==0)
//        {
//            cout<<endl<<"Number is even";
//        }
//        else
//        {
//            cout<<endl<<"Number is odd";
//        }
//    }
//    void isPositive_negative_zero()
//    {
//        if(val>0)
//        {
//            cout<<endl<<"Number is positive";
//        }
//        else if(val<0)
//        {
//            cout<<endl<<"Number is negative";
//        }
//        else
//        {
//            cout<<endl<<"Number is zero";
//        }
//    }
//    int getreverse()
//    {
//        int no=val;
//        int r=0;
//        while(no!=0)
//        {
//            r= (r*10)+(no%10);
//            no=no/10;
//        }
//        return r;
//    }
//
//    char * isPalindrome()
//    {
//        if(val==getreverse())
//        {
//            return "Yes";
//        }
//        else
//        {
//            return "No";
//        }
//    }
//
//
//};
//int main()
//{
//    Number n1;
//    n1.set();
//    n1.show();
//
//    cout<<endl<<"\n TO Check Number is even or odd: "<<endl;
//    n1.evenorodd();
//
//    cout<<endl<<"\n To check Number is positive,negative or zero: "<<endl;
//    n1.isPositive_negative_zero();
//
//    Number n2;
//    n2.set(23);
//    cout<<endl<<"\n Value of n2 is: "<<n2.get()<<endl;;
//
//    int rev = n2.getreverse();
//    cout<<endl<<"\n Reverse of: "<<n2.get()<<" is: "<<rev;
//
//    cout<<endl<<" Is n2 is Palindrome? "<<endl<<n2.isPalindrome();
//
//
//    return 0;
//}

/// DEFINE BELOW MENTIONED CLASSES WITH SOME METHODS WITH IT
//#include<iostream>
//using namespace std;
//class Distance
//{
//private:
//    double value;
//
//public:
//    void set()
//    {
//        cout<<endl<<"Enter the value in kilometer: ";
//        cin>>value;
//    }
//    double get(int t)
//    {
//        return value;
//    }
//    void show()
//    {
//        cout<<endl<<"Value is: "<<value;
//    }
//    void tocentimeter()
//    {
//        double centi = 100000 * value;
//
//        cout<<endl<<"In Centimeter: "<<centi<<"cm";
//    }
//    double getfeet()
//    {
//        int no=value;
//
//        double feet = no * 3280.8398;
//        return feet;
//    }
//    double getmeters()
//    {
//        int no=value;
//
//        double meter = no * 1000;
//        return meter;
//    }
//    void ininches()
//    {
//        double inch = value * 39370.1;
//
//        cout<<endl<<"In Inches: "<<inch<<"inch";
//    }
//};
//int main()
//{
//    Distance d1;
//    int f,m;
//    d1.set();
//    d1.show();
//    d1.tocentimeter();
//
//    f=d1.getfeet();
//    cout<<endl<<"In Feet: "<<f<<"feet";
//
//    m=d1.getmeters();
//    cout<<endl<<"In Meter: "<<m<<"m";
//
//    d1.ininches();
//
//    return 0;
//}

/// DEFINE CLASS BOX AND FIND VOLUME
//#include<iostream>
//using namespace std;
//class Box
//{
//    int length;
//    int width;
//    int height;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the length, width and height: ";
//        cin>>length>>width>>height;
//    }
//    void out()
//    {
//      cout<<endl<<"Length: "<<length<<"\t Width: "<<width<<"\t Height: "<<height;
//    }
//
//    int getlength(int p)
//    {
//        return length;
//    }
//    int getwidth(int q)
//    {
//        return width;
//    }
//    int getheight(int q)
//    {
//        return height;
//    }
//
//    int volume()
//    {
//        int v;
//        v=length*width*height;
//        return v;
//    }
//
//    int in(int p,int q,int r)
//    {
//        int a;
//        length=p;
//        width=q;
//        height=r;
//
//        a=length*width*height;
//        return a;
//
//    }
//
//
//};
//int main()
//{
//    Box b1;
//    int v;
//    b1.in();
//    b1.out();
//    v=b1.volume();
//    cout<<endl<<"Volume of Box: "<<v;
//
//    Box b2;
//    int z;
//    b2.in(6,7,8);
//    b2.out();
//    z=b2.volume();
//
//    cout<<endl<<"Volume of Box: "<<z;
//    return 0;
//
//}

/// WAP TO DEFINE FOLLOWING CLASS AND CREATE OBJECT AND PERFORM DIFFERENT OPERATIONS
//#include<iostream>
//#include<iomanip>
//using namespace std;
//class MyArray
//{
//    int val[5];
//    int tmp[5];
//    void copyArray();
//
//public:
//    void input();
//    void display();
//    void display(int);
//    void sort();
//    void Search(int);
//    int getEvens();
//    int findOcr(int);
//};
//void MyArray::input()
//{
//    cout<<endl<<"Enter any 5 values: ";
//    for(int i=0;i<5;i++)
//    {
//        cin>>val[i];
//    }
//}
//void MyArray::display()
//{
//    cout<<endl<<"\n Elements are: ";
//    for(int i=0;i<5;i++)
//    {
//        cout<<setw(6)<<val[i];
//    }
//}
//void MyArray::display(int k)
//{
//    cout<<endl<<"Elements are: ";
//    for(int i=0;i<5;i++)
//    {
//        cout<<setw(6)<<tmp[i];
//    }
//}
//
//void MyArray::sort()
//{
//    copyArray();
//    int i,j,t;
//    for(i=0;i<4;i++)
//    {
//        for(j=i+1;j<5;j++)
//        {
//            if(tmp[i]>tmp[j])
//            {
//                t=tmp[i];
//                tmp[i]=tmp[j];
//                tmp[j]=t;
//            }
//        }
//    }
//    cout<<endl<<"\n Sorted array: ";
//    display(1);
//
//}
//void MyArray::copyArray()
//{
//    for(int i=0;i<5;i++)
//    {
//        tmp[i]=val[i];
//    }
//    cout<<endl<<"\n Copied Array: ";
//    display(1);
//}
//void MyArray::binarySearch(int no)
//{
//    copyArray();
//    sort();
//
//    int start=0,end=4,mid,flg=0;
//    do
//    {
//        mid=(start+end)/2;
//        if(tmp[mid]==no)
//        {
//            flg=1;
//            break;
//        }
//        else if(no<tmp[mid])
//        {
//            end=mid-1;
//        }
//        else if(no>tmp[mid])
//        {
//            start=mid+1;
//        }
//
//    }while(start<=end);
//
//    if(flg==1)
//    {
//        cout<<endl<<"\n Number is present at "<<mid<<" position";
//    }
//    else
//    {
//        cout<<endl<<"\n Number is not present in an array";
//    }
//}
//int MyArray::getEvens()
//{
//    cout<<endl<<"\n Even Numbers are:";
//    int cnt=0;
//    for(int i=0;i<5;i++)
//    {
//        if(tmp[i]%2==0)
//        {
//            cnt++;
//            cout<<setw(6)<<tmp[i];
//        }
//    }
//    return cnt;
//}
//int MyArray::findOcr(int no)
//{
//    int cnt=0;
//    for(int i=0;i<5;i++)
//    {
//        if(val[i]==no)
//        {
//            cnt++;
//        }
//    }
//    return cnt;
//}
//int main()
//{
//    MyArray m1;
//    int even,ocr,no1,no2;
//    m1.input();
//    m1.display();
//    m1.sort();
//    cout<<endl<<"\nEnter the number to be searched";
//    cin>>no1;
//    m1.binarySearch(no1);
//
//    even=m1.getEvens();
//    cout<<"\n Count of even numbers: "<<even;
//
//    cout<<endl<<"\n Enter the number for occurance";
//    cin>>no2;
//    ocr=m1.findOcr(no2);
//    cout<<endl<<"\n Occurance of "<<no2<<"is "<<ocr;
//
//    return 0;
//
//}

/// DEFINING THE PRIVATE FUNCTION WITHIN CLASS
//#include<iostream>
//#include<iomanip>
//using namespace std;
//class Result
//{
//    private:
//	int sub1;
//	int sub2;
//	int sub3;
//	void getstatus()
//	{
//		if(sub1>=40 && sub2>=40 && sub3>=40)
//		{
//			cout<<endl<<"Result: Pass"<<"\t with percentage: "<<setprecision(4)<<(sub1+sub2+sub3)/3.0;
//		}
//		else
//		{
//			cout<<endl<<"Result: Fail";
//		}
//	}
//    public:
//	void input()
//	{
//		cout<<endl<<"Enter the marks in 3 subjects: ";
//		cin>>sub1>>sub2>>sub3;
//	}
//	void display()
//	{
//		cout<<endl<<"Marks: "<<sub1<<"\t"<<sub2<<"\t"<<sub3;
//		getstatus();
//	}
//};
//int main()
//{
//    Result r1;
//    r1.input();
//    r1.display();
//
//    return 0;
//}

/// USING ARRAY AS A MEMBER OF CLASS
//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//class Result
//{
//    int s[5];
//
//public:
//    void setmarks()
//    {
//        cout<<endl<<"Enter the marks of 5 subjects: ";
//        for(int i=0;i<5;i++)
//        {
//            cin>>s[i];
//        }
//    }
//    void showmarks()
//    {
//        for(int i=0;i<5;i++)
//        {
//            cout<<endl<<"Subject"<<(i+1)<<": "<<setw(6)<<s[i];
//        }
//    }
//    void showResult()
//    {
//        int tot=0,flg=0;
//        float per=0;
//
//        for(int i=0;i<5;i++)
//        {
//            if(s[i]<40)
//            {
//                flg=1;
//                tot=0;
//                break;
//            }
//            tot=tot+s[i];
//        }
//        if(flg==0)
//        {
//            per=tot/5.0;
//            cout<<"\n Student is pass with "<<per<<"%";
//        }
//        else
//        {
//            cout<<"\n Student is fail";
//        }
//    }
//};
//int main()
//{
//    Result r;
//    r.setmarks();
//    r.showmarks();
//    r.showResult();
//
//    return 0;
//}

/// PASSING OBJECT AS AN ARGUMENT TO MEMBER FUNCTION
//#include<iostream>
//using namespace std;
//class String
//{
//private:
//    char data[50];
//
//public:
//    void setString()
//    {
//        cout<<endl<<"Enter the string: ";
//        cin.getline(data,50);
//    }
//    char * getString()
//    {
//        return data;
//    }
//    int getLength()
//    {
//        int i;
//        for(i=0;data[i]!='\0';i++);
//        return i;
//    }
//    int compare(String t)
//    {
//        int i,j,flg=0;
//
//        for(int i=0;data[i]!='\0';i++);
//        for(int j=0;data[j]!='\0';j++);
//
//        if(i==j)
//        {
//            for(i=0;i<=j;i++)
//            {
//                if(data[i]!=t.data[j])
//                {
//                    flg=1;
//                    break;
//                }
//            }
//        }
//        else
//        {
//            flg=1;
//        }
//        return flg;
//    }
//};
//
//int main()
//{
//    String s1;
//    s1.setString();
//    cout<<endl<<"The String s1 is: "<<s1.getString();
//
//    String s2;
//    s2.setString();
//    cout<<endl<<"The String s2 is: "<<s2.getString();
//
//    int t=s2.getLength();
//
//    cout<<endl<<"The Length of s2 is: "<<t;
//
//    if(!s1.compare(s2))
//    {
//        cout<<endl<<"Strings are same";
//    }
//    else
//    {
//        cout<<endl<<"Strings are not same";
//    }
//    return 0;
//
//}

/// POINTER AS A MEMBER OF CLASS
//#include<iostream>
//#include<iomanip>
//using namespace std;
//class DynamicArray
//{
//private:
//    int *p;
//    int cnt;
//
//public:
//    void input()
//    {
//
//        cout<<endl<<"Enter the element count: ";
//        cin>>cnt;
//        p=new int[cnt];
//
//        cout<<endl<<"Enter the "<<cnt<<" Nos";
//        for(int i=0;i<cnt;i++)
//        {
//            cin>>*(p+i);
//        }
//    }
//    void output()
//    {
//        cout<<endl<<"Elements are: ";
//        for(int i=0;i<cnt;i++)
//        {
//            cout<<setw(6)<<*(p+i);
//        }
//    }
//};
//
//int main()
//{
//    DynamicArray da;
//
//    da.input();
//    da.output();
//
//    return 0;
//}

 /// USING STATIC FUNCTION WITHIN CLASS
// #include<iostream>
// using namespace std;
// class Number
// {
// public:
//    static int getReverse(int no)
//    {
//        int rev=0;
//        while(no!=0)
//        {
//            rev=rev*10+(no%10);
//            no=no/10;
//        }
//        return rev;
//    }
//
// };
// int main()
// {
//     int no;
//
//     cout<<endl<<"Enter any number: ";
//     cin>>no;
//
//     int r= Number::getReverse(no);
//     cout<<endl<<"Reverse of "<<no<<" is "<<r;
//     return 0;
// }

/// ANOTHER EXAMPLE OF COPY ARRAY
//#include<iostream>
//#include<iomanip>
//using namespace std;
//class Array
//{
//public:
//
//    static void copyArray(int x[],int y[])
//    {
//        for(int i=0;i<5;i++)
//        {
//            y[i]=x[i];
//        }
//    }
//};
//int main()
//{
//    int x[]={1,2,3,4,5};
//    int y[5];
//
//    cout<<endl<<"Array elements of X:";
//    for(int i=0;i<5;i++)
//    {
//        cout<<setw(6)<<x[i];
//    }
//    cout<<endl;
//    Array::copyArray(x,y);
//
//    cout<<endl<<"Array elements of Y:";
//    for(int i=0;i<5;i++)
//    {
//        cout<<setw(6)<<y[i];
//    }
//
//    cout<<endl;
//}

/// CLASS FOR ITEM AND DISPLAY TOTALPRICE
//#include<iostream>
//#include<iomanip>
//using namespace std;
//class Item
//{
//private:
//
//    int icode;
//    float ipr;
//    static float tot;
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the code of item: ";
//        cin>>icode;
//
//        cout<<endl<<"Enter the price of item: ";
//        cin>>ipr;
//
//        tot=tot+ipr;
//    }
//
//    void out()
//    {
//        cout<<endl<<"code of item: "<<icode<<" \t Price of item: "<<ipr;
//    }
//    void displaytot()
//    {
//        cout<<endl<<"TotalBill: "<<tot<<"Rs";
//    }
//};
//float Item::tot;
//int main()
//{
//    Item a1,a2,a3,a4;
//    a1.in();
//    a2.in();
//    a3.in();
//    a4.in();
//
//    a1.out();
//    a2.out();
//    a3.out();
//    a4.out();
//
//    a1.displaytot();
//    return 0;
//}

/// ARRAY OF OBJECTS HAVING STATIC FUNCTIONS
//#include<iostream>
//#include<iomanip>
//using namespace std;
//class Item
//{
//    int icode;
//    int ipr;
//    static float tot;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the code of item: ";
//        cin>>icode;
//
//        cout<<endl<<"Enter the price of item: ";
//        cin>>ipr;
//
//        tot=tot+ipr;
//    }
//    void out()
//    {
//        cout<<endl<<"code of item: "<<icode<<" \t Price of item: "<<ipr;
//    }
//    static void displaytot()
//    {
//        cout<<endl<<"TotalBill: "<<tot;
//    }
//
//};
//float Item::tot;
//int main()
//{
//    Item x[5];
//    int i;
//    cout<<endl<<"Enter the details of five items: ";
//    for(i=0;i<5;i++)
//    {
//        x[i].in();
//    }
//
//    cout<<endl<<"Details of Items: ";
//    for(i=0;i<5;i++)
//    {
//        x[i].out();
//    }
//
//    Item::displaytot();
//
//    return 0;
//}

/// WAP CLASS FOR TIME ADDITION
//#include<iostream>
//using namespace std;
//class Time
//{
//    int hrs;
//    int mins;
//    int sec;
//
//public:
//    void setTime()
//    {
//        cout<<endl<<"Enter time in (hh:mm:ss) format: ";
//        cin>>hrs>>mins>>sec;
//    }
//    void setTime(int a,int b,int c)
//    {
//        hrs=a;
//        mins=b;
//        sec=c;
//    }
//    void getTime()
//    {
//        cout<<endl<<"Time is: "<<hrs<<":"<<mins<<":"<<sec;
//    }
//    void addTime(Time t1, Time t2)
//    {
//        sec=t1.sec+t2.sec;
//        mins=t1.mins+t2.mins+(sec/60);
//        sec=sec%60;
//
//        hrs=t1.hrs+t2.hrs+(mins/60);
//        mins=mins%60;
//    }
//};
//int main()
//{
//    Time t1,t2,t3;
//    t1.setTime();
//
//    int a,b,c;
//    cout<<endl<<"Enter time in (hh:mm:ss) format: ";
//    cin>>a>>b>>c;
//    t2.setTime(a,b,c);
//
//    cout<<endl<<"T1: "; t1.getTime();
//    cout<<endl<<"T2: "; t2.getTime();
//
//    t3.addTime(t1,t2);
//    cout<<endl<<"T3: "; t3.getTime();
//    return 0;
//}
///WAP CLASS FOR TIME ADDITION WITH RETURN TYPE
//#include<iostream>
//using namespace std;
//class Time
//{
//    int hrs;
//    int mins;
//    int sec;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the time in (hh:rr:ss)";
//        cin>>hrs>>mins>>sec;
//    }
//    void showtime()
//    {
//        cout<<endl<<"Time is: "<<hrs<<":"<<mins<<":"<<sec;
//    }
//    Time addtime(Time t2)
//    {
//        Time tmp;
//        tmp.sec=sec+t2.sec;
//        tmp.mins=mins+t2.mins+(tmp.sec/60);
//        tmp.sec=tmp.sec%60;
//
//        tmp.hrs=hrs+t2.hrs+(tmp.mins/60);
//        tmp.mins=tmp.mins%60;
//        return tmp;
//    }
//};
//int main()
//{
//    Time t1,t2,t3;
//    t1.in();
//    t2.in();
//
//    cout<<endl<<"T1: "; t1.showtime();
//    cout<<endl<<"T2: "; t2.showtime();
//
//    t3=t1.addtime(t2);
//
//    cout<<endl<<"T3: "; t3.showtime();
//    return 0;
//}

/// WRITE A CLASS FOR ADDITION OF COMPLEX NUMBERS
//#include<iostream>
//using namespace std;
//class Complex
//{
//    int real;
//    int img;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the Real and imaginary number: ";
//        cin>>real>>img;
//    }
//    void setin(int a, int b)
//    {
//        real=a;
//        img=b;
//    }
//    void out()
//    {
//        cout<<endl<<"Complex Number: "<<real<<"+"<<img<<"i";
//        cout<<endl;
//    }
//    void add(Complex c1, Complex c2)
//    {
//        real=c1.real+c2.real;
//        img=c1.img+c2.img;
//    }
//    void subtract(Complex c1, Complex c2)
//    {
//        real=c1.real-c2.real;
//        img=c1.img-c2.img;
//    }
//    void multiplication(Complex c1,Complex c2)
//    {
//        real=(c1.real*c2.real)-(c1.img*c2.img);
//        img=(c1.real*c2.img)+(c2.real*c1.img);
//    }
//};
//
//int main()
//{
//    Complex c1,c2,a,s,m;
//    c1.in();
//
//    int x,y;
//    cout<<endl<<"Enter the real and imaginary numbers: ";
//    cin>>x>>y;
//    c2.setin(x,y);
//
//    cout<<endl<<"C1: "; c1.out();
//    cout<<endl<<"C2: "; c2.out();
//
//    a.add(c1,c2);
//    cout<<endl<<"Addition of Two: ";a.out();
//
//    s.subtract(c1,c2);
//    cout<<endl<<"Subtraction of Two: "; s.out();
//
//    m.multiplication(c1,c2);
//    cout<<endl<<"Multiplication of Two: "; m.out();
//    return 0;
//}

/// WRITE A CLASS FOR ADDITION OF COMPLEX NUMBERS WITH RETURN TYPE
//#include<iostream>
//using namespace std;
//class Complex
//{
//    int real;
//    int img;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the real and imaginary part of number: ";
//        cin>>real>>img;
//    }
//    void out()
//    {
//        cout<<endl<<"Complex Number: "<<real<<"+"<<img<<"i";
//        cout<<endl;
//    }
//    Complex addComplex(Complex c2)
//    {
//        Complex tmp;
//        tmp.real=real+c2.real;
//        tmp.img=img+c2.img;
//        return tmp;
//    }
//    Complex subComplex(Complex c2)
//    {
//        Complex tmp;
//        tmp.real=real-c2.real;
//        tmp.img=img-c2.img;
//        return tmp;
//    }
//    Complex mulComplex(Complex c2)
//    {
//        Complex tmp;
//        tmp.real=(real*c2.real)-(img*c2.img);
//        tmp.img=(real*c2.img)+(c2.real*img);
//        return tmp;
//    }
//};
//int main()
//{
//    Complex c1,c2,c3,c4,c5;
//    c1.in();
//    c2.in();
//
//    cout<<endl<<"C1: "; c1.out();
//    cout<<endl<<"C2: "; c2.out();
//
//    c3=c1.addComplex(c2);
//    cout<<endl<<"Addition: "; c3.out();
//
//    c4=c1.subComplex(c2);
//    cout<<endl<<"Subtraction: "; c4.out();
//
//    c5=c1.mulComplex(c2);
//    cout<<endl<<"Multiplication: "; c5.out();
//
//    return 0;
//}

/// FRIEND FUNCTION
//#include<iostream>
//using namespace std;
//class Person
//{
//private:
//    char nm[50];
//    int age;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the name of person: ";
//        cin.getline(nm,50);
//
//        cout<<endl<<"Enter the age: ";
//        cin>>age;
//    }
//    void display()
//    {
//        cout<<endl<<"Person Details: Name: "<<nm<<"\t Age: "<<age;
//    }
//    friend void showInfo(Person p);
//};
//void showInfo(Person p)
//    {
//        cout<<endl<<"Person Information: Name: "<<p.nm<<"\t Age: "<<p.age;
//    }
//int main()
//{
//    Person p;
//    p.in();
//    p.display();
//
//    showInfo(p);
//    return 0;
//}

/// Outside function as a friend of two or more classes
//#include<iostream>
//using namespace std;
//class Student;
//class Person
//{
//    char nm[50];
//    int age;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter name of Person: ";
//        cin.getline(nm,50);
//        cout<<endl<<"Enter the age of person: ";
//        cin>>age;
//    }
//    void out()
//    {
//        cout<<"Person Information: Name: "<<nm<<"Age: "<<age;
//    }
//    friend void findElder(Person p, Student s);
//
//};
//
//class Student
//{
//    char nm[50];
//    int age;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter name of Student: ";
//        cin.ignore();
//        cin.getline(nm,50);
//        cout<<endl<<"Enter the age of Student: ";
//        cin>>age;
//    }
//    void out()
//    {
//        cout<<endl<<"Student Information: Name: "<<nm<<"\t Age: "<<age;
//        cout<<endl;
//
//    }
//    friend void findElder(Person p, Student s);
//
//};
//void findElder(Person p, Student s)
//{
//    if(p.age>s.age)
//    {
//        cout<<endl<<"Elder Information:  Name: "<<p.nm<<"\t Age: "<<p.age;
//    }
//    else
//    {
//        cout<<endl<<"Elder Information:  Name: "<<s.nm<<"\t Age: "<<s.age;
//    }
//}
//int main()
//{
//    Person p;
//    p.in();
//    p.out();
//
//    Student s;
//    s.in();
//    s.out();
//
//    findElder(p,s);
//}

///  Member Functions of one class- can be friend of another class
//#include<iostream>
//using namespace std;
//class Student;
//class Person
//{
//    char nm[50];
//    int age;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the name of person: ";
//        cin.ignore();
//        cin.getline(nm,50);
//        cout<<endl<<"Enter the age of person: ";
//        cin>>age;
//    }
//     void out(Student s);
//};
//class Student
//{
//    char nm[50];
//    int age;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the name of Student: ";
//        cin.getline(nm,50);
//        cout<<endl<<"Enter the age of Student: ";
//        cin>>age;
//    }
//    void out()
//    {
//        cout<<endl<<"Student Information: Name: "<<nm<<"\t Age: "<<age;
//    }
//    friend void Person::out(Student);
//
//};
//void Person::out(Student s)
//{
//	cout<<endl<<"Person Details - Name: "<<nm<<"\t Age: "<<age;
//	cout<<endl;
//	if(age>s.age)
//	{
//		cout<<endl<<"Person is Elder";
//	}
//	else
//	{
//		cout<<endl<<"Student is Elder";
//	}
//
//}
//
//
//int main()
//{
//    Student s;
//    s.in();
//    s.out();
//
//    Person p;
//    p.in();
//    p.out(s);
//
//
//    return 0;
//}

/// All member functions of one class as a friend of another - (Friend class)
//#include<iostream>
//using namespace std;
//class B;
//class A
//{
//private:
//
//   int a;
//   friend class B;
//};
//class B
//{
//private:
//    int b;
//
//public:
//    void in(A& a)
//    {
//        cout<<endl<<"Enter the value of a: ";
//        cin>>a.a;
//        cout<<endl<<"Enter the value of b: ";
//        cin>>b;
//    }
//    void out(A a)
//    {
//        cout<<endl<<"Value of a: "<<a.a;
//
//        cout<<endl<<"Value of b: "<<b;
//    }
//};
//int main()
//{
//    A a;
//    B b;
//
//    b.in(a);
//    b.out(a);
//    return 0;
//}

/// Swaping the private data using friend class
//#include<iostream>
//using namespace std;
//class B;
//class A
//{
//    int a;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the value of a:";
//        cin>>a;
//    }
//    void out()
//    {
//        cout<<endl<<"a:"<<a;
//    }
//    friend void Swap(A &x, B &y);
//};
//class B
//{
//    int b;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the value of b:";
//        cin>>b;
//    }
//    void out()
//    {
//        cout<<endl<<"b:"<<b;
//    }
//    friend void Swap(A &x, B &y);
//
//};
//void Swap(A &x, B &y)
//{
//    int tmp;
//    tmp=x.a;
//    x.a=y.b;
//    y.b=tmp;
//}
//int main()
//{
//    A a;
//    B b;
//
//    a.in();
//    b.in();
//    cout<<endl<<"Before swap: ";
//    a.out();
//    b.out();
//
//    Swap(a,b);
//
//    cout<<endl<<"After swap: ";
//    a.out();
//    b.out();
//
//    return 0;
//}

/// ************** CONSTRUCTOR ************************
/// DEFAULT CONSTRUCTOR : Constructor with no arguments

//#include<iostream>
//using namespace std;
//class Demo
//{
//private:
//    int x;
//    float y;
//    double z;
//
//public:
//    Demo()
//    {
//        cout<<endl<<"Default Constructor";
//        x=1;
//        y=2.3;
//        z=56.143;
//    }
//    void in()
//    {
//        cout<<endl<<"Enter the value of x,y and z";
//        cin>>x>>y>>z;
//    }
//    void out()
//    {
//        cout<<endl<<"x: "<<x<<"\t y: "<<y<<"\t z: "<<z;
//    }
//};
//int main()
//{
//    Demo d1;
//    d1.out();
//
//    d1.in();
//    d1.out();
//    return 0;
//}

/// DEFINING CONSTRUCTOR OUTSIDE THE CLASS
//#include<iostream>
//using namespace std;
//class Demo
//{
//private:
//    int x;
//    float y;
//    double z;
//
//public:
//    Demo();
//    void in()
//    {
//        cout<<endl<<"Enter the value of x,y and z";
//        cin>>x>>y>>z;
//    }
//    void out()
//    {
//        cout<<endl<<"x: "<<x<<"\t y: "<<y<<"\t z: "<<z;
//    }
//};
//Demo::Demo()
//{
//    cout<<endl<<"In Default Constructor";
//    x=2;
//    y=2.3;
//    z=5.43;
//}
//int main()
//{
//    Demo d1;
//    d1.out();
//
//    d1.in();
//    d1.out();
//    return 0;
//}

/// PARAMETERIZED CONSTRUCTOR - used to collect arguments
//#include<iostream>
//using namespace std;
//class Demo
//{
//private:
//    int x;
//    float y;
//    double z;
//
//public:
//    Demo()
//    {
//        x=1;
//        y=2.3;
//        z=45.6789;
//    }
//    Demo (int a,float b, double c) /// parameterized constructor
//    {
//        x=a;
//        y=b;
//        z=c;
//
//    }
//    Demo(int t) /// parameterized constructor
//    {
//        x=t;
//        y=t;
//        z=t;
//    }
//    void in()
//    {
//        cout<<endl<<"Enter the value of x, y and z: ";
//        cin>>x>>y>>z;
//    }
//    void out()
//    {
//        cout<<endl<<"value x: "<<x<<"\t y: "<<y<<"\t z: "<<z;
//    }
//};
//int main()
//{
//    Demo d1;
//    d1.out();
//
//    d1.in();
//    d1.out();
//
//    int a=2;
//    float b=3.4;
//    double c=3.4566;
//
//    Demo d2(a,b,c);
//    d2.out();
//
//    Demo d4(10);
//    d4.out();
//    return 0;
//}

/// DYNAMIC CONSTRUCTOR - used to allocate memory for class member
//#include<iostream>
//#include<iomanip>
//using namespace std;
//class Demo
//{
//private:
//    int *p;
//    int ec;
//
//public:
//    Demo()
//    {
//        p=new int[5];
//        ec=5;
//        cout<<endl<<"Enter 5 Numbers: ";
//        for(int i=0;i<ec;i++)
//        {
//            cin>>*(p+i);
//        }
//    }
//    Demo (int cnt)
//    {
//        p=new int[cnt];
//        ec=cnt;
//        cout<<endl<<"Enter "<<cnt<<" Numbers: ";
//        for(int i=0;i<ec;i++)
//        {
//            cin>>*(p+i);
//        }
//    }
//    void out()
//    {
//        cout<<endl<<"Numbers are: ";
//        for(int i=0;i<ec;i++)
//        {
//            cout<<setw(5)<<*(p+i);
//        }
//    }
//};
//int main()
//{
//    Demo d1;
//    d1.out();
//
//    Demo d2(7);
//    d2.out();
//    return 0;
//}

/// COPY CONSTRUCTOR --
//#include<iostream>
//#include<iomanip>
//using namespace std;
//class Demo
//{
//private:
//    int x;
//    float y;
//    double z;
//
//public:
//    Demo()// default constructor
//    {
//        cout<<endl<<"Default constructor";
//        x=2;
//        y=34.67;
//        z=346.346;
//    }
//    Demo(int a,float b,double c)
//    {
//        cout<<endl<<"Parameterized constructor";
//        x=a;
//        y=b;
//        z=c;
//    }
//    Demo(Demo &t)
//    {
//        cout<<endl<<"Copy Constructor";
//       x=t.x;
//       y=t.y;
//       z=t.z;
//    }
//    void out()
//    {
//        cout<<endl<<"X: "<<x<<"\t Y: "<<y<<"\t Z: "<<z;
//    }
//};
//int main()
//{
//    Demo d1;
//    d1.out();
//
//    Demo d2(2,4.5,67.567);
//    d2.out();
//
//    Demo d3(d2);
//    d3.out();
//    return 0;
//}

/// Passing default arguments to constructor:

//#include<iostream>
//using namespace std;
//class Time
//{
//    int hrs;
//    int mins;
//    int secs;
//
//public:
//    Time()
//    {
//        hrs=0;
//        mins=0;
//        secs=0;
//    }
//    Time(int a)
//    {
//        hrs=a;
//        mins=a;
//        secs=a;
//    }
//
//    Time(int a,int b,int c=33)
//    {
//        hrs=a;
//        mins=b;
//        secs=c;
//    }
//    void showTime()
//    {
//        cout<<endl<<"Time: "<<hrs<<":"<<mins<<":"<<secs;
//    }
//
//};
//int main()
//{
//    Time t1;
//    t1.showTime();
//
//    Time t2(5);
//    t2.showTime();
//
//    Time t3(5,30,40);
//    t3.showTime();
//
//    Time t4(3,40);
//    t4.showTime();
//
//    return 0;
//}

/// ************************ DESTRUCTOR *****************************
//#include<iostream>
//using namespace std;
//class Demo
//{
//public:
//    Demo()
//    {
//        cout<<endl<<"Object is created";
//    }
//    ~Demo()
//    {
//        cout<<endl<<"Object is deleted";
//    }
//};
//int main()
//{
//    Demo d;
//    return 0;
//}

///-----Other example for destructor
//#include<iostream>
//#include<iomanip>
//using namespace std;
//class Demo
//{
//private:
//    int *p;
//    int ec;
//
//public:
//    Demo()
//    {
//        p=new int [5];
//        ec=5;
//        cout<<endl<<"Enter "<<ec<<" elements: ";
//        for(int i=0;i<ec;i++)
//        {
//            cin>>*(p+i);
//        }
//    }
//    void out()
//    {
//        cout<<endl<<"Elements are: ";
//        for(int i=0;i<ec;i++)
//        {
//            cout<<setw(5)<<*(p+i);
//        }
//    }
//    ~Demo()
//    {
//        delete p;
//        cout<<endl<<"p is deleted";
//    }
//};
//int main()
//{
//    Demo d1;
//    d1.out();
//    return 0;
//}

/// COUNT THE NUMBER OF OBJECTS
//#include<iostream>
//using namespace std;
//class Demo
//{
//public:
//    static int cnt;
//    Demo()
//    {
//        cnt++;
//        cout<<endl<<"Object "<<cnt<<" is created";
//    }
//
//    ~Demo()
//    {
//        cout<<endl<<"Object "<<cnt<<" is deleted";
//        cnt--;
//    }
//};
//int Demo::cnt;
//int main()
//{
//    Demo d1,d2;
//    {
//        Demo d3,d4;
//    }
//    cout<<endl<<"End of program";
//    return 0;
//}

/// DEFINING CONST MEMBER IN THE CLASS AND ITS INITIALIZATION USING INITIALIZATION LIST
//#include<iostream>
//using namespace std;
//class Sample
//{
//private:
//    const int x;
//
//public:
//    Sample():x(10)
//    {
//
//    }
//    Sample(int a):x(a)
//    {
//
//    }
//    void show()
//    {
//        cout<<endl<<"Value of x: "<<x;
//    }
//};
//int main()
//{
//    Sample s1;
//    s1.show();
//
//    Sample s2(20);
//    s2.show();
//    return 0;
//}

/// Note carefully that initilization list will work before the constructor body.
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//class Sample
//{
//    private:
//	const int x;
//    public:
//	Sample(): x(10)
//	{
//	    cout<<endl<<"In Default Constructor x is "<<x;
//	}
//	Sample(int a):x(a)
//	{
//	    cout<<endl<<"In para Constructor x is "<<x;
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

/// CONST OBJECT AND CONST FUNCTION
//#include<iostream>
//using namespace std;
//class Sample
//{
//private:
//    int x;
//    float y;
//
//public:
//    Sample()
//    {
//        x=10;
//        y=12.34;
//    }
//    Sample(int a, float b)
//    {
//        x=a;
//        y=b;
//    }
//    void modify()
//    {
//        y=x=111;
//    }
//    void display()const
//    {
//        //x=11; not allow value to modified
//        cout<<endl<<"X= "<<x<<"Y= "<<y;
//    }
//};
//int main()
//{
//   const Sample s1;
//   s1.display();
//
//   const Sample s2(56,34.32);
//   s2.display();
//
//   //s2.modify();
//   return 0;
//}

/// DYNAMIC INITIALIZATION  OF OBJECT
//#include<iostream>
//#include<iomanip>
//using namespace std;
//class Student
//{
//private:
//    int **p;
//    int *sub;
//    int sc;
//
//public:
//    Student(){}
//    Student(int n)
//    {
//        sc=n;
//        int i,j;
//        p=new int*[n];
//        sub=new int[n];
//
//        for(i=0;i<sc;i++)
//        {
//            cout<<endl<<"Enter the subject count of "<<(i+1)<<" student: ";
//            cin>>*(sub+i);
//
//            *(p+i)=new int[*(sub+i)];
//            for(j=0;j<*(sub+i);j++)
//            {
//                *(*(p+i)+j)=0;
//            }
//        }
//    }
//
//    void inputData()
//    {
//        int i,j;
//        cout<<endl<<"Enter the marks of "<<sc<<" student: ";
//        for(i=0;i<sc;i++)
//        {
//            cout<<endl<<"Enter the marks in "<<*(sub+i)<<" subjects: ";
//            for(j=0;j<*(sub+i);j++)
//            {
//                cin>>*(*(p+i)+j);
//            }
//        }
//    }
//    void outputData()
//    {
//        int i,j;
//        cout<<endl<<"The marks of "<<sc<<" students: \n";
//        for(i=0;i<sc;i++)
//        {
//            cout<<endl<<"Student "<<i+1<<": ";
//            for(j=0;j<*(sub+i);j++)
//            {
//                cout<<setw(5)<<*(*(p+i));
//            }
//        }
//    }
//    ~Student()
//    {
//        int i;
//        for(i=0;i<sc;i++)
//        {
//            delete*(p+i);
//            cout<<endl<<"Memory released - student "<<(i+1);
//        }
//        delete p;
//    }
//};
//
//int main()
//{
//    cout<<endl<<" Enter the student count: ";
//    int cnt;
//    cin>>cnt;
//
//    Student s1(cnt);
//
//    s1.inputData();
//    s1.outputData();
//
//    return 0;
//}

///********************* OPERATOR OVERLOADING ************
//#include<iostream>
//using namespace std;
//class Test
//{
//public:
//    void operator-()
//    {
//        cout<<endl<<"In operator <op> function";
//    }
//};
//int main()
//{
//    int x=10,y;
//    y=-x;
//    cout<<endl<<"y: "<<y;
//
//    Test t;
//    -t;
//
//    return 0;
//}

/// PERFORMING UNARY OPERATION
//#include<iostream>
//using namespace std;
//class Number
//{
//private:
//    int x;
//    float y;
//
//public:
//    Number()
//    {
//        x=1;
//        y=1.1;
//    }
//    Number(int a,float b)
//    {
//        x=a;
//        y=b;
//    }
//    void in()
//    {
//        cout<<endl<<"Enter the values of x and y: ";
//        cin>>x>>y;
//    }
//    void out()
//    {
//        cout<<"X: "<<x<<"\t Y: "<<y;
//    }
//    void operator-()
//    {
//        cout<<endl<<"In Operator - function";
//        x=-x;
//        y=-y;
//    }
//};
//int main()
//{
//    Number n1(2,-4.3);
//
//    cout<<endl<<"N1: ";
//    n1.out();
//    -n1; // n1.operator-()
//    cout<<endl<<"N1: ";
//    n1.out();
//    return 0;
//}

/// OVERLOADING -OPERATOR TO GET AN OBJECT MULTI BY 10
//#include<iostream>
//using namespace std;
//class Number
//{
//private:
//    int x;
//    float y;
//
//public:
//    Number()
//    {
//        x=1;
//        y=1.1;
//    }
//    Number(int a, float b)
//    {
//        x=a;
//        y=b;
//    }
//    void in()
//    {
//        cout<<endl<<"Enter the values of x and y: ";
//        cin>>x>>y;
//    }
//    void out()
//    {
//        cout<<"X: "<<x<<"\t Y: "<<y;
//    }
//    void operator-();
//};
//void Number::operator-()
//{
//    cout<<endl<<"In operator -() function: ";
//    x=x*10;
//    y=y*10;
//}
//int main()
//{
//    Number n1(2,-4.3);
//
//    cout<<endl<<"N1: "; n1.out();
//    -n1;
//    cout<<endl<<"N1: "; n1.out();
//
//    return 0;
//}

/// Overloading unary operator as a friend
//#include<iostream>
//using namespace std;
//class Number
//{
//private:
//    int x;
//    float y;
//
//public:
//    Number()
//    {
//        x=1;
//        y=1.1;
//    }
//    Number(int a,float b)
//    {
//        x=a;
//        y=b;
//    }
//    void in()
//    {
//        cout<<endl<<"Enter the values of x and y: ";
//        cin>>x>>y;
//    }
//    void out()
//    {
//        cout<<endl<<"X: "<<x<<"\t Y: "<<y;
//    }
//    friend void operator-(Number &t);
//};
//void operator-(Number &t)
//{
//    cout<<endl<<"In - operator function: ";
//    t.x=-t.x;
//    t.y=-t.y;
//}
//int main()
//{
//    Number n1(2,-4.3);
//
//    cout<<endl<<"N1: "; n1.out();
//    -n1;
//    cout<<endl<<"N1: "; n1.out();
//}

/// Binary operator overloading
//#include<iostream>
//#include<string.h>
//using namespace std;
//class MyString
//{
//private:
//    char *s;
//
//public:
//    int length;
//    MyString()
//    {
//        length=0;
//        s=NULL;
//    }
//    MyString(char *t)
//    {
//        length=strlen(t);
//        s=new char[length+1];
//        strcpy(s,t);
//    }
//    char * getString()
//    {
//        return s;
//    }
//    MyString operator +(MyString t)
//    {
//        MyString tmp;
//        tmp.length=strlen(s)+strlen(t.s);
//        tmp.s=new char[length+1];
//        strcpy(tmp.s,s);
//        strcat(tmp.s,t.s);
//        return tmp;
//    }
//};
//int main()
//{
//    MyString str1("Good day");
//    MyString str2("how are you");
//
//    cout<<endl<<"String 1: "<<str1.getString();
//    cout<<endl<<"String 2: "<<str2.getString();
//
//    MyString str3;
//    str3=str1+str2;
//    cout<<endl<<"String 3: "<<str3.getString();
//
//    cout<<endl<<"Length of str1: "<<str1.length;
//    cout<<endl<<"Length of str2: "<<str2.length;
//    cout<<endl<<"Length of str3: "<<str3.length;
//    return 0;
//
//}

/// BINARY OPERATOR OVERLOADING USING FRIEND
//#include<iostream>
//#include<string.h>
//using namespace std;
//class MyString
//{
//private:
//    char *s;
//
//public:
//    int length;
//    MyString()
//    {
//        length=0;
//        s=NULL;
//    }
//    MyString(char *t)
//    {
//        length=strlen(t);
//        s=new char[length+1];
//        strcpy(s,t);
//    }
//    char * getString()
//    {
//        return s;
//    }
//    friend MyString operator +(MyString t1,MyString t2);
//
//};
//MyString operator +(MyString t1,MyString t2)
//{
//    MyString tmp;
//    tmp.length=strlen(t1.s)+strlen(t2.s);
//    tmp.s=new char[tmp.length+1];
//    strcpy(tmp.s,t1.s);
//    strcat(tmp.s,t2.s);
//    return tmp;
//}
//int main()
//{
//    MyString str1("Good day");
//    MyString str2("how are you");
//
//    cout<<endl<<"String 1: "<<str1.getString();
//    cout<<endl<<"String 2: "<<str2.getString();
//
//    MyString str3;
//    str3=str1+str2;
//    cout<<endl<<"String 3: "<<str3.getString();
//
//    cout<<endl<<"Length of str1: "<<str1.length;
//    cout<<endl<<"Length of str2: "<<str2.length;
//    cout<<endl<<"Length of str3: "<<str3.length;
//    return 0;
//
//}

/// Lets add two complex numbers using friend is prefered
//#include<iostream>
//using namespace std;
//class Complex
//{
//private:
//    int real;
//    int img;
//
//public:
//    void input()
//    {
//        cout<<endl<<"Enter real part: ";
//        cin>>real;
//        cout<<endl<<"Enter img part: ";
//        cin>>img;
//    }
//    void output()
//    {
//        cout<<real<<"+"<<img<<"i";
//        cout<<endl;
//    }
//    Complex operator+(Complex t)
//    {
//        Complex tmp;
//        tmp.real=real+t.real;
//        tmp.img=img+t.img;
//        return tmp;
//    }
//};
//int main()
//{
//    Complex c1,c2,c3;
//    c1.input();
//    c2.input();
//
//    c3=c1+c2;
//
//    cout<<endl<<"C1: "; c1.output();
//    cout<<endl<<"C2: "; c2.output();
//    cout<<endl<<"C3: "; c3.output();
//
//    return 0;
//}

/// Add two time object using * operator overload in both ways
/// (operator<>() as member function and as a friend function)
//#include<iostream>
//using namespace std;
//class Time
//{
//    int hrs;
//    int mins;
//    int sec;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the time in (hh:rr:ss)";
//        cin>>hrs>>mins>>sec;
//    }
//    void showtime()
//    {
//        cout<<endl<<"Time is: "<<hrs<<":"<<mins<<":"<<sec;
//    }
//    Time operator+(Time t)
//    {
//        Time tmp;
//        tmp.sec=sec+t.sec;
//        tmp.mins=mins+t.mins+(tmp.sec/60);
//        tmp.sec=tmp.sec%60;
//
//        tmp.hrs=hrs+t.hrs+(tmp.mins/60);
//        tmp.mins=tmp.mins%60;
//        return tmp;
//    }
//};
//int main()
//{
//    Time t1,t2,t3;
//    t1.in();
//    t2.in();
//
//    cout<<endl<<"T1: "; t1.showtime();
//    cout<<endl<<"T2: "; t2.showtime();
//
//    t3=t1+t2;
//
//    cout<<endl<<"T3: "; t3.showtime();
//    return 0;
//}

/// OVERLOADING >> AND << OPERATORS
//#include<iostream>
//using namespace std;
//class Demo
//{
//public:
//    friend void operator>>(istream& is, Demo ob);
//    friend void operator>>(ostream& os, Demo ob);
//
//};
//void operator>>(istream& is, Demo ob)
//{
//    cout<<endl<<"Data Input";
//}
//void operator<<(ostream& os, Demo ob)
//{
//    cout<<endl<<"Data Display";
//}
//int main()
//{
//    Demo d;
//
//    cin>>d;
//    cout<<d;
//    return 0;
//
//}

/// Another example for << and >>
//#include<iostream>
//using namespace std;
//class Array
//{
//private:
//    int * data;
//    int size;
//
//public:
//    Array(int size):size(size)
//    {
//        data=new int[size];
//    }
//    ~Array()
//    {
//        delete[]data;
//    }
//    friend ostream & operator<<(ostream& os,Array& arr);
//    friend istream & operator>>(istream& is,Array& arr);
//
//
//};
//ostream& operator <<(ostream& os, Array & arr)
//{
//    for(int i=0;i<arr.size;++i)
//    {
//        os<< arr.data[i]<<" ";
//    }
//    return os;
//}
//istream & operator>>(istream & is, Array & arr)
//{
//    for(int i=0;i<arr.size;++i)
//    {
//        is>>arr.data[i];
//    }
//    return is;
//}
//int main()
//{
//    int size;
//
//    cout<<endl<<"Enter the size of array: ";
//    cin>>size;
//
//    Array arr(size);
//
//    cout<<endl<<"Enter "<<size<<" elements for array: \n";
//    cin>>arr;
//
//    cout<<endl<<"Elements are: "<<arr<<endl;
//}

/// TYPE CONVERSIONS IN C++
//#include<iostream>
//using namespace std;
//class Rect;
//class Square
//{
//private:
//    int side;
//
//public:
//    Square()
//    {
//        side=0;
//    }
//    Square(int t)
//    {
//        side=t;
//    }
//    int area()
//    {
//        return side*side;
//    }
//    friend class Rect;
//};
//class Rect
//{
//private:
//    int l;
//    int b;
//
//public:
//    Rect()
//    {
//        l=b=0;
//    }
//    Rect(int a,int b)
//    {
//        l=a;
//        b=b;
//    }
//    Rect(Square t)
//    {
//        l=b=t.side;
//    }
//    int area()
//    {
//        return l*b;
//    }
//};
//int main()
//{
//    int n=5;
//    Square s1(n);// base type converted into class type
//
//    int a=s1.area(); // class type converted into base type
//
//    cout<<endl<<"Area of Square: "<<a;
//
//    Rect r1(s1);
//    a=r1.area();
//    cout<<endl<<"Area of Rectangle: "<<a;
//
//    return 0;
//}

/// ********** INHERITANCE **********
///Single Inheritance:  public Visibility - calling inherited functions in a nested manner

//#include<iostream>
//using namespace std;
//class A
//{
//    double x;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the value of x: ";
//        cin>>x;
//    }
//    void out()
//    {
//        cout<<endl<<"X= "<<x;
//    }
//};
//class B:public A
//{
//    double y;
//
//public:
//    void set()
//    {
//        in();
//        cout<<endl<<"Enter the value of y: ";
//        cin>>y;
//    }
//    void show()
//    {
//        out();
//        cout<<endl<<"y: "<<y;
//    }
//};
//int main()
//{
//    B ob2;
//    ob2.set();
//    ob2.show();
//    return 0;
//}

///Single Inheritance:  public Visibility - calling inherited functions directly using child class object
//#include<iostream>
//using namespace std;
//class A
//{
//    double x;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the value of x: ";
//        cin>>x;
//    }
//    void out()
//    {
//        cout<<endl<<"X= "<<x;
//    }
//};
//class B: public A
//{
//    double y;
//
//public:
//    void set()
//    {
//       cout<<endl<<"Enter the value of y: ";
//       cin>>y;
//    }
//    void show()
//    {
//        cout<<endl<<"Y= "<<y;
//    }
//};
//int main()
//{
//    B b;
//    b.in();
//    b.set();
//
//    b.out();
//    b.show();
//
//    return 0;
//}

/// SINGLE INHERITANCE : PRIVATE
//#include<iostream>
//using namespace std;
//class A
//{
//    double x;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the value of x: ";
//        cin>>x;
//    }
//    void out()
//    {
//        cout<<endl<<"X= "<<x;
//    }
//};
//class B:private A
//{
//    double y;
//
//public:
//    void set()
//    {
//        in();
//        cout<<endl<<"Enter the value of y: ";
//        cin>>y;
//    }
//    void show()
//    {
//        out();
//        cout<<endl<<"Y= "<<y;
//    }
//};
//int main()
//{
//    B b;
//    b.set();
//    b.show();
//    return 0;
//}

/// ANOTHER EXAMPLE
//#include<iostream>
//using namespace std;
//class Person
//{
//    char nm[50];
//    int age;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the name: ";
//        cin.getline(nm,50);
//
//        cout<<endl<<"Enter the age: ";
//        cin>>age;
//    }
//    void out()
//    {
//        cout<<endl<<"Name: "<<nm<<"\t age: "<<age;
//    }
//};
//class Student:private Person
//{
//    float sper;
//    float hper;
//
//public:
//    void set()
//    {
//        in();
//        cout<<endl<<"Enter the 10th and 12th percentage: ";
//        cin>>sper>>hper;
//    }
//    void show()
//    {
//        out();
//        cout<<endl<<"10th: "<<sper<<"\t 12th: "<<hper;
//    }
//};
//int main()
//{
//    Student s;
//    s.set();
//    s.show();
//
//    return 0;
//}

/// Using method overloading in inheritancy
//#include<iostream>
//#include<string.h>
//using namespace std;
//class Person
//{
//    char nm[50];
//    int age;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the name: ";
//        cin.getline(nm,50);
//
//        cout<<endl<<"Enter the age: ";
//        cin>>age;
//    }
//    void in(char a1[],int a2)
//    {
//        strcpy(nm,a1);
//        age=a2;
//    }
//    void out()
//    {
//        cout<<endl<<"Name: "<<nm<<"\t age: "<<age;
//    }
//};
//class Student:private Person
//{
//    float sper;
//    float hper;
//
//public:
//    void set()
//    {
//        in();
//        cout<<endl<<"Enter the 10th and 12th percentage: ";
//        cin>>sper>>hper;
//    }
//    void set(char nm[],int a1,float a2,float a3)
//    {
//        in(nm,a1);
//        sper=a2;
//        hper=a3;
//    }
//    void show()
//    {
//        out();
//        cout<<endl<<"10th: "<<sper<<"\t 12th: "<<hper;
//        cout<<endl;
//    }
//};
//int main()
//{
//    Student s1;
//    s1.set();
//    s1.show();
//
//    Student s2;
//    s2.set("vishu",22,93.80,67.31);
//    s2.show();
//
//    return 0;
//}

/// Using constructors in inheritency
//#include<iostream>
//#include<string.h>
//using namespace std;
//class A
//{
//    int x;
//public:
//    A()
//    {
//        cout<<endl<<"In default constructor A";
//    }
//    A(int a)
//    {
//        x=a;
//        cout<<endl<<"In para constructor A";
//    }
//};
//class B: public A
//{
//    int y;
//public:
//    B()
//    {
//        cout<<endl<<"In default constructor B";
//    }
//    B(int a1, int a2):A(a1)
//    {
//        y=a2;
//        cout<<endl<<"In para constructor B";
//    }
//};
//int main()
//{
//    B b1;
//    cout<<endl<<"------------------------------"<<endl;
//    B b2(10,20);
//    return 0;
//
//}

/// ANOTHER EXAMPLE
//#include<iostream>
//#include<string.h>
//using namespace std;
//class Person
//{
//    char nm[50];
//    int age;
//
//public:
//    Person()
//    {
//        strcpy(nm,"NA");
//        age=0;
//    }
//    Person(char a[],int b)
//    {
//        strcpy(nm,a);
//        age=b;
//    }
//    void indata()
//    {
//        cout<<endl<<"Enter the person name: ";
//        cin.getline(nm,50);
//        cout<<endl<<"Enter the age: ";
//        cin>>age;
//    }
//    void indata(char a1[],int a2)
//    {
//        strcpy(nm,a1);
//        age=a2;
//    }
//    void outdata()
//    {
//        cout<<endl<<"Name: "<<nm<<"\t age: "<<age;
//    }
//};
//class Student:private Person
//{
//    float sper;
//    float hper;
//
//public:
//    Student()
//    {
//      sper=0;
//      hper=0;
//    }
//    Student(char a1[],int a2,float a3,float a4):Person(a1,a2)
//    {
//        sper=a3;
//        hper=a4;
//    }
//    void input()
//    {
//        indata();
//        cout<<endl<<"Enter the 10th percentage: ";
//        cin>>sper;
//
//        cout<<endl<<"Enter the 12th percentage: ";
//        cin>>hper;
//    }
//    void input(char s[],int a, float b,float c)
//    {
//        indata(s,a);
//        sper=b;
//        hper=c;
//    }
//    void output()
//    {
//        outdata();
//        cout<<endl<<"Percentage: 10th: "<<sper<<"\t 12th: "<<hper;
//        cout<<endl;
//    }
//};
//int main()
//{
//    Student s1;
//    s1.input();
//    s1.output();
//
//    Student s2;
//    s2.input("Kiran",22,67.65,95.80);
//    s2.output();
//
//    Student s3("om",22,78,67);
//    s3.output();
//}

/// METHOD OVERRIDING
//#include<iostream>
//using namespace std;
//class A
//{
//    int x;
//
//public:
//    A()
//    {
//        x=10;
//    }
//    void display()
//    {
//        cout<<endl<<"X= "<<x;
//    }
//};
//class B:public A
//{
//    int y;
//
//public:
//    B()
//    {
//        y=20;
//    }
//    void display()
//    {
//        cout<<endl<<"Y= "<<y;
//    }
//};
//int main()
//{
//    B ob;
//    ob.display();
//    return 0;
//}

/// TO AVOID METHOD OVERRIDING WE USE TWO METHODS
/// 1.
//#include<iostream>
//using namespace std;
//class A
//{
//    int x;
//
//public:
//    A()
//    {
//        x=10;
//    }
//    void display()
//    {
//        cout<<endl<<"X= "<<x;
//    }
//};
//class B:public A
//{
//    int y;
//
//public:
//    B()
//    {
//        y=20;
//    }
//    void display()
//    {
//        A::display();
//        cout<<endl<<"Y= "<<y;
//    }
//};
//int main()
//{
//    B ob;
//    ob.display();
//    return 0;
//}

/// 2.
//#include<iostream>
//using namespace std;
//class A
//{
//    int x;
//
//public:
//    A()
//    {
//        x=10;
//    }
//    void display()
//    {
//        cout<<endl<<"X= "<<x;
//    }
//};
//class B:public A
//{
//    int y;
//
//public:
//    B()
//    {
//        y=20;
//    }
//    void display()
//    {
//
//        cout<<endl<<"Y= "<<y;
//    }
//};
//int main()
//{
//
//    B ob;
//    ob.A::display();
//    ob.display();
//
//    return 0;
//}

///*********** PRACTICE QUESTIONS ********
//1.
//Create a class named 'Student' with a string variable 'name'
//and an integer variable 'roll_no'. Assign the value of roll_no as '2' and that
//of name as "John" by creating an object of the class Student.
//#include<iostream>
//#include<string.h>
//using namespace std;
//class Student
//{
//    char nm[50];
//    int roll_no;
//
//public:
//    void in(char a[],int b)
//    {
//        strcpy(nm,a);
//        roll_no=b;
//    }
//    void out()
//    {
//        cout<<endl<<"Name: "<<nm<<"\t Roll No: "<<roll_no;
//    }
//};
//int main()
//{
//    Student s;
//    s.in("John",2);
//    s.out();
//
//    return 0;
//}

//2.
//Assign and print the roll number, phone number and address
//of two students having names "Sam" and "John" respectively by
//creating two objects of the class 'Student'

//#include<iostream>
//#include<string.h>
//using namespace std;
//class Student
//{
//    char nm[50];
//    int roll_no;
//    long long ph;
//    char addr[100];
//
//public:
//    void in(char a[])
//    {
//        strcpy(nm,a);
//        cout<<endl<<"Enter the roll no: ";
//        cin>>roll_no;
//        cin.ignore();
//        cout<<endl<<"Enter the phone number: ";
//        cin>>ph;
//        cout<<endl<<"Enter the address: ";
//        cin.ignore();
//        cin.getline(addr,100);
//
//    }
//    void out()
//    {
//        cout<<endl<<"Name:"<<nm<<"\t Roll No:"<<roll_no<<"\t Ph no:"<<ph<<"\t Address:"<<addr;
//        cout<<endl;
//    }
//};
//int main()
//{
//    Student s1;
//    s1.in("John");
//
//    Student s2;
//    s2.in("Sam");
//
//    s1.out();
//    s2.out();
//
//    return 0;
//}

///3.
///Write a program to print the area and perimeter of a triangle having
//sides of 3, 4 and 5 units by creating a class named 'Triangle' with a
//function to print the area and perimeter.

//#include<iostream>
//#include <cmath>
//using namespace std;
//class Triangle
//{
//    float a,b,c;
//
//public:
//
//    void in()
//    {
//        cout<<endl<<"Enter the sides of triangle: ";
//        cin>>a>>b>>c;
//    }
//    void area()
//    {
//        float s= (a+b+c)/2;
//        float area= sqrt(s*(s-a)*(s-b)*(s-c));
//        cout<<endl<<"Area of Triangle: "<<area;
//    }
//    void peri()
//    {
//        float peri= a+b+c;
//        cout<<endl<<"Perimeter of Triangle: "<<peri;
//    }
//
//};
//int main()
//{
//    Triangle t;
//    t.in();
//    t.area();
//    t.peri();
//    return 0;
//}

///4.
//Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5
//units by creating a class named 'Triangle' with the constructor having the three sides as
//its parameters.

//#include<iostream>
//#include <cmath>
//using namespace std;
//class Triangle
//{
//    float a,b,c;
//
//public:
//
//    Triangle()
//    {
//        a=0;
//        b=0;
//        c=0;
//    }
//    Triangle(int a1,int a2,int a3)
//    {
//        a=a1;
//        b=a2;
//        c=a3;
//    }
//    void in()
//    {
//        cout<<endl<<"Enter the sides of triangle: ";
//        cin>>a>>b>>c;
//    }
//    void area()
//    {
//        float s= (a+b+c)/2;
//        float area= sqrt(s*(s-a)*(s-b)*(s-c));
//        cout<<endl<<"Area of Triangle: "<<area;
//    }
//    void peri()
//    {
//        float peri= a+b+c;
//        cout<<endl<<"Perimeter of Triangle: "<<peri;
//    }
//
//};
//int main()
//{
//    Triangle t(3,4,5);
//    //t.in();
//    t.area();
//    t.peri();
//    return 0;
//}

///5.
//Write a program to print the area of two rectangles having sides (4,5) and (5,8)
//respectively by creating a class named 'Rectangle' with a function named 'Area' which returns the area.
//Length and breadth are passed as parameters to its constructor.

//#include<iostream>
//using namespace std;
//class Rectangle
//{
//    double l;
//    double b;
//
//public:
//    Rectangle()
//    {
//        l=0;
//        b=0;
//    }
//    Rectangle(double a1,double a2)
//    {
//        l=a1;
//        b=a2;
//    }
//    double area()
//    {
//        return l*b;
//
//    }
//};
//int main()
//{
//    Rectangle r1(4,5);
//    double a1=r1.area();
//    cout<<endl<<"Area of Rectangle1: "<<a1;
//
//
//    Rectangle r2(5,8);
//    double a2=r2.area();
//    cout<<endl<<"Area of Rectangle2: "<<a2;
//
//
//    return 0;
//}

///6.
//Write a program to print the area of a rectangle by creating a class
//named 'Area' having two functions. First function named as 'setDim' takes the
//length and breadth of the rectangle as parameters and the second function named as 'getArea'
//returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.

//#include<iostream>
//using namespace std;
//class Rectangle
//{
//    int l,b;
//
//public:
//    void setDim()
//    {
//        cout<<endl<<"Enter the length and breadth: ";
//        cin>>l>>b;
//    }
//    int returnArea()
//    {
//        return l*b;
//    }
//};
//int main()
//{
//    Rectangle r1;
//    r1.setDim();
//    int a=r1.returnArea();
//    cout<<endl<<"Area of Rectangle: "<<a;
//
//    return 0;
//}

///7.
//Write a program to print the area of a rectangle by creating a class named 'Area'
//taking the values of its length and breadth as parameters of its constructor and
//having a function named 'returnArea' which returns the area of the rectangle.
//Length and breadth of the rectangle are entered through keyboard.

//#include<iostream>
//using namespace std;
//class Rectangle
//{
//    int l,b;
//
//public:
//
//    Rectangle()
//    {
//        l=0;
//        b=0;
//    }
//    Rectangle(int a1,int a2)
//    {
//        l=a1;
//        b=a2;
//    }
//    int area()
//    {
//        return l*b;
//    }
//};
//int main()
//{
//
//    int p,q;
//    cout<<endl<<"Enter the length and breath of rectangle: ";
//    cin>>p>>q;
//
//    Rectangle r1(p,q);
//
//    int a=r1.area();
//    cout<<endl<<"Area of Rectangle: "<<a;
//
//    return 0;
//}

///8.
//Print the average of three numbers entered by the user by creating a class named
//'Average' having a function to calculate and print the average without creating
//any object of the Average class.

//#include<iostream>
//using namespace std;
//class Average
//{
//
//public:
//    static float getAverage(float a1,float a2,float a3)
//    {
//       float avg=(a1+a2+a3)/3;
//       return avg;
//    }
//
//};
//int main()
//{
//    float p,q,r;
//    cout<<endl<<"Enter the value of p,q and r:";
//    cin>>p>>q>>r;
//    float a = Average::getAverage(p,q,r);
//    cout<<endl<<"Average: "<<a;
//    return 0;
//}

///9.
//Print the sum, difference and product of two complex numbers by
//creating a class named 'Complex' with separate functions for each
//operation whose real and imaginary parts are entered by the user.

//#include<iostream>
//using namespace std;
//class Complex
//{
//    int real;
//    int img;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the Real and imaginary number: ";
//        cin>>real>>img;
//    }
//    void setin(int a, int b)
//    {
//        real=a;
//        img=b;
//    }
//    void out()
//    {
//        cout<<endl<<"Complex Number: "<<real<<"+"<<img<<"i";
//        cout<<endl;
//    }
//    void add(Complex c1, Complex c2)
//    {
//        real=c1.real+c2.real;
//        img=c1.img+c2.img;
//    }
//    void subtract(Complex c1, Complex c2)
//    {
//        real=c1.real-c2.real;
//        img=c1.img-c2.img;
//    }
//    void multiplication(Complex c1,Complex c2)
//    {
//        real=(c1.real*c2.real)-(c1.img*c2.img);
//        img=(c1.real*c2.img)+(c2.real*c1.img);
//    }
//};
//
//int main()
//{
//    Complex c1,c2,a,s,m;
//    c1.in();
//
//    int x,y;
//    cout<<endl<<"Enter the real and imaginary numbers: ";
//    cin>>x>>y;
//    c2.setin(x,y);
//
//    cout<<endl<<"C1: "; c1.out();
//    cout<<endl<<"C2: "; c2.out();
//
//    a.add(c1,c2);
//    cout<<endl<<"Addition of Two: ";a.out();
//
//    s.subtract(c1,c2);
//    cout<<endl<<"Subtraction of Two: "; s.out();
//
//    m.multiplication(c1,c2);
//    cout<<endl<<"Multiplication of Two: "; m.out();
//    return 0;
//}

///10.
//Write a program to print the volume of a box by creating a class named 'Volume'
//with an initialization list to initialize its length, breadth and height.
//(just to make you familiar with initialization lists)
//#include<iostream>
//using namespace std;
//class Volume
//{
//    const int l,b,h;
//
//public:
//    Volume(int a1,int a2,int a3):l(a1),b(a2),h(a3)
//    {
//
//    }
//    void show()
//    {
//        cout<<endl<<"l: "<<l<<"\t b: "<<b<<"\t h: "<<h;
//        int v=l*b*h;
//        cout<<endl<<" Volume: "<<v;
//    }
//
//};
//int main()
//{
//    Volume v(3,4,5);
//    v.show();
//    return 0;
//}

///11.
//Write a program that would print the information (name, year of joining, salary, address) of three employees by creating a class named 'Employee'. The output should be as follows:
//Name        Year of joining        Address
//Robert        1994        64C- WallsStreat
//Sam        2000        68D- WallsStreat
//John        1999        26B- WallsStreat

//#include<iostream>
//#include<string.h>
//using namespace std;
//class Employee
//{
//    char nm[50];
//    int yoj;
//    char addr[100];
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the Name of employee: ";
//        cin.getline(nm,50);
//        cout<<endl<<"Enter the year of joining: ";
//        cin.ignore();
//        cin>>yoj;
//        cout<<endl<<"Enter the address: ";
//        cin.ignore();
//        cin.getline(addr,100);
//    }
//    void in(char a1[],int a2,char a3[])
//    {
//        strcpy(nm,a1);
//        yoj=a2;
//        strcpy(addr,a3);
//
//    }
//    void display()
//    {
//
//        cout<<endl<<nm<<" \t "<<yoj<<" \t              "<<addr;
//    }
//};
//int main()
//{
//    Employee e1,e2,e3;
//    cout<<endl<<"Name\t Year of joining \t Address";
//
//    e1.in("Robert",1994,"64C- WallsStreat");
//    e2.in("Sam",2000,"68D- WallsStreat");
//    e3.in("John",1999,"26B- WallsStreat");
//
//    e1.display();
//    e2.display();
//    e3.display();
//
//    return 0;
//
//}

///12.
//Add two distances in inch-feet by creating a class named 'AddDistance'.
//#include<iostream>
//using namespace std;
//class AddDistance
//{
//    double inch;
//    double feet;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the value in feet: ";
//        cin>>feet;
//        cout<<endl<<"Enter the value in inch: ";
//        cin>>inch;
//    }
//    void add(AddDistance d1, AddDistance d2)
//    {
//         feet= d1.feet + d2.feet;
//         inch= d1.inch + d2.inch;
//
//        if(inch>=12)
//        {
//            feet=feet+1;
//            inch=inch-12;
//        }
//    }
//    void out()
//    {
//        cout<<endl<<"Feet: "<<feet<<"\t Inch: "<<inch;
//    }
//};
//int main()
//{
//    AddDistance d1,d2,d3;
//    d1.in();
//    d2.in();
//
//    d3.add(d1,d2);
//    cout<<"Sum of distances:"<<endl;
//    d3.out();
//    return 0;
//}

// MULTIPLE INHERITANCE
//
//  in(), getmaths()       Exam            Sport  input()
//  out(), getchem()        |                |    output(), getpoint()
//  getphy()                |________________|
//                                  |
//                               Result
//
//   in(), getmaths()           setdata()     input()
//   out(), getchem()           display()     output()
//   getphy()                                 getpoint()
//
//
//#include<iostream>
//using namespace std;
//class Exam
//{
//    int phy;
//    int chem;
//    int maths;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the marks of physics, chemistry and maths: ";
//        cin>>phy>>chem>>maths;
//    }
//    void out()
//    {
//        cout<<endl<<"Phy: "<<phy<<"\t Chem: "<<chem<<"\t Maths: "<<maths;
//    }
//
//protected:
//    int getphy()
//    {
//        return phy;
//    }
//    int getChem()
//    {
//        return chem;
//    }
//    int getMaths()
//    {
//        return maths;
//    }
//};
//class Sport
//{
//    int point;
//
//public:
//    void input()
//    {
//        cout<<endl<<"Enter the points: ";
//        cin>>point;
//    }
//    void output()
//    {
//
//        cout<<endl<<"Points are: "<<point;
//    }
//
//protected:
//    getPoint()
//    {
//        return point;
//    }
//
//};
//class Result: public Exam, public Sport
//{
//    char resultFlg;
//
//public:
//    void setdata()
//    {
//        in();
//        input();
//
//        if(getphy()>=40 && getChem()>=40 && getMaths()>=40 && getPoint()>=5)
//        {
//            resultFlg='y';
//        }
//        else
//        {
//            resultFlg='n';
//        }
//    }
//
//    void display()
//    {
//        out();
//        output();
//        if(resultFlg=='y')
//        {
//            cout<<endl<<" Pass!!!!!!!!";
//        }
//        else
//        {
//            cout<<endl<<" Fail!!!!!!!!!!";
//        }
//    }
//};
//int main()
//{
//    Result r;
//    r.setdata();
//    r.display();
//
//    return 0;
//}
//
//    Note that the class Exam and class Sport must not contain a function having same name
//    if it contains the function with same name, then by inheritance multiple copies
//    are present in the child class Result, which will results in Ambiguity error, when
//    call that function using object of child.
//
//
// MULTIPLE INHERITANCE
//
//  input(), getmaths()    Exam            Sport  input()
//  out(), getchem()        |                |    output(), getpoint()
//  getphy()                |________________|
//                                  |
//                               Result
//
//         getmaths()           setdata()     input()
//   out(), getchem()           display()     output()
//   getphy()   input()                        getpoint()
//
//
//
//#include<iostream>
//using namespace std;
//class Exam
//{
//    int phy;
//    int chem;
//    int maths;
//
//public:
//    void input()
//    {
//        cout<<endl<<"Enter the marks of physics, chemistry and maths: ";
//        cin>>phy>>chem>>maths;
//    }
//    void out()
//    {
//        cout<<endl<<"Phy: "<<phy<<"\t Chem: "<<chem<<"\t Maths: "<<maths;
//    }
//
//protected:
//    int getphy()
//    {
//        return phy;
//    }
//    int getChem()
//    {
//        return chem;
//    }
//    int getMaths()
//    {
//        return maths;
//    }
//};
//class Sport
//{
//    int point;
//
//public:
//    void input()
//    {
//        cout<<endl<<"Enter the points: ";
//        cin>>point;
//    }
//    void output()
//    {
//
//        cout<<endl<<"Points are: "<<point;
//    }
//
//protected:
//    getPoint()
//    {
//        return point;
//    }
//
//};
//class Result: public Exam, public Sport
//{
//    char resultFlg;
//
//public:
//    void setdata()
//    {
//         input(); ///error: reference to 'input' is ambiguous|
//
//         Exam::input();
//         Sport::input();
//
//        if(getphy()>=40 && getChem()>=40 && getMaths()>=40 && getPoint()>=5)
//        {
//            resultFlg='y';
//        }
//        else
//        {
//            resultFlg='n';
//        }
//    }
//
//    void display()
//    {
//        out();
//        output();
//        if(resultFlg=='y')
//        {
//            cout<<endl<<" Pass!!!!!!!!";
//        }
//        else
//        {
//            cout<<endl<<" Fail!!!!!!!!!!";
//        }
//    }
//};
//int main()
//{
//    Result r;
//    r.setdata();
//    r.display();
//
//    return 0;
//}

/// **** HYBRID INHERITANCE ********
//#include<iostream>
//using namespace std;
//class Student
//{
//    int id;
//    char nm[50];
//
//public:
//    void setData()
//    {
//        cout<<endl<<"Enter the id: ";
//        cin>>id;
//
//        cout<<endl<<"Enter the name: ";
//        cin.ignore();
//        cin.getline(nm,50);
//    }
//    void getData()
//    {
//        cout<<endl<<"Id: "<<id<<"\t Name: "<<nm;
//    }
//};
//class Exam:public Student
//{
//    int phy;
//    int chem;
//    int maths;
//
//protected:
//    int getPhy()
//    {
//        return phy;
//    }
//    int getChem()
//    {
//       return chem;
//    }
//    int getMaths()
//    {
//        return maths;
//    }
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the physics, chemistry and maths marks: ";
//        cin>>phy>>chem>>maths;
//    }
//    void out()
//    {
//        cout<<endl<<"Phy:"<<phy<<"\t Chem:"<<chem<<"\t Maths:"<<maths;
//    }
//};
//class Sport:public Student
//{
//    int point;
//
//protected:
//    int getPoint()
//    {
//        return point;
//    }
//public:
//    void input()
//    {
//        cout<<endl<<"Enter the point in sports: ";
//        cin>>point;
//    }
//    void output()
//    {
//        cout<<endl<<"Points:"<<point;
//    }
//
//};
//
//class Result:public Exam , public Sport
//{
//    char resultFlg;
//
//public:
//    void setResult()
//    {
//        Exam::setData();
//        in();
//        input();
//        if(getPhy()>=40 && getChem()>=40 && getMaths()>=40 && getPoint()>=5)
//        {
//            resultFlg ='y';
//        }
//        else
//        {
//            resultFlg ='n';
//
//        }
//    }
//    void display()
//    {
//        Exam::getData();
//        out();
//        output();
//        if(resultFlg=='y')
//        {
//            cout<<endl<<"Student is Pass!";
//        }
//        else
//        {
//            cout<<endl<<"Student is Fail!";
//        }
//    }
//};
//int main()
//{
//    Result r;
//    r.setResult();
//    r.display();
//
//    return 0;
//}

/// VIRTUAL BASE CLASS

//#include<iostream>
//using namespace std;
//class Student
//{
//    int id;
//    char nm[50];
//
//public:
//    void setData()
//    {
//        cout<<endl<<"Enter the id: ";
//        cin>>id;
//
//        cout<<endl<<"Enter the name: ";
//        cin.ignore();
//        cin.getline(nm,50);
//    }
//    void getData()
//    {
//        cout<<endl<<"Id: "<<id<<"\t Name: "<<nm;
//    }
//};
//class Exam: virtual public Student
//{
//    int phy;
//    int chem;
//    int maths;
//
//protected:
//    int getPhy()
//    {
//        return phy;
//    }
//    int getChem()
//    {
//       return chem;
//    }
//    int getMaths()
//    {
//        return maths;
//    }
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the physics, chemistry and maths marks: ";
//        cin>>phy>>chem>>maths;
//    }
//    void out()
//    {
//        cout<<endl<<"Phy:"<<phy<<"\t Chem:"<<chem<<"\t Maths:"<<maths;
//    }
//};
//class Sport:virtual public Student
//{
//    int point;
//
//protected:
//    int getPoint()
//    {
//        return point;
//    }
//public:
//    void input()
//    {
//        cout<<endl<<"Enter the point in sports: ";
//        cin>>point;
//    }
//    void output()
//    {
//        cout<<endl<<"Points:"<<point;
//    }
//
//};
//
//class Result:public Exam , public Sport
//{
//    char resultFlg;
//
//public:
//    void setResult()
//    {
//        setData();
//        in();
//        input();
//        if(getPhy()>=40 && getChem()>=40 && getMaths()>=40 && getPoint()>=5)
//        {
//            resultFlg ='y';
//        }
//        else
//        {
//            resultFlg ='n';
//
//        }
//    }
//    void display()
//    {
//        getData();
//        out();
//        output();
//        if(resultFlg=='y')
//        {
//            cout<<endl<<"Student is Pass!";
//        }
//        else
//        {
//            cout<<endl<<"Student is Fail!";
//        }
//    }
//};
//int main()
//{
//    Result r;
//    r.setResult();
//    r.display();
//
//    return 0;
//}

/// OBJECT ARRAYS
//#include<iostream>
//using namespace std;
//class Employee
//{
//    int id;
//    char nm[50];
//    int age;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the id of employee: ";
//        cin>>id;
//
//        cout<<endl<<"Enter the name of employee: ";
//        cin.ignore();
//        cin.getline(nm,50);
//
//        cout<<endl<<"Enter the age of employee: ";
//        cin>>age;
//
//    }
//    void out()
//    {
//        cout<<endl<<id<<"   \t"<<nm<<"   \t"<<age;
//        cout<<endl;
//    }
//};
//int const size=3;
//int main()
//{
//    Employee e[size];
//
//
//    for(int i=0;i<size;i++)
//    {
//        e[i].in();
//    }
//    cout<<endl<<" Id   \t Name   \t   Age ";
//    for(int i=0;i<size;i++)
//    {
//        e[i].out();
//    }
//    return 0;
//}

/// POINTER, VIRTUAL FUNCTION AND POLYMORPHISM
//#include<iostream>
//using namespace std;
//int main()
//{
//    int x=10;
//    int *p;
//    p=&x;
//
//    cout<<endl<<"Using x, x="<<x;
//    cout<<endl<<"Using p, p="<<p;
//}

/// USING POINTER TO REFER ARRAY
//#include<iostream>
//#include<iomanip>
//
//using namespace std;
//int main()
//{
//    int x[5];
//    int *p;
//    p=x;
//
//    cout<<endl<<"Enter the array elements: ";
//    for(int i=0;i<5;i++)
//    {
//        cin>>*(p+i);
//    }
//
//    cout<<endl<<"Array Elements are: ";
//    for(int i=0;i<5;i++)
//    {
//        cout<<setw(5)<<*(p+i);
//    }
//    return 0;
//}

/// DYNAMIC MEMORY ALLOCATION FOR POINTER USING "NEW"
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//    int cnt;
//
//    cout<<endl<<"Enter the count: ";
//    cin>>cnt;
//
//    int *p=new int[cnt];
//
//    cout<<endl<<"Enter the array elements: ";
//    for(int i=0;i<cnt;i++)
//    {
//        cin>>*(p+i);
//    }
//
//    cout<<endl<<"Entered array elements are: ";
//    for(int i=0;i<cnt;i++)
//    {
//        cout<<setw(5)<<*(p+i);
//    }
//    return 0;
//}

/// POINTER TO FUNCTION
//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//void add(int x, int y)
//{
//    cout<<endl<<"Addition: "<<(x+y);
//}
//void multi(int x, int y)
//{
//    cout<<endl<<"Multiplication: "<<(x*y);
//}
//
//int main()
//{
//    int a,b;
//
//    cout<<endl<<"Enter the values of a and b";
//    cin>>a>>b;
//
//    add(a,b);
//    multi(a,b);
//
//    void (*fptr)(int,int);
//
//    fptr=&add();
//    fptr(a,b);
//
//    fptr=*multi();
//    fptr(a,b);
//
//    return 0;
//}

/// POINTER TO OBJECT
//#include<iostream>
//using namespace std;
//class Item
//{
//    int ic;
//    float ip;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the item code and price: ";
//        cin>>ic>>ip;
//    }
//    void out()
//    {
//        cout<<endl<<"Item code: "<<ic<<"\t Price: "<<ip;
//    }
//};
//int main()
//{
//    Item ob;
//    ob.in();
//    ob.out();
//
//    Item *p;
//    p=&ob;
//
//    p->out();
//}

/// DYNAMIC MEMORY ALLOCATION FOR OBJECTS
//#include<iostream>
//using namespace std;
//class Item
//{
//    int ic;
//    float ip;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the item code and price: ";
//        cin>>ic>>ip;
//    }
//    void out()
//    {
//        cout<<endl<<"Item Code: "<<ic<<"\t Item Price: "<<ip;
//    }
//};
//int main()
//{
//    int cnt;
//    cout<<endl<<"Enter the element cout: ";
//    cin>>cnt;
//
//    Item *p;
//    p=new Item[cnt];
//
//    cout<<endl<<"Enter the information of "<<cnt<<" Items: ";
//    for(int i=0;i<cnt;i++)
//    {
//        (p+i)->in();
//    }
//
//    cout<<endl<<"The Information of "<<cnt<<" Items:";
//    for(int i=0;i<cnt;i++)
//    {
//        (p+i)->out();
//    }
//    return 0;
//}

/// POINTER TO CLASS MEMBERS
//#include<iostream>
//#include<iomanip>
//using namespace std;
//class Demo
//{
//    int x;
//    float y;
//
//public:
//    Demo()
//    {
//        x=1;
//        y=1.1;
//    }
//    Demo(int a1, int a2)
//    {
//        x=a1;
//        y=a2;
//    }
//    void display()
//    {
//        cout<<endl<<"x="<<x<<"\t y="<<y;
//    }
//};
//int main()
//{
//    Demo d;
//    d.display();
//
//    void (Demo::*fptr)()=&Demo::display;
//    (d.*fptr)();
//
//    return 0;
//}

///	 this pointer: It is keyword, which bydefault refer to invoking object.
//#include<iostream>
//using namespace std;
//class Person
//{
//    int uid;
//    int age;
//
//public:
//    void in()
//    {
//        cout<<endl<<"Enter the UID and age: ";
//        cin>>uid>>age;
//    }
//    void out()
//    {
//        cout<<endl<<"UID: "<<uid<<"Age: "<<age;
//    }
//
//    Person findElder(Person p2)
//    {
//        if(p2.age>age)
//        {
//            return p2;
//        }
//        else
//        {
//            return *this;
//        }
//    }
//};
//int main()
//{
//    Person p1;
//    p1.in();
//    p1.out();
//
//    Person p2;
//    p2.in();
//    p2.out();
//
//    Person p3=p1.findElder(p2);
//    cout<<endl<<"Elder Person: ";
//    p3.out();
//
//    return 0;
//}

/// Using the pointer in inheritance
//#include<iostream>
//using namespace std;
//class Demo
//{
//public:
//
//    void out()
//    {
//        cout<<endl<<"This is demo";
//    }
//};
//class Sample:public Demo
//{
//public:
//
//    void output()
//    {
//        cout<<endl<<"This is output";
//    }
//};
//int main()
//{
//    Demo d;
//    Sample s;
//
//    Demo *dp;
//    dp=&d;
//    dp->out();
//
////    Sample *sp;
////    sp=&s;
////    sp->output();
//
//    Sample *sp;
//    sp=&d; //error: invalid conversion from ‘Demo*’ to ‘Sample*’ [-fpermissive]
//    sp->out();
//               /// so here we cannot point child method from base pointer
//}

/// pointer of child points to object of child only  and and
/// base pointer points to both child and base but in point to child then typecasting required coz
/// base pointer points in first base class methods
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//class Demo
//{
//    public:
////	void display()
////	{
////		cout<<endl<<"In Demo display()";
////	}
//	void show()
//	{
//		cout<<endl<<"In Demo Show()";
//	}
//};
//
//class Sample:public Demo
//{
//    public:
//	void display()
//	{
//		cout<<endl<<"In Sample display()";
//	}
//};
//
//int main()
//{
//	Demo dob;
//	Sample sob;
//
//	//-----------------------------------------------------------------
//    // pointer of base pointing to child object
//
//    Demo *dp;
//
//	dp=&sob;
//	((Sample*)dp)->display();
//
//	return 0;
//}


///                              polymorphism

//#include<iostream>
//using namespace std;
//class Shape
//{
//public:
//
//     virtual void area()
//    {
//
//    }
//};
//class Rect:public Shape
//{
//public:
//    void area()
//    {
//        cout<<endl<<"In Rect area()";
//    }
//};
//
//class Circle: public Shape
//{
//public:
//    void area()
//    {
//        cout<<endl<<"In circle area()";
//    }
//};
//
//class Triangle: public Shape
//{
//public:
//    void area()
//    {
//        cout<<endl<<"In Triangle area()";
//    }
//};
//int main()
//{
//    Shape *s;
//
//    Rect r;
//    s=&r;
//    s->area();
//
//    Circle c;
//    s=&c;
//    s->area();
//
//    Triangle t;
//    s=&t;
//    s->area();
//
//    return 0;
//}

/// polymorphism - function overriding
//#include<iostream>
//using namespace std;
//class Shape
//{
//public:
//
//    virtual void area()=0; // pure virtual class
//
//};
//
//class Rect:public Shape
//{
//public:
//    void area()
//    {
//        cout<<endl<<"in Rect area()";
//    }
//};
//class Circle:public Shape
//{
//public:
//    void area()
//    {
//        cout<<endl<<"in Circle area()";
//    }
//};
//class Triangle:public Shape
//{
//public:
//    void area()
//    {
//        cout<<endl<<"in Triangle area()";
//    }
//};
//int main()
//{
//    Shape *s;
//    Rect r;
//    s=&r;
//    s->area();
//
//    Circle c;
//    s=&c;
//    s->area();
//
//    Triangle t;
//    s=&t;
//    s->area();
//
//    return 0;
//
//}

/// POINTER , VIRTUAL FUNCTIONS AND POLYMORPHISM EXERCISE
/// 9.1
//#include<iostream>
//using namespace std;
//class Shape
//{
//protected:
//    double x,y;
//
//public:
//    void get_data()
//    {
//        cout<<endl<<"Enter the value of x and y: ";
//        cin>>x>>y;
//    }
//    virtual void display_area()=0;
//};
//class Rect:public Shape
//{
//public:
//    void display_area()
//    {
//        double p= x *y;
//        cout<<endl<<"Area of Rectangle: "<<p;
//    }
//};
//class Triangle:public Shape
//{
//public:
//    void display_area()
//    {
//        double q= (1.0/2)*x *y;
//        cout<<endl<<"Area of Triangle: "<<q;
//    }
//};
//
//
//int main()
//{
//    Shape *s;
//
//
//    Rect r;
//    s=&r;
//    s->get_data();
//    s->display_area();
//
//    Triangle t;
//    s=&t;
//    s->get_data();
//    s->display_area();
//
//    return 0;
//}

/// 9.2
//#include<iostream>
//using namespace std;
//class Shape
//{
//protected:
//    double x,y;
//
//public:
//    void get_data()
//    {
//        cout<<endl<<"Enter the value of x and y: ";
//        cin>>x>>y;
//    }
//    void get_data(double a, double b)
//    {
//        x=a;
//        y=b;
//    }
//    virtual void display_area()=0;
//};
//class Rect:public Shape
//{
//public:
//    void display_area()
//    {
//        double p= x *y;
//        cout<<endl<<"Area of Rectangle: "<<p;
//    }
//};
//class Triangle:public Shape
//{
//public:
//    void display_area()
//    {
//        double q= (1.0/2)*x *y;
//        cout<<endl<<"Area of Triangle: "<<q;
//    }
//};
//class Circle:public Shape
//{
//public:
//    void display_area()
//    {
//        double r=(3.142*x*x);
//        cout<<endl<<"Area of circle: "<<r;
//    }
//};
//
//
//int main()
//{
//    Shape *s;
//
//
//    Rect r;
//    s=&r;
//    s->get_data();
//    s->display_area();
//
//    Triangle t;
//    s=&t;
//    s->get_data();
//    s->display_area();
//
//    Circle c;
//    s=&c;
//    s->get_data(4.3,0);
//    s->display_area();
//
//    return 0;
//}

///8.1
//#include<iostream>
//#include <bits/stdc++.h>
//using namespace std;
//class Account
//{
//    char nm[50];
//    int accno;
//    char type[10];
//
//public:
//    void in()
//    {
//
//        cout<<endl<<"Enter the account holder name: ";
//        cin.ignore();
//        cin.getline(nm,50);
//
//        cout<<endl<<"Enter the account number: ";
//        cin>>accno;
//
//        cout<<endl<<"Enter the account type: ";
//        cin.ignore();
//        cin.getline(type,10);
//    }
//    void out()
//    {
//        cout<<endl<<"Name: "<<nm<<" \t Account Number: "<<accno<<" \t Account Type: "<<type;
//    }
//};
//
//class Saving: public Account
//{
//    double deposit,bal,rate,time,CI;
//
//
//public:
//    void input()
//    {
//        in();
//        cout<<endl<<"Enter the balance: ";
//        cin>>bal;
//        cout<<endl<<"Enter the deposit: ";
//        cin>>deposit;
//        cout<<endl<<"Enter the rate: ";
//        cin>>rate;
//        cout<<endl<<"Enter the time duration: ";
//        cin>>time;
//    }
//
//    void compoundInterset()
//    {
//        double A = bal * ((pow((1 + rate / 100), time)));
//         CI = A - bal;
//
//        cout<<endl<<"Compound Interest: "<<CI;
//    }
//    void output()
//    {
//        out();
//        double upbal=bal + deposit + CI;
//        cout<<endl<<"Updated balance: "<<upbal;
//    }
//};
//class Current : public Account
//{
//    double bal,withdrawl,x;
//
//public:
//    void set()
//    {
//        in();
//        cout<<endl<<"Enter the balance: ";
//        cin>>bal;
//        cout<<endl<<"Enter the withdrawl amount: ";
//        cin>>withdrawl;
//    }
//    void display()
//    {
//        out();
//
//        x=bal-withdrawl;
//        cout<<endl<<"Updated balance after withdrawl: "<<x;
//        if(bal<withdrawl)
//        {
//            cout<<endl<<"Cannot withdrawl You Have not minimum balance!";
//        }
//    }
//};
//int main()
//{
//    Saving s;
//    s.input();
//    s.output();
//    s.compoundInterset();
//
//    Current c;
//    c.set();
//    c.display();
//
//    return 0;
//}




//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class MyCharArray
//{
//private:
//    char str[60];
//    char one[60];
//public:
//    void set(char ch[])
//    {
//        cout << "Enter the String: ";
//        cin.getline(str, 60);
//    }
//    void show()
//    {
//        cout << endl << "String is: " << str;
//    }
//    char toUpper(int val)
//    {
//        char s = val;
//        if (s >= 'a' && s <= 'z')
//        {
//            s = s - 32;
//        }
//        return s;
//    }
//    bool isPalindrome()
//    {
//        int len = strlen(str);
//        for (int i = 0; i < len / 2; ++i)
//        {
//            if (str[i] != str[len - i - 1])
//            {
//                return false;
//            }
//        }
//        return true;
//    }
//    void toLower()
//    {
//        for (int i = 0; str[i] != '\0'; i++)
//        {
//            if (str[i] >= 'A' && str[i] <= 'Z')
//            {
//                str[i] = str[i] + 32;
//            }
//        }
//        cout << endl << str;
//    }
//    int  isMatching(char *s)
//    {
//        strcpy(one, s);
//        if (strcmp(str, one) == 0)
//        {
//            return 1;
//        }
//        else
//        {
//            return 0;
//        }
//    }
//};
//
//int main()
//{
//    MyCharArray c;
//    char ptr[60];
//    int no;
//
//    c.set(ptr);
//
//    c.show();
//
//    cout << endl << "Enter Any Number: ";
//    cin >> no;
//    cin.ignore(); // To clear the buffer before taking the next input
//    char ab = c.toUpper(no);
//    cout << endl << "Upper Character is: " << ab << endl;
//
//    if (c.isPalindrome())
//    {
//        cout << endl << "The string is a palindrome.";
//    }
//    else
//    {
//        cout << endl << "The string is not a palindrome.";
//    }
//
//    cout << endl << "Enter another string to match: ";
//    cin.getline(ptr, 60);
//
//    if (c.isMatching(ptr))
//    {
//        cout << endl << "Matching String";
//    }
//    else
//    {
//        cout << endl << "Not Matching String";
//    }
//
//    return 0;
//}

