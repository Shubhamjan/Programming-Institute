#include<stdio.h>
#include<string.h>
int language1()
{
	int c,a=100;
	c=3500+ a;			//a= admission fees
	return c;
}
int language2()
{
	int c,a=100;
	c=4000+ a;
	return c;
}
int language3()
{
	int c,a=150;
	c=7500+ a;
	return c;
}
int language4()
{
	int c,a=150;
	c=7500+ a;
	return c;
}
int main()
{
	int press,language,Fees,Phone_Number,date;
	
	printf("\t\t\t\t   ****Welcome****\n\t\t\t\t\tto\n\t\t\t\tProgramming Institute\n\n");
	
	front:
	printf("\nFor Enquiry press (1) or for Admission press (2):\n");
	scanf("%d",&press);
	if(press==1)
	{
		printf("We are providing the following programming language:\n");
		printf("1.C\t2.C++\t3.Python\t4.Java\n");
		printf("Please select the language which you want to learn press the key:\n");
		scanf("%d",&language);
		if(language==1)
		{
			printf("Course fee:-Rs.3500\t");
			printf("Course Duration:- 45 Days");
			printf("\ncontents of C langauge are as follows:\n");
			printf("For content press(1):\n");
			scanf("%d",&press);
			printf("Introduction:-\n\nKeywords & Identifier\nVariables & Constants\nC Data Types\nC Input/Output\nC Operators\nC Introduction Examples\n\n\nC Flow Control:-\n\nC if...else\nC for Loop\nC while Loop\nC break and continue\nC switch...case\nC Programming goto\nControl Flow Examples\n\n\nC Functions:-\n\nC Programming Functions\nC User-defined Functions\nC Function Types\nC Recursion\nC Storage Class\nC Function Examples\n\n\nC Programming Arrays:-\nC Programming Arrays\nC Multi-dimensional Arrays\nC Arrays & Function\n\n\nC Programming Pointers:-\n\nC Programming Pointers\nC Pointers & Arrays\nC Pointers And Functions\nC Memory Allocation\nArray & Pointer Examples\n\n\nC Programming Strings:-\n\nC Programming String\nC String Functions\nC String Examples\n\n\nStructure And Union:-\n\nC Structure\nC Struct & Pointers\nC Struct & Function\nC Unions\nC struct Examples\n\n\nC Programming Files:-\n\nC Files Input/Output\nC Files Examples");
			printf("\nIf you want to stop & go to front for more enquiry, press(1):\n");
			scanf("%d",&press);
			if(press==1)
			{
				goto front;
			}
			else
			{
				void exit();
			}
		}
		else if(language==2)
		{
			printf("Course fee:-Rs.4000\t");
			printf("Course Duration:- 45 Days");
			printf("\ncontents of C++ langauge are as follows:\n");
			printf("For content press(1):\n");
			scanf("%d",&press);
			printf("C++ HOME\nC++ Intro:\nC++ Get Started\nC++ Syntax\nC++ Output\nC++ Comments\nC++ Variables\nC++ User Input\nC++ Data Types\nC++ Operators\nC++ Strings\nC++ Math\nC++ Booleans\nC++ Conditions\nC++ Switch\nC++ While Loop\nC++ For Loop\nC++ Break/Continue\nC++ Arrays\nC++ References\nC++ Pointers\n\nC++ Functions :\nC++ Functions\nC++ Function Parameters\nC++ Function Overloading\n\nC++ Classes:\nC++ OOP\nC++ Classes/Objects\nC++ Class Methods\nC++ Constructors\nC++ Access Specifiers\nC++ Encapsulation\nC++ Inheritance\nC++ Polymorphism\nC++ Files\nC++ Exceptions");
			printf("\nIf you want to stop & go to front for more enquiry, press(1):\n");
			scanf("%d",&press);
			if(press==1)
			{
				goto front;
			}
			
		}
		else if(language==3)
		{
			printf("Course fee:-Rs.7500\t");
			printf("Course Duration:- 90 Days");
			printf("\ncontents of Python langauge are as follows:\n");
			printf("For content press(1):\n");
			scanf("%d",&press);
			printf("Introduction:-\n\nGetting Started\nKeywords and IdentifiersStatements & Comments\nPython Variables\nPython Datatypes\nPython Type Conversion\nPython I/O and import\nPython Operators\nPython Namespace\n\n\nPython Flow Control:-\n\nPython if...else\nPython for Loop\nPython while Loop\nPython break and continue\nPython Pass\n\n\nPython Functions:-\n\nPython Functions\nFunction Argument\nPython Recursion\nAnonymous Function\nGlobal, Local and Nonlocal\nPython Global Keyword\nPython Modules\nPython Package\n\n\nPython Datatypes:-\n\nPython Numbers\nPython List\nPython Tuple\nPython String\nPython Set\nPython Dictionary\n\n\nPython Files:-\n\nPython File Operation\nPython Directory\nPython Exception\nPython Exception Handling\nPython User-defined Exception\n\n\nPython Object & Class:-\n\nPython OOP\nPython Class\nPython Inheritance\nMultiple Inheritance\nOperator Overloading\n\n\nPython Advanced Topics:-\n\nPython Iterator\nPython Generator\nPython Closure\nPython Decorators\nPython Property\nPython RegEx");
			printf("\nIf you want to stop & go to front for more enquiry , press(1):\n");
			scanf("%d",&press);
			if(press==1)
			{
				goto front;
			}
		}
		else
		{
			printf("Course fee:-Rs.7500\t");
			printf("Course Duration:- 90 Days");
			printf("\ncontents of Java langauge are as follows:\n");
			printf("For content press(1):\n");
			scanf("%d",&press);
			printf("\n\nJava Introduction\nJava Flow Control\nJava Arrays\nJava OOP (I)\nJava OOP (II)\nJava OOP (III)\nJava Exception Handling\nJava List\nJava Queue\nJava Map\nJava Set\nJava I/O Streams\nJava Reader/Writer\nAdditional Topics");
			printf("\nIf you want to stop & go to front for more enquiry, press(1):\n");
			scanf("%d",&press);
			if(press==1)
			{
				goto front;
			}
		}
	}
	else
	{
		printf("We are providing the following programming language:\n");
		printf("1.C\t2.C++\t3.Python\t4.Java\n");
		printf("Please select the language which you want to take admission, press the key:\n");
		scanf("%d",&language);
		//printf("Admi")
		if(language==1)
		{
			char name[50],add[100];
			printf("Fill your details:\n");
			printf("Enter your name:\n");
			scanf("\n");
			gets(name);
			printf("Enter the address:\n");
			gets(add);
			printf("\t\t\t****Admission Receipt****");
			printf("\nName =%s",name);
			printf("\nAddress = %s",add);
			Fees=language1();
			printf("\nYour Fees is %d",Fees);
			printf("\nIf you want to stop & go to front for more enquiry, press(1):\n");
			scanf("%d",&press);
			if(press==1)
			{
				goto front;
			}
		}
		else if(language==2)
		{
			char name[100],add[100];
			printf("Fill your details:\n");
			printf("Enter your name:\n");
			scanf("\n");
			gets(name);
			printf("Enter the address:\n");
			gets(add);
			printf("\t\t\t****Admission Receipt****");
			printf("\nName = %s",name);
			printf("\nAddress = %s",add);
			Fees=language2();
			printf("\nYour Fees is %d",Fees);
			printf("\nIf you want to stop & go to front for more enquiry, press(1):\n");
			scanf("%d",&press);
			if(press==1)
			{
				goto front;
			}
		}
		else if(language==3)
		{
			char name[50],add[100];
			printf("Fill your details:\n");
			printf("Enter your name:\n");
			scanf("\n");
			gets(name);
			printf("Enter the address:\n");
			gets(add);
			printf("\t\t\t****Admission Receipt****");
			printf("\nName = %s",name);
			printf("\nAddress = %s",add);
			Fees=language3();
			printf("\nYour Fees is %d",Fees);
			printf("\nIf you want to stop & go to front for more enquiry, press(1):\n");
			scanf("%d",&press);
			if(press==1)
			{
				goto front;
			}
		}
		else
		{
			char name[50],add[100];
			printf("Fill your details:\n");
			printf("Enter your name:\n");
			scanf("\n");
			gets(name);
			printf("Enter the address:\n");
			gets(add);
			printf("\t\t\t****Admission Receipt****");
			printf("\nName = %s",name);
			printf("\nAddress = %s",add);
			Fees=language4();
			printf("\nYour Fees is %d",Fees);
			printf("\nIf you want to stop & go to front for more enquiry, press(1):\n");
			scanf("%d",&press);
			if(press==1)
			{
				goto front;
			}
		}
	}
	return 0;
}