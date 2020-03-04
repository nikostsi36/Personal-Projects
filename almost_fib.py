s = []

a = input("give me a number :")
a = int(a)

b = input("give me a second number :")
b = int(b)

s.append(a)
s.append(b)

def next_num:
	c=len(s)
	s.append(s[c-2]+s[c-1])
	print(" " + str(s[c]))

print("Something like fibonacci number: " + str(a) + " " + str(b))
i=0
for i<10:
	next_num() 
