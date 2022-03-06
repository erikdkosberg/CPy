import os
import pprint

os.chdir("//usr/include/")

# Prints all c header files alphabetically
header_files = [z for z in os.listdir() if z[-2:] == ".h"]
p = pprint.PrettyPrinter(width=150, compact=True)
p.pprint(sorted(header_files))

