height=float(input("input height:"))
height=input(float("input height:"))

print(27/2==13.5,27%2!=1,27/2==13)

i=8
i=+2
print(i)


number=[0,1,2,3,4,5]
print(number[2:3]+number[1:3]+number[0:6:2])

course=["ML","Data science","AI","Python"]
course.insert(1,"Deep learning")
del course[2]
course.remove("Python")
course=course*2



i=[1,2,3,4,5]
del i[2]

# i=[1,2,3,4,5]
# del i[5]=6

# i=(1,2,3,4,5)
# del i[5]=6


if 4+5==9:
    print("nine")
if 5+5==9:
    print("nine")
else:
    print("ten")
print("ten")

l=[2,3,5,6,9]
for i in l:
    print(i**2)

number=[1,2,2,3,2,3,1,3]
s=set(number)
number=list(s)
print(number)


i=0
while i<4:
    j=i/2
    k=j+2
    print(k)

l=["Great Learning","Data Science","Machine Learning", "AI"]
for i in l:
    print(i[l])

i=0
while i<5:
    print(i)
    i+=1

def square(n):
    return n*n
square(2)

def search(seq):
    for i in seq:
        if i ==8:
            return 8
    else:
        print(i)

seq=[2,7,1,8,1,4]
n=search(seq)

def func(num1):
    print(num1)

num2=20
func(num2)

def cube(n):
    return n**3
for i in range(0,10):
    c=cube(i)
    print(c)

def cube(n):
    if n==10:
        return 1
    print(n**3)
    cube(n+1)
cube(0)


def add(a,b,c):
    sum=0
    sum=a+b+c
    return sum
sum=add(1,2,3)

n=8
for i in range(1,11):
    print("{}^{}=".format(n,i),n**i)