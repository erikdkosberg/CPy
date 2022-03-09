import os
import sys
import time

class Reader:
	"""This program takes the name of a C file and uses system calls to run it on gcc."""

	def __init__(self):
		self.name = "Reader Library"
		self.num_args = len(sys.argv)
		self.the_args = sys.argv
		self.scripts = os.listdir()

	# If file not specified, prompt here
	def get_filename(self):
		return input("Please enter the name of the c file (i.e. 'main.c')\n")


	# Build string for GCC compilation
	def gcc_commands(self, file_input):
		return f"gcc -o a {file_input} -Wall"


	# To check whether additional flags were specified
	def flags(self, flag):
		if flag == "s": # Now the scripts used are in /Scripts
			os.chdir("Scripts/")
			self.scripts = os.listdir()
		elif flag == "t": # Custom path
			os.chdir(input("Please enter desired path...\n"))
			self.scripts = os.listdir()
		elif flag == "c": # Concept path
			os.chdir("Ref/Concepts/")
			self.scripts = os.listdir()
		elif flag == "e": # Env path
			os.chdir("Env/")
			self.scripts = os.listdir()
		elif flag == "S": # Server path
			os.chdir("../C/Server/")
			self.scripts = os.listdir()

	# Get the filename (if exists) and parse any options
	def cmd_args(self):
		if self.num_args == 1:
			return self.get_filename()
		elif self.num_args == 2:
			return self.the_args[1]

		# Not in the else because we want to check this every time
		if self.num_args > 2:
			other_args = self.the_args[1:]
			for arg in other_args:
				print(arg)
				self.flags(arg[1:])
			return self.the_args[1]

	# Check for valid file, compile, run, delete, and log performance
	def main(self):
		try:
			file_obj = self.cmd_args()

			if file_obj not in self.scripts:
				os.write(2, "File not found in current directory...")
			elif file_obj[-2:] != ".c":
				os.write(2, "Invalid C File")
			else:
				os.system(self.gcc_commands(file_obj))
				self.timer = time.perf_counter()
				os.system("./a")
				self.timer = time.perf_counter() - self.timer
				print(f"\nProgram Executed in: {self.timer} sec(s)")
				os.system("rm a")
		except:
			os.write(2, "Could not run program\n")

if __name__ == '__main__':
	obj = Reader()
	obj.main()
