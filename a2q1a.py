#define each 
prompt1 = "number of equidistant points in line:"
#ask user for an input
n = int(input(prompt1))
#n=6
#create a list to store all observation data(optional)
arr = []
#take an arbitary point within the range
for i in range(0,n):
	#take another arbitary point within range
	for j in range(0,n):
		#now j loops within i i.e. if we select one i j runs till n and loop returns to another i
		#using absolute value we get all observatio by difference
		obs = abs(i-j)
		#append all within an array
		arr.append(obs)
#to check if all datas are intact we can print the array
print(arr)
print(f"avg. distance : {sum(arr)/len(arr)}")


#output
#[0, 1, 2, 3, 4, 5, 1, 0, 1, 2, 3, 4, 2, 1, 0, 1, 2, 3, 3, 2, 1, 0, 1, 2, 4, 3, 2, 1, 0, 1, 5, 4, 3, 2, 1, 0]
#avg. distance : 1.9444444444444444