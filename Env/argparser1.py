

import argparse

class ArgParser:
	def __init__(self):
		self.description = "Compile and Run Standard C Scripts using GCC and Python"
		self.parser = argparse.ArgumentParser(self.description)
		self.group = self.parser.add_mutually_exclusive_group()


	def exclusive_groups(self):
		self.group.add_argument("-t", help="--target", action="store_true")
		self.group.add_argument("-c", help="--concepts", action="store_true")
		self.group.add_argument("-s", help="--scripts", action="store_true")


	def description_map(self,a):
		dm = {
			"-t": "Specify target path",
			"-c": "Sets path to concepts directory",
			"-s": "Sets path to scripts directory"
		}
		return dm[a]


	def parser_args(self):
		self.parser.add_argument("File", type=str, help="Name of C file")
		args = self.parser.parse_args()
		print(args)
		return args

	def check_verbose(self, a):
		if a.quiet:
			print(a)
		elif a.verbose:
			print(self.description_map(a))
		else:
			print(a.file)

	def main(self):
		out = self.parser_args()

if __name__ == '__main__':
	obj = ArgParser()
	obj.main()
