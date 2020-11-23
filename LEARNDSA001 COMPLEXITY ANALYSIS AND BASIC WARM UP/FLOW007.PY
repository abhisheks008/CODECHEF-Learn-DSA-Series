test_case = input()
number = []
for i in range(int(test_case)):
    num = int(input())
    Reminder = 0
    Reverse = 0
    
    while(num > 0):    
        Reminder = num %10    
        Reverse = (Reverse *10) + Reminder    
        num = num //10 
    
    number.append(Reverse)

for i in number:
    print(i)
