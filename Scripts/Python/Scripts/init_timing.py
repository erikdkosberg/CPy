class Test:
	def __init__(self):
		print("...initializing")


	def some_method(self):
		print("method")


	def some_other_method(self):
		self.some_method()

"""The init method only gets called when the object is created, it does not
get recreated when one method accesses another method in the class"""

obj = Test()
obj.some_method()
obj.some_other_method()
