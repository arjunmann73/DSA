def bubblesort(x):
    if len(x) == 0:
        return
    size = len(x)
    for i in range(size):
        for j in range(size-1-i):
            if x[j] > x[j+1]:
                temp = x[j]
                x[j] = x[j+1]
                x[j+1] = temp
    return
    
def main():
    testCaseOne = [3,2,4,5,6,7,1]
    testCaseTwo = [5,4,3,2,1]

    bubblesort(testCaseOne)
    bubblesort(testCaseTwo)

    print("Testcase 1: ", testCaseOne)
    print("Testcase 2: ", testCaseTwo)

if __name__ == "__main__":
    main()