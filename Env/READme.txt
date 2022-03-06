So far we have implemented a Python script to execute a C file with the gcc compiler.

We have added flags for:
	-t
	-->specify the path that the file sits on

	-c
	-->sets path to the Concepts directory

	-s
	-->sets path to the Scripts directory

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
