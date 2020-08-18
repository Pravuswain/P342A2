#importing the text file in the same directory as 
filename = 'Mmatrix.txt'

#creating empty list and strings for each line
R1=[]
R2=[]
R3=[]
string1 = ''
string2 = ''
string3 = ''
with open(filename) as file_object:
	#reading the lines
	lines = file_object.readlines()


#For first column
for line in lines[0]:
	#stripping all spaces
	string1 += line.strip()
	#converting strings into list

	f'{list(string1)}'


for i in string1:
	R1.append(int(i))
#print(R1)

#for second column
for line in lines[1]:
	string2 += line.strip()

	f'{list(string2)}'


for i in string2:
	R2.append(int(i))
#print(R2)

#for 3rd column
for line in lines[2]:
	string3 += line.strip()

	f'{list(string3)}'
	

for i in string3:
	R3.append(int(i))
#print(R3)
#matrix 3X3 form
M =[R1,
	R2,
	R3]

print(f'M = {M}')

#using similar operation over new variables or lists
filename = 'Nmatrix.txt'


R1=[]
R2=[]
R3=[]
string1 = ''
string2 = ''
string3 = ''
with open(filename) as file_object:
	lines = file_object.readlines()



for line in lines[0]:
	string1 += line.strip()

	f'{list(string1)}'
	#ok = print(f'{list(M.strip)}')

for i in string1:
	R1.append(int(i))
#print(R1)

for line in lines[1]:
	string2 += line.strip()

	f'{list(string2)}'
	

for i in string2:
	R2.append(int(i))
#print(R2)

for line in lines[2]:
	string3 += line.strip()

	f'{list(string3)}'


for i in string3:
	R3.append(int(i))
#print(R3)

N =[R1,
	R2,
	R3]

print(f'N= {N}')

lol=[]
McrossN =[]
#creating empty lists for each column
c1=[]
c2=[]
c3=[]
#looping over index of outer list
for i in range(0,3):
	#looping over index of inner list for bth M and N
	for j in range(0,3):
		#defining cross and adding each time j is looped
		cross = 0
		for k in range(0,3):	
			cross += M[i][k]*N[k][j]
#As we need to add after looping through each 			
		lol.append(cross)
#breaking list as per required column
c1 = lol[0:3]
c2 = lol[3:6]
c3 = lol[6:9]
#defining M X N
McrossN = [ c1,
			c2,
			c3]
print(f'M X N = {McrossN}')

#for MXA
A = [1,2,3]

lol2 =[]

for i in range(0,3):
	cross2 = 0
	for k in range(0,3):
		cross2 += M[i][k]*A[0]
	lol2.append(cross2)
print(f'M X A = {lol2}')	


#OUTPUT
#M = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
#N= [[1, 1, 2], [3, 1, 5], [6, 1, 8]]
#M X N = [[25, 6, 36], [55, 15, 81], [85, 24, 126]]
#M X A = [6, 15, 24]