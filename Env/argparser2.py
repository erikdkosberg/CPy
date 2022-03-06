import argparse
import textwrap

parser = argparse.ArgumentParser(
	prog="PROG",
	formatter_class=argparse.RawDescriptionHelpFormatter,
	description=textwrap.dedent('''\
		-------------------------------------------------------------------------
		|									|
		|	Compile and Run Standard C Scripts using GCC and Python		|
		|									|
		-------------------------------------------------------------------------

		[ -t | -s | -c]

		"-t": "Specify target path",
		"-c": "Sets path to concepts directory",
		"-s": "Sets path to scripts directory"'''
	))

parser.print_help()
