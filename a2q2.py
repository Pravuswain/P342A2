#given
A = [1,2,3]
B = [4,5,6]
#create array for sum
summ =[]
#looping over index
for i in range(0,3):
	for j in range(0,3):
		#using condition to add only terms with equal indices
		if i==j :
			C= A[i]+B[j]
			summ.append(C)
print(f"A+B = {summ}")	
#for ot product
dot =[]
for i in range(0,3):
	for j in range(0,3):
		if i==j :
			D= A[i]*B[j]
			dot.append(D)
print(f"Dot product of vector A and B : {sum(dot)}")	

#OUTPUT
#A+B = [5, 7, 9]
#Dot product of vector A and B : 32