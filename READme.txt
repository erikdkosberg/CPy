The purpose of c.py is to be able to quickly test C source code without
having to make an executable and run it in the command line.

With Python - you can change the path, compile the source code, run it
and delete the executable all in one shot.

Usage...
python c.py main.c -e // calls main.c in the Env directory

So far we have implemented a Python script to execute a C file with the gcc compiler.

We have added flags for:
	-t
	-->specify the path that the file sits on

	-c
	-->sets path to the Concepts directory

	-s
	-->sets path to the Scripts directory

	-a
	-->sets path to the Env directory
TODO:
	::
	modify arg parsing logic to handle exclusive and multiple arguments

	::
	-lc example1.c
	-->run example1 from the concepts directory

	::
	-ls project1.c
	-->run project1 from scripts directory

	::
	-lt ../C/Ref/Concepts/ example1.c
	-->run example1 from concepts directory

	::
	-x
	-->log output of a program
	
	::
	-y
	-->launch new test case test1.py and test1.c
