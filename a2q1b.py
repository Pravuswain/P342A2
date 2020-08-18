#define each 
prompt1 = "number of equidistant points in line:"
N=6
#N = int(input(prompt1))

arr=[]
#(x1,y1) ~ (m,o) & (x2,y2) ~ (n,p)
#looping 
for m in range(0,N):
	for o in range(0,N):
		for n in range (0,N):
			for p in range(0,N):
				#calculating distance 
				d = abs(m-n)+abs(o-p)
				#store it in array 
				arr.append(d)
	

#to check if all datas are intact we can print the array
#print(arr)
#print(len(arr))
#print(sum(arr))
print(f'Average distance : {sum(arr)/len(arr)}')


#Average distance : 3.888888888888889