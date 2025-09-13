import sys

testNum = int(sys.stdin.readline());

for i in range(0, testNum):
    a, b = map(int,input().split())

    lastCom = pow(a, b, 10);

    if lastCom == 0:
        lastCom = 10;

    print(lastCom);