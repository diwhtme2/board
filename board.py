def star():
    rank = int(input('Enter number of rank: '))
    
    for i in range(1, rank + 1):
        for j in range(i):
            print('* ', end='')
            

def checker():
    for i in range(19):
        for j in range(19):
            print('.  ', end='')
            
        print()


def chess():
    for i in range(8):
        for j in range(8):
            if (i + j) % 2 == 0:
                print('#  ', end='')
            else:
                print('.  ', end='')
                
        print()